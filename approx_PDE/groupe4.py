import numpy as np
import matplotlib.pyplot as plt


def discretion(a,b,n):
    x = np.linspace(a,b,n+1)
    step = (a-b)/(n+1)
    return x,step


# A = A_h_1 +A_h_2


def A_h_1(n,h):
    A_h_1 = np.zeros((n,n))
# range() accept 2 parameters so we could use range(1,-1) instead of index_A_h
    index_A_h_1 = list(range(n))
    for i in index_A_h_1[1:-1]:
        A_h_1[i][i] = 2
        A_h_1[i][i+1] = -1
        A_h_1[i][i-1] = -1
    A_h_1[0][0] = 2
    A_h_1[0][1] = -1
    A_h_1[-1][-1] = 2
    A_h_1[-1][-2] = -1
    return 1/h*A_h_1



def g(x,x_interval):
    return x * (1 - x) * (x_interval[i] - x) / h * (x - x_interval[i - 1]) / h


def A_h_2(n,h,g):
    A_h_2 = np.zeros((n,n))
    index_A_h_2= list(range(n))

    for i in index_A_h_2[1:-1]:
        A_h_2[i][i]= h/2*(g(x_interval[i],x_interval)+g(x_interval[i-1],x_interval))
        A_h_2[i][i+1]= h/2*(g(x_interval[i],x_interval)+g(x_interval[i-1],x_interval))
        A_h_2[i][i-1]= h/2*(g(x_interval[i],x_interval)+g(x_interval[i-1],x_interval))
    return A_h_2


# determinate the function $f = c(a+(b-a)x)+(p^2\pi^2 +c)\sin(p\pi x)$

def f(a,b,x,p):
    return x*(1-x)*(a+(b-a)*x)+(p**2*np.pi**2+x*(1-x))*np.sin(p*np.pi*x)

# matrix $F_h$, calculated by quadrature
def F_vec(n,f,g):
    F = np.zeros((n,1))
    for i in range(n):
        F[i]= 1/2*(f(x_interval[i])*g(x_interval[i])-f(x_interval[i-1])*g(x_interval[i-1]))
    return F



N = 100
x_interval, h = discretion(0,1,N)

A = A_h_1(N)+A_h_2(N,h,g)
F = F_vec(N,f,g)

X = np.linalg.solve(A,F)


# Estimation of error




