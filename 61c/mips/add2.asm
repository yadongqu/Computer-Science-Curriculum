main:
    ## Get first number from user, put into $t0
    li  $v0, 5
    syscall
    move $t0, $v0

    ## Get second number from user, put into $t1.
    li  $v0, 5
    syscall
    move $t1, $v0


    add $t2, $t0, $t1

    ## Print out $t2.
    move $a0, $t2
    li   $v0, 1
    syscall

    li  $v0, 10
    syscall

# end of add2.asm