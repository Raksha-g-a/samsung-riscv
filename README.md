# samsung-riscv
The RISC-V Talent Development Program, powered by Samsung Semiconductor India Research (SSIR) in collaboration with VLSI System Design (VSD), is a strategic initiative aimed at cultivating a skilled workforce proficient in RISC-V and semiconductor technologies. This program is part of India's broader mission to establish a robust semiconductor ecosystem and reduce reliance on traditional hubs.
 Participants engage in a focused, hands-on cohort designed to impart practical knowledge in RISC-V architecture and semiconductor design. The curriculum encompasses fundamental physics, digital logic design, System-on-Chip (SoC) concepts, and Electronic Design Automation (EDA) tools. Emphasis is placed on practical labs and capstone projects, enabling learners to build and simulate circuits, and design CMOS inverters.

# Basic details 
Name:- RAKSHA G A 

College:- Sahyadri College of Engineering and Management Mangalore 

gmail-id :- garaksha15@gmail.com

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

INSTRUCTIONS
1. lui a2, 0x1
Load Upper Immediate (LUI):
Loads the immediate value 0x1 into the upper 20 bits of register a2 while setting the lower 12 bits to zero.
Used for constructing large constants.
2. lui a0, 0x21
Loads 0x21 into the upper 20 bits of a0.
3. addi sp, sp, -16
Add Immediate (ADDI):
Subtracts 16 from the stack pointer (sp), allocating stack space.
4. addi a2, a2, 384
Adds 384 to a2 (previously set by lui).
5. li a0, 0
Load Immediate (LI) [pseudo-instruction]
Loads the value 0 into register a0.
6. sd ra, 8(sp)
Store Double (SD)
Stores the return address (ra) into memory at sp + 8.
7. jal ra, 104cc <printf>
Jump and Link (JAL)
Calls printf by jumping to 104cc and storing the return address in ra.
8. ld ra, 8(sp)
Load Double (LD)
Loads the previously stored return address back into ra.
9. ret
Return
Equivalent to jalr zero, ra, 0, returning to the caller.
10. auipc a5, 0xfffff
Add Upper Immediate to PC (AUIPC)
Computes an address relative to the program counter.
11. addi a5, a5, -224
Adds -224 to a5.
12. beqz a5, 100f8 <register_fini+0x18>
Branch if Equal to Zero (BEQZ)
If a5 == 0, jumps to address 100f8.
13. jal a0, 272 <__libc_fini_array>
Calls __libc_fini_array.
14. j 101b4 <atexit>
Unconditional Jump (J)
Jumps to 101b4.
15. lw a0, 0(sp)
Load Word (LW)
Loads a 32-bit word from memory at sp into a0.
</details>

# Task4
In this task, we will perform functional simulation of RISC-V instructions modeled as a Verilog netlist and observe the output waveforms.
<details>
 Instruction 1: ADD R6, R2, R1
              Its operation is addition. It will give sum the inputs A and B and give us the output as their sum.

 Instruction 2: SUB R7, R1, R2
              It will perform the subtraction operation. Output will bw the difference of A and B . 
 
 Instruction 3: AND R8, R1, R3
              The output will be the bitwise operation of AND of A and B.      
 
 Instruction 4: OR R9, R2, R5
              The output will be the bitwise operation of OR of A and B. 
 
 Instruction 5: XOR R10, R1, R4
              The output will be the bitwise operation of XOR of A and B. 
</details>

# Task5
In this task, we have to choose a topic and add Project name and brief overview of the application.
<details>
 Name of the Project:- 
            2-BIT UP-COUNTER USING VSDSQUDRON MINI BOARD.

 Components required:-
         1.The VSDSquadron Mini board.      ->  1          
         2.LEDs.                            ->  2        
         3. breadboard.                     ->  1          
         4.jumper wires.                    ->  As required        

 Truth Table
            
       0     ->         00                 
       1     ->         01               
       2     ->         10                
       3     ->         11                  
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
 <details>
  #include <ch32v00x.h>
#include <debug.h>

#define COUNTER_GPIO_PORT GPIOC
#define COUNTER_GPIO_PIN_0 GPIO_Pin_0
#define COUNTER_GPIO_PIN_1 GPIO_Pin_1
#define COUNTER_CLOCK_ENABLE RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE)

void NMI_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void HardFault_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void Delay_Init(void);
void Delay_Ms(uint32_t n);

int main(void)
{
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
    SystemCoreClockUpdate();
    Delay_Init();

    GPIO_InitTypeDef GPIO_InitStructure = {0};

    COUNTER_CLOCK_ENABLE;
    GPIO_InitStructure.GPIO_Pin = COUNTER_GPIO_PIN_0 | COUNTER_GPIO_PIN_1;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(COUNTER_GPIO_PORT, &GPIO_InitStructure);

    uint8_t counter = 0;
    while (1)
    {
        GPIO_WriteBit(COUNTER_GPIO_PORT, COUNTER_GPIO_PIN_0, (BitAction)((counter >> 0) & 1));
        GPIO_WriteBit(COUNTER_GPIO_PORT, COUNTER_GPIO_PIN_1, (BitAction)((counter >> 1) & 1));
        
        counter = (counter + 1) % 4; // Cycle through 00, 01, 10, 11
        Delay_Ms(500);
    }
}

__attribute__((interrupt("WCH-Interrupt-fast"))) void NMI_Handler(void) {}
__attribute__((interrupt("WCH-Interrupt-fast"))) void HardFault_Handler(void)
{
    while (1)
    {
    }
}
 </details>
