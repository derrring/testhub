import functools
import collections
import time
#Iteratable and Iterator
'''
x = [x**x for x in range(15) if x <=10]
x_iter = (x**x for x in range(15) if x <=10)

print(x)
isinstance(x_iter, collections.Iterable)
for i in range(16):
    print(next(x_iter))
'''
########################################
# High Order Functions
'''
def x_square(x):
    return x**2

L = [0,1,2,3,4,5,6,7]

L2 = map(x_square,L)

def addition(x,y):
    return x+y

L3 = functools.reduce(addition,L)



def threes(x):
    if(x%3==0):
        return True
    else:
        return False

L4 = list(filter(threes,L))

print(L4)

def fn(x,y):
    return x*10 +y

def char2num(s):
    digits = {'0': 0, '1': 1, '2': 2, '3': 3, '4': 4, '5': 5, '6': 6, '7': 7, '8': 8, '9': 9}
    return digits[s]

L = functools.reduce(fn,map(char2num,'13579'))

def normalize(name):
    return name.capitalize()

L =["adam","LISA","BarT"]

L_1 = list(map(normalize,L))

print(L_1)

L = [3,5,7,9]
def prod(L):
    return float(functools.reduce(lambda x,y : x*y, L))

######################


def turn_nums(s):
    digits = {'0': 0, '1': 1, '2': 2, '3': 3, '4': 4, '5': 5, '6': 6, '7': 7, '8': 8, '9': 9,'.':0.0}
    return digits[s]

def convertir(x,y):

    if y == '.':
        return y/10 +x




def str2floats(L):
    return functools.reduce(convertir, map(turn_nums,L))

L = '123.456'

print(str2floats(L))

'''
'''
def is_palindrome(n):
    s = str(n)
    l = len(n)
    if l%2 ==0 :
        for i in range(l):
            if s[i]==s[-i-1]:
                return True
            else: return False
    elif l%2 ==1:
        for i in range(l):
'''

###Function as Return, Closure
'''
def lazy_sum(*args):
    def sum():
        ax = 0
        for n in args:
            ax += n
            return ax
    return sum

def count():
    fs = []
    for i in range(1,4):
        def f():
            return i*i
        fs.append(f)
    return fs

f1,f2,f3 = count()

def count():
    def f(j):
        def g():
            return j*j
        return g
    fs = []
    for i in range(1,4)
        fs.append(f(i)
'''
'''
def createCounter():
    s = 0
    s += 1
    def counter():

        return s
    return counter

counterA = createCounter();
print(counterA(),counterA(),counterA(),counterA(),counterA())
'''


'''

def metric(fn):
    functools.wraps(fn)
    def wrapper(*arg,**kw):
        
    print("%s is executed in %s ms" %(fn.__name__,10.24))
    return fn

@metric
def slow(x,y,z):
    time.sleep(0.0012)
    return x*y*z

@metric
def fast(x,y):
    time.sleep(0.1234)
    return x+y

f = fast(11,22)
s = slow(11,22,33)

'''

'''

class Screen(object):
    @property
    def width(self):
        return self._width

    @width.setter
    def width(self,value):
        self._width = value

    @property
    def height(self):
        return self._height

    @height.setter
    def height(self,value):
        self._height = value

    @property
    def resolution(self):
        print("%d * %d" % (self._width,self._height))
        return self._width * self._height



s = Screen()
s.width=1024
s.height=768
s.resolution
'''

class Student(object):
    def __init__(self,name):
        self.name = name

print()