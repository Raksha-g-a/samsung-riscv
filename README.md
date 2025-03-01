# samsung-riscv
The RISC-V Talent Development Program, powered by Samsung Semiconductor India Research (SSIR) in collaboration with VLSI System Design (VSD), is a strategic initiative aimed at cultivating a skilled workforce proficient in RISC-V and semiconductor technologies. This program is part of India's broader mission to establish a robust semiconductor ecosystem and reduce reliance on traditional hubs.
 Participants engage in a focused, hands-on cohort designed to impart practical knowledge in RISC-V architecture and semiconductor design. The curriculum encompasses fundamental physics, digital logic design, System-on-Chip (SoC) concepts, and Electronic Design Automation (EDA) tools. Emphasis is placed on practical labs and capstone projects, enabling learners to build and simulate circuits, and design CMOS inverters.

# Basic details 
Name:- RAKSHA G A 

College:- Sahyadri College of Engineering and Management Mangalore 

# Task1
Task is to install all the essential tools required for this samsung-RISCV Workshop such as Ubuntu on VMBox & refer to C based and RISCV based lab videos and execute the task of compiling the C code using gcc and riscv compiler.
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
To write a simple C program and to compile the C program using RISC-V GCC/SPIKE with the O1 and Ofast optimization flags and to generate and collect the RISC-V object dump for both -O1 and -Ofast.
 <details>
  
1.Simple C program Compilation.


2.Verify that your code is giving same output even when you use RISC-V compiler as shown.

  
3.Assembly code instructions  using the SPIKE tool.

4.RISC-V object dump for O1 optimization level.

 
5. RISC-V object dump for Ofast optimization level.
    
 </details>
 
# Task3
To identify 15 unique RISC-V instructions from the riscv-objdump of my application code and to determine the exact 32 bit instruction code from those 15 instructions.
<details>


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

3. I-type Instruction
In RV32, each instruction is of size 32 bits.
In I-type instruction, I stand for immediate which means that operations use Registers and Immediate value
This instruction type is used in immediate and load operations.
The entire 32 bits instruction is divided into 5 fields. 

Example: ADDI rd, rs1, imm

3. S-type Instruction
In RV32, each instruction is of size 32 bits.
In S-type instruction, S stand for store which means it is store type instruction that helps to store the value of register into the memory.
Mainly, this instruction type is used for store operations.
The entire 32 bits instruction is divided into 6 fields. 

Example: SW rs2, imm(rs1)

4. B-type Instruction
In RV32, each instruction is of size 32 bits.
In B-type instruction, B stand for branching which means it is mainly used for branching based on certain conditions.
The entire 32 bits instruction is divided into 8 fields.

Example: BEQ rs1, rs2, imm

5. U-type Instruction
In RV32, each instruction is of size 32 bits.
In U-type instruction, U stand for Upper Immediate instructions which means it is simply used to transfer the immediate data into the destination register.
The entire 32 bits instruction is divided into 3 fields.

Example: LUI rd, imm

6. J-type Instruction
In RV32, each instruction is of size 32 bits.
In J-type instruction, J stand for jump, which means that this instruction format is used to implement jump type instruction.
The entire 32 bits instruction is divided into 6 field.

Example: JAL rd, imm

</details>

# Task4
In this task, we will perform functional simulation of RISC-V instructions modeled as a Verilog netlist and observe the output waveforms.
<details>
 Instruction 1: ADD R6, R2, R1

 Instruction 2: SUB R7, R1, R2

 Instruction 3: AND R8, R1, R3

 Instruction 4: OR R9, R2, R5
 
 Instruction 5: XOR R10, R1, R4
</details>

# Task5
In this task, we have to choose a topic and add Project name and brief overview of the application.
<details>
 Name of the Project:- 
            2-BIT UP-COUNTER.

 Components required:-
         1.The VSDSquadron Mini board.      ->  1     
         2.LEDs.                            ->  2
         3. breadboard.                     ->  1
         4.jumper wires.                    ->  As required

 Truth Table
       number      In binary
       0              00
       1              01
       2              10
       3              11
      repeats...
  Working 
         It continuously counts from 0 to 3 in binary and after three it will turn to zero and then it repeats, since  it is a two bit counter.for symbol 0 LED will not glow and for symbol 1 LED will glow. 

  Applications of a 2-bit up-Counter
1. Frequency Division – It can be used as a frequency divider to reduce the input clock frequency by a factor of 4.
2. Modulo-4 Counter – Useful in applications where counting needs to be restricted to four states (e.g., cyclic operations).
3. Digital Clocks – Used as a small part of digital clocks for counting seconds, minutes, or dividing higher frequency signals.
4. LED Sequencing – Controls the blinking or pattern of LEDs in simple circuits.
5. Addressing Memory Locations – Can help in addressing a 4-word memory in basic digital memory units.
6. Basic State Machines – A 2-bit counter is useful in designing small state machines for control applications.
7. Rotary Encoder Processing – Helps track position changes in rotary encoders with limited resolution.
8. Simple Timer Circuits – Used in time-delay circuits that require counting up to four cycles before triggering an action.
9. Traffic Light Control (Basic) – Can control a simple four-phase traffic light sequence.
10. Educational and Learning Purposes – Helps students understand the working of counters and flip-flops in digital logic.
</details>

# Task6
 In this Task we have to do Final Code Submission & Application Demo.
 
