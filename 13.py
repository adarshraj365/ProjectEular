# python has built-in support for large numbers 

sum = 0
for i in range(100):
	n = int(input())
	sum += n
l = []
n = sum
while(n):
	l.append(n%10)
	n = n//10

l.reverse()
print(l)