          #     exercise-2-working of pandas dataframe


import pandas as pd
import numpy as np
exam_data = {'name':['Anastasia','Dima','Katherine','james','Emily','Michael','Matthew','laura','kevin','Jonas'],
'score' : [12.5,9,16.5,np.nan,9,20,14.5,np.nan,8,19],
'attempts' : [1,3,2,3,2,3,1,1,2,1],
'qualify' : ['yes','no','yes','no','no','yes','yes','no','no','yes']}
labels = ['a','b','c','d','e','f','g','h','i','j']
df=pd.DataFrame(exam_data,index=labels)
print(df)

#pandas program to diasplay a summary of the basic information about a specified,dataframe and its data
df=pd.DataFrame(exam_data,index=labels)
print("summary of the basic information about this dataframe and its data:")
print(df.info())

# pandas program to get the first 3 rows of a given dataframe
df=pd.DataFrame(exam_data,index=labels)
print(" first 3 rows of a  dataframe:")
print(df.iloc[:3])

#pandas program to select the 'name' and 'score' columns from the following dataframe
df=pd.DataFrame(exam_data,index=labels)
print("select specific columns:")
print(df[['name','score']])

#pandas progam to selet the rows where the number of attempts in the examination is greater than 2
df=pd.DataFrame(exam_data,index=labels)
print("Number of attempts in the examinations is greater than 2:")
print(df[df['attempts']>2])

#pandas program to count the number of rows and columns of a dataframe
df=pd.DataFrame(exam_data,index=labels)
total_rows=len(df.axes[0])
total_columns=len(df.axes[1])
print("Number of Rows:"+str(total_rows))
print("Number of Columns:"+str(total_columns))

#pandas program to selet the rows where the score is missing ,i.e, is NaN
df=pd.DataFrame(exam_data,index=labels)
print("Rows where score is missing:")
print(df[df['score'].isnull()])

#pandas program to append a new ROW 'K' TO DATAFRAME WITH GIVEN VALUES FOR EACH COLUMN. NOW DELETE THE NEW ROW &RETURN THE ORIGINAL DATAFRAME
df=pd.DataFrame(exam_data,index=labels)
print("original rows:")
print(df)
print("\n Append a new row:")
df.loc['k']=['suresh',15.5,1,'yes']
print("print all records after insert a new record: ")
print(df)
print("\ndelete the new row and display the original rows:")
df=df.drop('k')
print(df)

#pandas program TO SORT THE DATAFRAME FIRST BY 'NAME' IN DESCENDING ORDER , THEN BY 'SCORE' IN ASCENDING ORDER
df=pd.DataFrame(exam_data,index=labels)
print("original rows:")
print(df)
df.sort_values(by=['name','score'],ascending=[False,True])
print("SORT THE DATA FRAME FIRST BY 'NAME' IN DESCENDING ORDER, THEN BY 'SCORE' IN ASCENDING ORDER:")
print(df)

#pandas program TO CHANGE THE NAME 'JAMES' TO 'SHYAM' IN NAME COLUMN OF THE DATAFRAME
df=pd.DataFrame(exam_data,index=labels)
print("original rows:")
print(df)
print("\n change the name 'james' to 'shyam':")
df['name']=df['name'].replace('james','shyam')
print(df)


