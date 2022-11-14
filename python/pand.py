import pandas as pd
#reading csv file   index_col used to specify which column is used as first column
apple=pd.read_csv(r"C:\Users\vishn\Desktop\computer\python\Apple share.csv",encoding= 'unicode_escape',index_col=0)
#print(apple)
#creating series which can be imagined as a part of dataframe
ser=pd.Series([30, 35, 40], index=['2015 Sales', '2016 Sales', '2017 Sales'], name='Product A')
#print(ser)
dataf=pd.DataFrame(pd.DataFrame({'Bob': ['I liked it.', 'It was awful.'], 'Sue': ['Pretty good.', 'Bland.']}, index=['Product A', 'Product B']))
#print(dataf) index is the first row, by default it starts from 0,1,2,3
#apple.head()   prints the first 5 rows and columns
dataf.to_csv("new.csv") #converting data frame to csv file
d=pd.DataFrame({"one":[1,11,111]})


#columns act as attributes of an object- object here refers to a data frame
#print(apple["Price"][0]) # prints first elemnt under price column'



