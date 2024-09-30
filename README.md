# **Roadmap to Becoming an HPC Specialist**
> 2024.09.17 ~ 2025.09



1. **Requirements**: Real world requirements based on JD (nvidia, ...)
2. **Overview**: Main branches of focus. (`Quarter Plan`)
3. **Month Plan**: Key content and objectives for each branch, including open-source contributions.
4. **Week Plan**: Specific, detailed activities for each week.

---

## **1. Requrements**



| **Category**                 | **Technologies/Skills**                                                                      | **Additional Notes**                                                   |
| ---------------------------- | -------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------- |
| **Programming Languages**    | - C++<br>- Fortran                                                                           | - Direct experience with Fortran is a huge plus                        |
| **Parallel Programming**     | - OpenACC<br>- OpenMP<br>- CUDA implementation<br>- C++ Standard Library Parallel Algorithms | - Experience with GPU programming<br>- Expertise in parallel computing |
| **Compilers and Toolchains** | - Flang<br>- LLVM<br>- MLIR                                                                  | - Direct experience with LLVM is a huge plus                           |
| **Additional Skills**        | - English proficiency<br>- Algorithm and System Design                                       | - Essential for effective communication and problem-solving            |

**Notes:**

- **C++ Standard Library Parallel Algorithms**: Proficiency in using and implementing parallel algorithms provided by the C++ standard library.
- **OpenACC and OpenMP**: Experience in using these APIs for parallel programming to leverage multi-core CPUs and GPUs.
- **Flang**: Knowledge of the Fortran front-end compiler that is part of the LLVM project.
- **MLIR and LLVM**: Understanding of compiler infrastructures; MLIR is a subproject of LLVM aimed at building reusable and extensible compiler components.
- **CUDA Implementation**: Experience in developing GPU-accelerated applications using NVIDIA's CUDA platform.

---
## **2. Overview**

| Quarter       | Months       | Focus Area                                |
| ------------- | ------------ | ----------------------------------------- |
| **Quarter 1** | Months 1-3   | **Modern C++ Mastery**                    |
| **Quarter 2** | Months 4-6   | **CUDA Programming and GPU Architecture** |
| **Quarter 3** | Months 7-9   | **OpenACC and OpenMP**                    |
| **Quarter 4** | Months 10-12 | **Fortran, Flang, LLVM, and MLIR**        |



**Quarter 1 (Months 1-3): Modern C++ Mastery**

- **Objective**: Achieve advanced proficiency in modern C++, focusing on features essential for HPC and parallel programming.

**Quarter 2 (Months 4-6): CUDA Programming and GPU Architecture**

- **Objective**: Attain expertise in CUDA programming to develop efficient GPU-accelerated applications.

**Quarter 3 (Months 7-9): OpenACC and OpenMP**

- **Objective**: Gain in-depth knowledge of OpenACC and OpenMP for effective parallelization on GPUs and CPUs.

**Quarter 4 (Months 10-12): Fortran, Flang, LLVM, and MLIR**

- **Objective**: Master Fortran programming and understand compiler technologies to contribute to open-source projects.

---

## **3. Month Plan**

**Quarter 1: Modern C++ Mastery**

- **Month 1: Fundamental and Modern C++ Concepts**
  - **Key Topics**:
    - Basic to advanced C++ concepts using **learncpp.com**.
    - Modern C++ features (C++17 to C++23).
  - **Open-Source Contribution**:
    - Start contributing to beginner-friendly C++ open-source projects.

- **Month 2: C++ Concurrency and Multithreading**
  - **Key Topics**:
    - Multithreading, concurrency, synchronization.
    - Utilizing modern C++ concurrency libraries.
  - **Open-Source Contribution**:
    - Participate in projects involving concurrent programming.

- **Month 3: Building a Complex C++ Project**
  - **Key Topics**:
    - Design and implement a multithreaded C++ application.
    - Apply advanced C++ and concurrency concepts.
  - **Open-Source Contribution**:
    - Open-source your project and engage with the community for feedback.

