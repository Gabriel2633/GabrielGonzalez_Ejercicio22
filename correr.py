import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ MCMC.cpp -o walk.x")
os.system("./walk.x > walk.dat")

data = np.loadtxt("walk.dat")

plt.figure()
plt.hist(data[0:],bins=100)
plt.savefig("datos.png")