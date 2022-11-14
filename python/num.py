from sklearn import linear_model
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
df = pd.read_csv(r"C:\Users\vishn\Desktop\computer\python\1.01. Simple linear regression.csv", encoding="unicode_escape")
# print(df)
df1 = df.iloc[:,[0,1]]
# print(df1)
df.columns.values[0]="SAT"
# print(df)
plt.scatter(df.GPA,df.SAT, color='red',marker='+')
plt.xlabel("sat")
plt.ylabel=("gpa")

rg = linear_model.LinearRegression()
rg.fit(df[["GPA"]],df.SAT)
plt.plot(df.GPA,rg.predict(df[["GPA"]]),color="blue")
plt.show()