---

*(Continue the Month Plan for Quarters 2, 3, and 4 as previously outlined, focusing on the key topics and open-source contributions.)*

---

## **4. Week Plan**



### **Quarter 1: Modern C++ Mastery**

#### **Month 1: Fundamental and Modern C++ Concepts**

**Key Topics and Keywords:**

- **Basic Syntax and Fundamentals**
  - [ ] Variables and Data Types
  - [ ] Operators (Arithmetic, Logical, Bitwise)
  - [ ] Control Flow Statements (`if`, `else`, `switch`, loops)
  - [ ] Functions (Declaration, Definition, Calling)
  - [ ] Basic Input/Output (`cin`, `cout`)
- **Pointers and Memory Management**
  - [ ] Pointers and References
  - [ ] Dynamic Memory Allocation (`new`, `delete`)
  - [ ] Pointer Arithmetic
- **Arrays and Strings**
  - [ ] Arrays (One-dimensional, Multi-dimensional)
  - [ ] C-Style Strings
  - [ ] `std::string` Class
- **Introduction to Object-Oriented Programming**
  - [ ] Classes and Objects
  - [ ] Access Specifiers (`public`, `private`, `protected`)
  - [ ] Constructors and Destructors
  - [ ] Encapsulation and Abstraction
- **Modern C++ Features**
  - [ ] `auto` Keyword
  - [ ] Range-Based For Loops
  - [ ] `nullptr` Keyword
  - [ ] Enumerations (`enum class`)
  - [ ] Initialization Lists

---

#### **Month 2: Advanced C++ Features and Concurrency**

**Key Topics and Keywords:**

- **Advanced Object-Oriented Concepts**
  - [ ] Inheritance (Single, Multiple)
  - [ ] Polymorphism (Compile-time, Runtime)
  - [ ] Virtual Functions and Abstract Classes
  - [ ] Operator Overloading
- **Templates and Generic Programming**
  - [ ] Function Templates
  - [ ] Class Templates
  - [ ] Template Specialization
  - [ ] Variadic Templates
- **Smart Pointers and Memory Management**
  - [ ] `std::unique_ptr`
  - [ ] `std::shared_ptr`
  - [ ] `std::weak_ptr`
  - [ ] RAII (Resource Acquisition Is Initialization)
- **Lambda Expressions and Functional Programming**
  - [ ] Lambda Syntax and Capture Lists
  - [ ] `std::function`
  - [ ] `std::bind`
- **Concurrency and Multithreading**
  - [ ] `std::thread` Class
  - [ ] Thread Creation and Joining
  - [ ] Mutexes (`std::mutex`)
  - [ ] Lock Guards (`std::lock_guard`, `std::unique_lock`)
  - [ ] Condition Variables (`std::condition_variable`)
  - [ ] Atomic Operations (`std::atomic`)
  - [ ] Futures and Promises (`std::future`, `std::promise`)
  - [ ] Thread Synchronization Techniques
  - [ ] Deadlocks and Race Conditions

---

#### **Month 3: C++ Standard Library and Parallel Algorithms**

**Key Topics and Keywords:**

- **Standard Template Library (STL)**
  - [ ] Containers (`std::vector`, `std::list`, `std::map`, `std::set`, `std::unordered_map`)
  - [ ] Iterators and Iterator Categories
  - [ ] Algorithms (`std::sort`, `std::find`, `std::accumulate`, etc.)
  - [ ] Functors and Function Objects
  - [ ] Predicate Functions
- **Exception Handling**
  - [ ] Try-Catch Blocks
  - [ ] Custom Exception Classes
  - [ ] Exception Safety
- **Advanced Modern C++ Features**
  - [ ] Move Semantics and Rvalue References
  - [ ] Perfect Forwarding
  - [ ] `constexpr` and Compile-Time Computation
  - [ ] Structured Bindings (C++17)
  - [ ] `if constexpr` (C++17)
  - [ ] Concepts (C++20)
  - [ ] Ranges Library (C++20)
