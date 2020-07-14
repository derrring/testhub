import numpy as np
import matplotlib.pyplot as plt

# e.x.2.1

# 2.1.1

def func_1(x):
    return np.sin(2*np.pi*x)


def dhf_r(f,x,h):
    return (f(x+h)-f(x))/h


def dhf_l(f,x,h):
    return (f(x)-f(x-h))/h


def dhf_c(f,x,h):
    return (f(x+h)-f(x-h))/(2*h)


def dhf(x):
    return 2*np.pi*np.cos(2*np.pi*x)


x = np.linspace(-1,1,1000)
h = np.linspace(0.001,0.1,20)

plt.plot(x,dhf_r(func_1,x,h[-1]),  linewidth=0.8, linestyle="-",label='right derivative')
plt.plot(x,dhf_l(func_1,x,h[-1]), linewidth=0.8, linestyle="-",label='left derivative')
plt.plot(x,dhf_c(func_1,x,h[-1]),linewidth=0.8, linestyle="-",label= 'central derivative')
plt.plot(x,dhf(x),linewidth=0.8, linestyle="-",label='theoretical derivative')

plt.rc('text', usetex=True)
plt.rc('font', family='serif')

plt.legend(loc='upper left')
plt.xlabel(r'f(x)')
plt.ylabel(r'x')
plt.title(r'\textbf{different derivatives with } h=0.1')


plt.show()


# 2.1.2-2.1.3

# error:$f(n)\approx \frac{C}{n^s}$
# $\ln f(n) \approx C' -s\ln n$
# plot:(\ln n, \ln error), the slope = -s

def errorf(f,h):
    return np.max(np.abs(dhf(x)-f(func_1,x,h)))

error_dhf_r = [errorf(dhf_r,h[i]) for i in range(20)]
error_dhf_c = [errorf(dhf_c,h[i]) for i in range(20)]


plt.plot(h[::-1],error_dhf_r[::-1],'r+',linewidth=0.8, linestyle="-",label = 'error estimation with right derivative ')
plt.plot(h[::-1],error_dhf_c[::-1],'b*',linewidth=0.8, linestyle="-",label = 'error estimation with central derivative')
# How to reverse a list? => a = a[::-1], but it's no use in this e.x.

plt.rc('text', usetex=True)
plt.rc('font', family='serif')
plt.legend(loc='upper right')
plt.xlabel(r'h')
plt.ylabel(r'\textbf{error}')
plt.xlim(0.105, 0)  # to inverse x axis !!!

plt.show()

# evidently order(h) = 1 for dhf_r
# determinate order(h) for dhf_c by using $\ln$


#_________________________

# e.x.2.2

def d2hf_c(f,x,h):
    result = (f(x+h)+f(x-h)-2*f(x))/h**2
    return result

def d2hf(x):
    return 0

#____________________________

# e.x.2.3

# 2.3.1
    # N.B. here we should hold $f(x)= \sin(2\pi x)$

def A_h(n,h=1):
    A_h = np.zeros((n,n))
# range() accept 2 parameters so we could use range(1,-1) instead of index_A_h
    index_A_h = list(range(n))
    for i in index_A_h[1:-1]:
        A_h[i][i] = 2
        A_h[i][i+1] = -1
        A_h[i][i-1] = -1
    A_h[0][0] = 2
    A_h[0][1] = -1
    A_h[-1][-1] = 2
    A_h[-1][-2] = -1
    return A_h/h**2

# 2.3.2

n = 200
eigenvalue,eigenvec = np.linalg.eig(A_h(n))

eigen_k = [k**2*np.pi**2 for k in range(1,n)]

plt.plot(eigenvalue)
plt.show()

# 2.3.3

