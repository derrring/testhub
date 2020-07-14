import numpy as np
import matplotlib.pyplot as plt

#E.X.1

def discretion(a,b,n):
    x = np.linspace(a,b,n)
    h = (a-b)/n
    return x,h

def A_h(n,c,h=1):
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
    A_h_1 = 1/h*A_h_1

    A_h_2 = np.zeros((n,n))
    index_A_h_2 = list(range(n))
    for i in index_A_h_2[1:-1]:
        A_h_1[i][i] = 2/3
        A_h_1[i][i+1] = 1/6
        A_h_1[i][i-1] = 1/6
    A_h_1[0][0] = 2/3
    A_h_1[0][1] = 1/6
    A_h_1[-1][-1] = 2/3
    A_h_1[-1][-2] = 1.6
    A_h_2 = c/h*A_h_2

    return A_h_1+A_h_2






def F_matrix(f,n,h):
    F = np.zeros((n,1))
    for i in range(n):
        F[i] =  h*f()*scipy.integrate.quad(f,0,1) \
        +