- **Parallel Algorithms and Execution Policies**
  - [ ] Execution Policies (`std::execution::seq`, `par`, `par_unseq`)
  - [ ] Parallel Algorithms (`std::for_each`, `std::transform`, `std::reduce`)
  - [ ] Task-Based Parallelism
  - [ ] Asynchronous Operations (`std::async`)
  - [ ] Performance Benchmarking and Profiling Tools

---

### **Quarter 2: CUDA Programming and GPU Architecture**

#### **Month 4: CUDA Fundamentals**

**Key Topics and Keywords:**

- **GPU Architecture Basics**
  - [ ] Understanding GPU vs. CPU Architecture
  - [ ] CUDA Programming Model
  - [ ] Thread Hierarchy (Grids, Blocks, Threads)
  - [ ] SIMT (Single Instruction, Multiple Threads)
- **CUDA Syntax and APIs**
  - [ ] Kernel Functions (`__global__`, `__device__`, `__host__`)
  - [ ] Launch Parameters and Execution Configuration
  - [ ] Memory Management (`cudaMalloc`, `cudaFree`, `cudaMemcpy`)
  - [ ] CUDA Error Handling (`cudaError_t`, `cudaGetLastError`)
- **Basic CUDA Programming**
  - [ ] Writing and Launching Kernels
  - [ ] Thread and Block Indexing (`threadIdx`, `blockIdx`, `blockDim`, `gridDim`)
  - [ ] Synchronization (`__syncthreads()`)
  - [ ] Simple Programs (Vector Addition, Matrix Multiplication)

---

#### **Month 5: Advanced CUDA Programming and Optimization**

**Key Topics and Keywords:**

- **Memory Optimization**
  - [ ] Memory Types (Global, Shared, Constant, Texture, Registers)
  - [ ] Shared Memory Usage
  - [ ] Memory Coalescing
  - [ ] Bank Conflicts in Shared Memory
  - [ ] Zero-Copy and Unified Memory
- **Performance Optimization**
  - [ ] Occupancy Calculation
  - [ ] Warp Scheduling and Divergence
  - [ ] Instruction-Level Parallelism
  - [ ] Asynchronous Streams and Concurrency
  - [ ] Event Timing (`cudaEvent_t`)
- **CUDA Libraries and Tools**
  - [ ] Thrust Library (High-Level Abstractions)
  - [ ] cuBLAS (CUDA Basic Linear Algebra Subprograms)
  - [ ] cuFFT (CUDA Fast Fourier Transform)
  - [ ] cuDNN (CUDA Deep Neural Network Library)
- **Debugging and Profiling**
  - [ ] NVIDIA Nsight Systems and Nsight Compute
  - [ ] CUDA-MEMCHECK
  - [ ] Profiling Techniques and Metrics
  - [ ] Identifying and Resolving Bottlenecks

---

#### **Month 6: CUDA Project Development**

**Key Topics and Keywords:**

- **Project Planning and Design**
  - [ ] Defining Project Objectives
  - [ ] Algorithm Selection for GPU Acceleration
  - [ ] Data Structures Suitable for GPU
- **Implementation**
  - [ ] Integrating CUDA Kernels into Applications
  - [ ] Optimizing Kernel Launch Configurations
  - [ ] Efficient Memory Transfers
  - [ ] Handling Large Data Sets and Tiling Techniques
- **Testing and Validation**
  - [ ] Verifying Computational Accuracy
  - [ ] Comparing CPU and GPU Results
  - [ ] Stress Testing and Edge Cases
- **Performance Optimization**
  - [ ] Kernel Profiling and Optimization
  - [ ] Utilizing Advanced CUDA Features
  - [ ] Scalability Analysis
- **Documentation and Presentation**
  - [ ] Writing Clear Documentation and User Guides
  - [ ] Preparing Technical Presentations
  - [ ] Sharing Code and Results on GitHub

---

### **Quarter 3: OpenACC and OpenMP**

#### **Month 7: Mastering OpenMP**

