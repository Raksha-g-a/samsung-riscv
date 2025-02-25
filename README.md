# samsung-riscv
The RISC-V Talent Development Program, powered by Samsung Semiconductor India Research (SSIR) in collaboration with VLSI System Design (VSD), is a strategic initiative aimed at cultivating a skilled workforce proficient in RISC-V and semiconductor technologies. This program is part of India's broader mission to establish a robust semiconductor ecosystem and reduce reliance on traditional hubs.
 Participants engage in a focused, hands-on cohort designed to impart practical knowledge in RISC-V architecture and semiconductor design. The curriculum encompasses fundamental physics, digital logic design, System-on-Chip (SoC) concepts, and Electronic Design Automation (EDA) tools. Emphasis is placed on practical labs and capstone projects, enabling learners to build and simulate circuits, and design CMOS inverters.

# Basic details 
Name:- RAKSHA G A 

College:- Sahyadri College of Engineering and Management Mangalore 

# Task1
<details>



### C Program to Calculate Sum of Numbers from 1 to n.


The loop iterates from 1 to n, adding each value to sum.

The final sum is printed using the printf function.

 
### Assembly code representation of the program.

The instructions correspond to memory operations, control flow, and function calls in the RISC-V architecture.

Key instructions include addi, lw, sw, bge, and jal.

### Compilation and execution of the program.


#### 1. gcc sum1ton.c
Compiles the program using GCC.

#### 2. ./a.out
Executes the compiled file and prints the sum (e.g., "sum of numbers from 1 to 6 is 21").


### Compilation using RISC-V compiler.


#### 1.cat sum1ton.c
Displays the content of the C program.

#### 2. riscv64-unknown-elf-gcc -o sum1ton.o -mabi=lp64 -march=rv64i sum1ton.c
Compiles the program for RISC-V architecture.

#### 3. ls -ltr sum1ton.o
Lists the details of the generated object file.

#### 4. riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o sum1ton.o sum1ton.c
Compiles the program with high optimization.

</details>

# Task2
# Task3
<details>

Navigation Menu

Code
Issues
Pull requests
Samsung-RISC-V
/README.md
phoenix-chipdesign
phoenix-chipdesign
2 days ago
895 lines (599 loc) · 30.5 KB

Preview

Code

Blame
Samsung-RISC-V
NAME: Rohan V Poorma
College: KLE Institute of Technology
EmailID:rohanpoorma7@gmail.com
Github:https://github.com/phoenix-chipdesign

Task 1:Task is to install all the essential tools required for this samsung-RISCV Workshop such as Ubuntu on VMBox & refer to C based and RISCV based lab videos and execute the task of compiling the C code using gcc and riscv compiler
Task 2:SPIKE Simulation and Debugging the C code with Interactive Debugging Mode using Spike.
Task 3: Task is to identify various instruction type of all the given instructions with its exact 32 bits instruction code.
INSTRUCTIONS FORMAT IN RISC-V
There are 6 instruction formats in RISC-V:

R-format
I-format
S-format
B-format
U-format
J-format
1. R-type Instruction
In RV32, each instruction is of size 32 bits.
In R-type instruction, R stands for register
This instruction type is used to execute various arithmetic and logical operations.
The entire 32 bits instruction is divided into 6 fields as shown below. R-type
2. I-type Instruction
In RV32, each instruction is of size 32 bits.
In I-type instruction, I stand for immediate which means that operations use Registers and Immediate value
This instruction type is used in immediate and load operations.
The entire 32 bits instruction is divided into 5 fields as shown below.
I-type

Example: ADDI rd, rs1, imm

3. S-type Instruction
In RV32, each instruction is of size 32 bits.
In S-type instruction, S stand for store which means it is store type instruction that helps to store the value of register into the memory.
Mainly, this instruction type is used for store operations.
The entire 32 bits instruction is divided into 6 fields as shown below.
S_type_instruction

Example: SW rs2, imm(rs1)

4. B-type Instruction
In RV32, each instruction is of size 32 bits.
In B-type instruction, B stand for branching which means it is mainly used for branching based on certain conditions.
The entire 32 bits instruction is divided into 8 fields as shown below.
B-type

Example: BEQ rs1, rs2, imm

5. U-type Instruction
In RV32, each instruction is of size 32 bits.
In U-type instruction, U stand for Upper Immediate instructions which means it is simply used to transfer the immediate data into the destination register.
The entire 32 bits instruction is divided into 3 fields as shown below.
u-type

Example: LUI rd, imm

6. J-type Instruction
In RV32, each instruction is of size 32 bits.
In J-type instruction, J stand for jump, which means that this instruction format is used to implement jump type instruction.
The entire 32 bits instruction is divided into 6 fields as shown below.
J_type_instruction

Example: JAL rd, imm
