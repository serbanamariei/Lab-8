# Lab 8 – Multidimensional Arrays: Statically Allocated Matrices
This folder contains solved problems from Lab 8 of the "Programming Fundamentals" course.
## Topics Covered
- Declaration and use of multidimensional arrays
- Static memory allocation for matrices
- Matrix input/output through pointer-based access
- Arithmetic operations on matrices (sum, product)
- Matrix transposition and orthogonality checks
- Matrix equality and identity matrix comparisons
- Real-world modeling with matrices
## Problems
### Part 1 – Static Matrices and Basic Input/Output
#### Problem 1.1 – Matrix Input and Display
- Read and display a matrix of type double using indirect addressing
- Basic 2D array manipulation via functions
#### Problem 1.2 – Water Consumption in Apartment Building
- Model an apartment building with 5 floors and 10 apartments per floor
- Track and process water consumption over two months
- Calculate:
  - Total consumption per apartment
  - Cost per apartment (given unit price)
  - Pipe loss detection by comparing sum of individual and global meters
  - Redistribute pipe losses proportionally to actual apartment usage
### Part 2 – Matrix Operations
#### Problem 2.1 – Matrix Sum and Product
- Read two matrices with integer elements
- Compute and display:
  - Sum of matrices (same dimensions)
  - Product of matrices (valid dimensions)
- User selects desired operation
- Functions:
  - Matrix input/output
  - Sum
  - Product
  - Dimension checks
#### Problem 2.2 – Matrix Transpose and Verification
- Compute and display transpose of a square matrix
- Verify the identity:
  (A × B)^T = B^T × A^T
- Compare and display both sides of the identity
- Static matrix allocation required
#### Problem 2.3 – Orthogonal Matrix Check
- Check if a square matrix is orthogonal: A × A^T = I
- Functions for:
  - Input/output
  - Transpose
  - Matrix multiplication
  - Comparison with identity matrix
- All matrices allocated statically
### Part 3 – Real World Applications with Matrices
#### Problem 3.1 – Dwarfs’ Pantry Orders
- Simulate monthly grocery logistics for n dwarfs with m pantry slots each
- Read from file PITICI.IN:
  - Daily wage G
  - Initial stocks and monthly orders
  - Product prices
- Compute:
  1. Final stock levels per dwarf
  2. Payment per dwarf
  3. Number of workdays needed to cover the expense (rounded)
- Display results with exact and rounded workdays
#### Problem 3.2 – Peak Parcels on a Grid
- Given a 2D grid of altitudes, identify all "peak" parcels
- A peak has strictly higher altitude than all its direct neighbors
- Input supports multiple datasets in one run
- Use matrix-based comparisons for neighborhood checking
## Build Instructions
To compile and link programs using statically allocated matrices:
```bash
clang -Wall -c matrixUtils.c      # Utility functions for matrix operations
clang -Wall -c main.c             # Main program
clang matrixUtils.o main.o -o output
```
# Build with Makefile
- To build the project:
```bash
make
```
- To clean up build files:
```bash
make clean
```