**Key Topics and Keywords:**

- **OpenMP Fundamentals**
  - [ ] Compilation with OpenMP Support
  - [ ] Parallel Regions (`#pragma omp parallel`)
  - [ ] Work-Sharing Constructs (`for`, `sections`, `single`, `master`)
- **Data Scoping and Sharing**
  - [ ] Data Scope Clauses (`private`, `firstprivate`, `lastprivate`, `shared`, `reduction`)
  - [ ] Default Data Scoping
- **Synchronization Mechanisms**
  - [ ] Critical Sections (`#pragma omp critical`)
  - [ ] Atomic Operations (`#pragma omp atomic`)
  - [ ] Barriers (`#pragma omp barrier`)
  - [ ] Flush Operation
- **Advanced OpenMP Features**
  - [ ] Tasking Model (`#pragma omp task`)
  - [ ] Task Dependencies
  - [ ] SIMD Directives (`#pragma omp simd`)
  - [ ] Cancellation and Taskloop Constructs
- **Performance Tuning**
  - [ ] Environment Variables (`OMP_NUM_THREADS`, `OMP_SCHEDULE`)
  - [ ] Scheduling Clauses (`static`, `dynamic`, `guided`)
  - [ ] Affinity and Thread Binding

---

#### **Month 8: Mastering OpenACC**

**Key Topics and Keywords:**

- **OpenACC Fundamentals**
  - [ ] Compilation with OpenACC Support
  - [ ] Parallel and Kernels Directives (`#pragma acc parallel`, `#pragma acc kernels`)
  - [ ] Data Management Directives (`data`, `enter data`, `exit data`)
- **Loop Optimization and Parallelization**
  - [ ] Loop Clauses (`gang`, `worker`, `vector`)
  - [ ] Loop Nesting and Collapse
  - [ ] Reduction Operations
- **Asynchronous Execution**
  - [ ] Async Clauses and Queues
  - [ ] Wait Operations
  - [ ] Synchronization between Host and Device
- **Interoperability**
  - [ ] Combining OpenACC with CUDA Code
  - [ ] Using OpenACC in C++ and Fortran
  - [ ] Porting Existing Applications to OpenACC
- **Profiling and Debugging**
  - [ ] Tools for OpenACC Profiling (e.g., NVIDIA Nsight)
  - [ ] Debugging Techniques
  - [ ] Common Pitfalls and Solutions

---

#### **Month 9: Parallel Programming Projects**

**Key Topics and Keywords:**

- **Project Development with OpenMP and OpenACC**
  - [ ] Selecting Suitable Applications for Parallelization
  - [ ] Code Refactoring for Parallelism
  - [ ] Implementing Algorithms using OpenMP
  - [ ] Implementing Algorithms using OpenACC
- **Performance Analysis and Optimization**
  - [ ] Benchmarking Techniques
  - [ ] Identifying Performance Bottlenecks
  - [ ] Optimization Strategies for CPU and GPU
  - [ ] Comparing OpenMP and OpenACC Implementations
- **Advanced Topics**
  - [ ] Hybrid Programming Models (MPI with OpenMP/OpenACC)
  - [ ] Portability and Scalability Considerations
  - [ ] Energy Efficiency in Parallel Computing
- **Documentation and Reporting**
  - [ ] Writing Technical Reports
  - [ ] Visualizing Performance Data
  - [ ] Preparing for Presentations and Code Demos

---

### **Quarter 4: Fortran, Flang, LLVM, and MLIR**

#### **Month 10: Learning Modern Fortran**

**Key Topics and Keywords:**

- **Fortran Basics**
  - [ ] Program Structure (`PROGRAM`, `END PROGRAM`)
  - [ ] Variable Declarations and Data Types (`INTEGER`, `REAL`, `COMPLEX`, `LOGICAL`, `CHARACTER`)
  - [ ] Control Flow Statements (`IF`, `ELSE IF`, `DO` loops, `SELECT CASE`)
