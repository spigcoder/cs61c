.globl f # this allows other files to find the function f

# f takes in two arguments:
# a0 is the value we want to evaluate f at
# a1 is the address of the "output" array (read the lab spec for more information).
# The return value should be stored in a0
f:
    # Your code here
	# 在这里如果想要使用数组的下标来访问一个数组的指针，我们要将这个下标乘4（左移2）
	#然后加到这个数组的地址上去
	addi a0, a0, 3
	slli t0, a0, 2
	add a1, a1, t0
	lw a0, 0(a1)
    # This is how you return from a function. You'll learn more about this later.
    # This should be the last line in your program.
    jr ra
