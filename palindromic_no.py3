"""Clean code challenge: 5
program for check the no. is palindrome or not."""

num = 0
while (num < 1): # input condition
	num = int(input('Input: '))

# make a copy of input num
copy_num = num
temp = reverse = 0

while (num != 0):
	temp = num % 10
	reverse = reverse * 10 + temp
	num = num // 10

"""comparing copy no. to output, if no. is same
then no. is palindrome else not"""
if (copy_num == reverse):
	print('Number is Palindrome:')
else:
	print('Number is not Palindrome:')