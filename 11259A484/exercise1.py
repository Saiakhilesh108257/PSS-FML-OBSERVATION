Working with Numpy Arrays
Numpy program to print the Numpy version in your system
import numpy as np
print(np. __version__)

one-dimensional array
import numpy as np
x = np.arange(2,6).reshape(4)
print(x)

#two-dimentional array
import numpy as np
x1 = np.arange(2,10).reshape(2,4)
print(x1)

#three-demensional array
import numpy as np
x2 = np.arange(24).reshape(4,3,2)
print(x2)

#Numpy program to perform Array slicing
import numpy as np
arr = np.array([1,2,3,4])
print(arr[1:3:2])
print(arr[:3])
print(arr[::2])

#Numpy program tp perform trigonometric function
import numpy as np
arr1 =np.array([0,30,60,90])
print(np.sin(arr1))
print(np.cos(arr1))
print(np.tan(arr1))

#Numpy program to convert a list of numeric value into a one-dimensional Numpy array
import numpy as np
I =[12.23,13.32,100,36.32]
print("original list:",I)
a = np.array(I)
print("one-dimensional Numpy array:",a)

#Numpy program to create an array with values ranging from 12 to 38
import numpy as np
x3 = np.arange(12,38)
print(x3)

#Numpy program to reverse an array (first element become last)
import numpy as np
x4 = np.arange(12,38)
print("original array:")
print(x4)
print("Reverse array:")
x4 = x4[::-1]
print(x4)

#Numpy program to append values to the end of an array
import numpy as np
x5 = [10,20,30]
print("Original array:")
print(x5)
x5 = np.append(x5,[40,50,60,70,80,90])
print("After append values to the end of the array: \n", x5)

#Numpy program to find common values betwwen two arrays
import numpy as np
Array1=np.array([0,10,20,40,60])
print("Array1:",Array1)
Array2=np.array([10,30,40])
print("common values between two arrays:")
print(np.intersect1d(Array1,Array2))
#Numpy program to find the union of two arrays
import numpy as np
array1 = np.array([0,10,20,40,60,80])
print("Array1:",array1)
array2 = [10,30,40,50,70]
print("Array2:",array2)
print("unique sorted array of values that are in either of the rwo input arrays:")
print(np.union1d(array1,array2))

#Numpy program to concatenate two 2-dimensional arrays
import numpy as np
a= np.array([[0,1,3],[5,7,9]])
b= np.array([[0,2,4],[6,8,10]])
c=np.concatenate((a,b),1)
print(c)

# write a Numpy program to covert the values of centigrade degrees into fahrehnit degrees & vice verse
import numpy as np
fvalues = [0,12,45.21,34,99.91]
F =np.array(fvalues)
print("values in Fahrenheit degrees:")
print(F)
print("values in centigrade degrees:")
print(np.round((5*F/9-5*32/9),2))

import numpy as np
Cvalues = [-17.78,-11.11,7.34,1.11,37.73]
C =np.array(Cvalues)
print("values in centigrade degrees:")
print(C)
print("values in Fahrenheit  degrees:")
print(np.round((9*C/5+32),2))

#Numpy program to perform arithematic operations
import numpy as np
a = np.arange(9,dtype=np.float64).reshape(3,3)
print("First Array:")
print(a)
b=np.array([10,20,30])
print("second arrays:")
print(b)
print("Addition of Arrays:")
print(np.add(a,b))
print("Subraction of Arrays:")
print(np.subtract(a,b))
print("Multiplicaton of Arrays:")
print(np.multiply(a,b))
print("Division of Arrays:")
print(np.divide(a,b))



