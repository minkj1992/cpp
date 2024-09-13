#include <cctype>
#include <sstream>
#include <stdexcept>
#include <string>

namespace log_line {
const std::string LOG_START = "[";
const std::string LOG_END = "]: ";

bool found(size_t pos) { return pos != std::string::npos; }

std::string to_upper(const std::string& str) {
  std::string upper_str = str;
  for (char& ch : upper_str) {
    ch = std::toupper(ch);
  }
  return upper_str;
}

std::string message(std::string line) {
  size_t pos = line.find(LOG_END);
  if (found(pos)) {
    return line.substr(pos + LOG_END.length());
  }
  return line;
}

std::string log_level(std::string line) {
  size_t s_pos = line.find(LOG_START);
  size_t e_pos = line.find(LOG_END);
  if (found(s_pos) && found(e_pos)) {
    size_t len_level = e_pos - (s_pos + 1);
    return to_upper(line.substr(s_pos + 1, len_level));
  }
  throw std::runtime_error("Log level not found");
}

std::string reformat(std::string line) {
  std::string level = log_level(line);
  std::string msg = message(line);
  std::ostringstream oss;
  oss << msg << " (" << level << ")";
  return oss.str();
}
}  // namespace log_line
