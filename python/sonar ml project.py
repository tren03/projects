import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score

# data collection and proccesing
df = pd.read_csv(r"C:\Users\vishn\Desktop\computer\python\Copy of sonar data.csv",header=None)
# print(df.head())
# print(df.shape) #gives rows and columns
# print(df.describe()) #gives basic info like count(number of rows in each column), mean, standard dev, min max et("25%" means 25% of values are lesser than value at 25%)-- it gives information about each column
# print(df[60].value_counts()) # prints the number of occurances of a value in the current column , 60 refers to index of column
#MORE DATA = MORE ACCURACY
# print(df.groupby(60).mean()) #groups the data by taking unique values in column 60(R,M) and finding mean of the columns of the unique values

#SEPRERATING DATA AND LABELS (SUPERVISED LEARNING)
X = df.drop(columns=60,axis=1) #by default axis is 0 which searches by row, therefore for searching for column, we need to specify axis as 1. for removing multiple columns, columns=[4,5,20] where nos in square brackets are indices
# print(X)
Y=df[60]
# print(Y)
x_train,x_test,y_train,y_test=train_test_split(X,Y,test_size=0.1,stratify=Y,random_state=1) #test size tells how much of total data should be test part, stratify splits data equally based on unique Y values(R,M) for training data and random state randomizes data
# print(x_train.shape)

#TRAINING MODEL
model=LogisticRegression()
model.fit(x_train,y_train)

#MODEL EVAL
x_train_prediction=model.predict(x_train)
acc= accuracy_score(x_train_prediction,y_train)
print('accuracy on training data = {}'.format(acc))

x_test_predicion = model.predict(x_test)
acc2 = accuracy_score(x_test_predicion,y_test)
print('accuracy on test data = {}'.format(acc2))

# testing for input
input_data = X.loc[[200][:]]
# print(input_data)
inp=np.asarray(input_data)
print(model.predict(inp))






