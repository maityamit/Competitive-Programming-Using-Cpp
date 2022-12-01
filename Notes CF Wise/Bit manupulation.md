# Bit Manupulation


## Number Representation
(101)2 -> 1x2^2 + 0x2^1 + 1x2^0

if two element same then xor(^) will be zero 
>> right shift
<< left shift

right|_shift
int a=5;
int b=a>>1; (divide by 2)

left_shift
int a=3;
int b=a<<1; (multiply by 2)


## Odd/Even check

even number-> last bit 0
odd  number-> last bit 1

number&1 = 1 (odd number)
number&1 = 0 (even number)


## Swap two Numbers

a = a^b;
b = a^b;
a = a^b;



# Bit-Masking

## Find the ith bit
n->     100110101
mask-> 000100000
AND
n&mask -> zero -> 0
        -> nonzero -> 1

mask<<i (shift 1 ith)

## Set the ith bit

n->     100110101
mask-> 000100000
OR
n=n|mask 




# Power of XOOOOOOOOOR

xor(TT)
0 0 0
0 1 1
1 0 1
1 1 0


n^n = 0
0^n = n

1. Find single non-repeating element in repeating array 
ans = 0;
every element xor and hola ans will be your ans

2. Find two non-repeating elements in repeating array 
ans = 0;
every element xor in xor

5 4 1 4 3 5 1 2
ans = 3^2 = 1

last_bit 1 unke sath xor lete chalo...
then uske sath ans ko xor karo (ek number mil geya)













