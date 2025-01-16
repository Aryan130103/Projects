import math

#Rectangular Fin
def rect(C1,C2,m,x):
    theta= (C1*math.exp(m*x))+(C2*math.exp(-m*x))
    print("Temperature difference between any point on the fin surface and the ambient: ",theta)

#For Infinite Long Fin
def infinite_fin(theta0,m,x,h,p,k,Ac):
    
    print("1: Temperature difference between any point on the fin surface and the ambient. ")
    print("2: Rate of heat transfer. ")
    c=int(input("Enter Choice(1/2): "))

    theta= theta0*(math.exp(-m*x))
    Q=(math.sqrt(h*p*k*Ac))*theta0

    if (c==1):
        print("The Temperature Difference is: ",theta)
        
    elif (c==2):
        print("The Rate of Heat Transfer is: ",Q)
    else:
            print("Wrong Choice! Please enter Again: ")
            infinite_fin(theta0,m,x,h,p,k,Ac)

#For Fin With Insulated Tip

def insulated_fin(theta0,m,x,h,p,k,Ac,L):
    
    print("1: Temperature difference between any point on the fin surface and the ambient. ")
    print("2: Rate of heat transfer. ")
    c=int(input("Enter Choice(1/2): "))

    theta= theta0*((math.cosh(m*(L-x)))/(math.cosh(m*L)))
    Q=(math.sqrt(h*p*k*Ac))*theta0*(math.tanh(m*L))

    if (c==1):
        print("The Temperature Difference is:",theta)
        
    elif (c==2):
        print("The Rate of Heat Transfer is:",Q)

    else:
            print("Wrong Choice! Please enter Again: ")
            insulated_fin(theta0,m,x,h,p,k,Ac,L)

#Efficiency of the fin

def effi(m,L):
     n=1/(m*L)
     print("Efficiency of the fin is: ",n)

#Effectiveness of the fin

def eff(m,k,h):
     e=(m*k)/h
     print("The effectiveness value is: ",e)
     if(e>=4):
          print("The fin is effective.")
     else:
          print("The fin is not effective.")