- **Procedures and Modules**
  - [ ] Functions and Subroutines
  - [ ] Modules and `USE` Statements
  - [ ] Interfaces and Abstract Interfaces
  - [ ] Recursion in Fortran
- **Advanced Features**
  - [ ] Arrays (Static, Dynamic, Allocatable)
  - [ ] Array Operations and Intrinsic Functions
  - [ ] Derived Data Types (`TYPE`, `END TYPE`)
  - [ ] Pointer Variables and Memory Allocation
- **Interoperability with C**
  - [ ] The `ISO_C_BINDING` Module
  - [ ] Interfacing Fortran with C Functions
  - [ ] Calling Fortran from C and Vice Versa
  - [ ] Mixed-Language Programming Practices

---

#### **Month 11: Understanding Flang, LLVM, and MLIR**

**Key Topics and Keywords:**

- **Flang Compiler**
  - [ ] Installation and Environment Setup
  - [ ] Compiling Fortran Programs with Flang
  - [ ] Flang Compiler Options and Flags
  - [ ] Understanding Flang's Integration with LLVM
- **LLVM Fundamentals**
  - [ ] LLVM Architecture and Components
  - [ ] Intermediate Representation (IR) Syntax
  - [ ] Writing and Modifying LLVM Passes
  - [ ] Using LLVM Tools (`llvm-as`, `llvm-dis`, `opt`, `llc`)
  - [ ] Building and Testing LLVM from Source
- **MLIR (Multi-Level Intermediate Representation)**
  - [ ] MLIR Design Goals and Architecture
  - [ ] Dialects, Operations, and Types in MLIR
  - [ ] Writing MLIR Code and Passes
  - [ ] Integrating MLIR with Existing Compiler Workflows
  - [ ] Examples of MLIR in Compiler Development

---

#### **Month 12: Open-Source Contributions and Interview Preparation**

**Key Topics and Keywords:**

- **Open-Source Contribution Workflow**
  - [ ] Finding and Selecting Projects (LLVM, Flang, etc.)
  - [ ] Understanding Contribution Guidelines and Code of Conduct
  - [ ] Setting Up Development Environment and Toolchains
  - [ ] Git and GitHub Proficiency (Forking, Branching, Pull Requests)
- **Contributing to Projects**
  - [ ] Identifying Issues and Feature Requests
  - [ ] Writing High-Quality Code and Documentation
  - [ ] Code Review Process and Incorporating Feedback
  - [ ] Communication with Maintainers and Community Members
- **Interview Preparation**
  - [ ] Reviewing Core Concepts (C++, CUDA, OpenMP/OpenACC, Fortran)
  - [ ] Solving Algorithm and Data Structure Problems
  - [ ] System Design and Architecture Principles
  - [ ] Behavioral Interview Questions and STAR Method
- **Finalizing Application Materials**
  - [ ] Updating Resume and Tailoring for HPC Roles
  - [ ] Crafting a Compelling Cover Letter
  - [ ] Preparing Portfolio and Project Showcases (GitHub, Personal Website)
  - [ ] Practicing Mock Interviews (Technical and HR)

---

#### **Visual Summary Diagram**

Below is a simplified diagram representing the yearly plan:

```
Yearly Plan
├── Quarter 1: Modern C++ Mastery
│   ├── Month 1: Fundamental and Modern C++ Concepts
│   ├── Month 2: Concurrency and Multithreading
│   └── Month 3: Complex C++ Project
├── Quarter 2: CUDA Programming
│   ├── Month 4: CUDA Fundamentals
│   ├── Month 5: Advanced CUDA Programming
│   └── Month 6: CUDA Project Development
├── Quarter 3: OpenACC and OpenMP
│   ├── Month 7: Mastering OpenMP
│   ├── Month 8: Mastering OpenACC
│   └── Month 9: Parallel Programming Projects
└── Quarter 4: Fortran and Compiler Technologies
    ├── Month 10: Learning Modern Fortran
    ├── Month 11: Understanding Flang and LLVM
    └── Month 12: Open-Source Contributions and Interviews
```
