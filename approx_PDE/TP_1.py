import numpy as np
import matplotlib.pyplot as plt

#np.linspace(start_pt, end_pt, num_of_pts, endpoint=T/F, retstep=T/F)

#numpy elementwise product and dot product:
#A*B
#A.dot(B)  or np.dot(A,B)

#_____________

#e.x.1.1

#Matrix transpose
#a.transpose()

# a 1-D array could not be transposed, so we should create a matrix-object,
# i.e. array([[]]) instead of array([])
u = np.array([[1,2,3,4]]).transpose()
v = np.array([[-1,0,1,2]]).transpose()
w = np.array([[2,-2,1,0]]).transpose()

uv_T = np.dot(u, v.transpose())
v_Tw = np.dot(v.transpose(), w)
norm_2_u =
norm_1_v =
norm_infty_u_minus_v =

#______________

#e.x.1.2

mat_null = np.zeros(3,3)
mat_ones = np.ones(3,3)
mat_id = np.eye(3,3)
mat_diag = np.diag(np.arange(4),k=0)

#______________

#e.x.1.3

A = np.array([[2,-1,0,0],[-1,2,-1,0],[0,-1,2,-1],[0,0,-1,2]])
B = np.array([[0,1,2,3],[-1,0,1,2],[-2,-1,0,1],[-3,-2,-1,0]])

#______________

#e.x.1.4

#______________

#e.x.1.5

#______________

#e.x.1.6

x = np.linspace(0,2*np.pi,200)
def func_ft(x,t=0):
    return np.sin(x-t)

plt.plot(x,func_ft(x))
plt.show()
#______________

#e.x.1.7

x_1 = np.linspace(-1,1,200)
def func_ft_1(x,t):
    return np.exp(-t*x**2)*(1-x**2)