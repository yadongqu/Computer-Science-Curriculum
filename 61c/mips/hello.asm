        .text

main:
        la      $a0, hello_msg
        li      $v0, 4
        syscall

        li      $v0, 10
        syscall

# Data for the program:
        .data
hello_msg:      .asciiz "Hello World\n"

# end hello.asm