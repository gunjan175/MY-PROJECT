#include<iostream>
#include<math.h>
using namespace std;

class Complex{

   private:
         int real;
         int imag;
         
   public:
         
         Complex() : real(0), imag(0) {}
         Complex(int r, int i) : real(r), imag(i) {}
         
         Complex add_complex(Complex &c)
         {
             return Complex(real + c.real, imag+c.imag);
             
         }
         
         Complex sub_complex(Complex &c)
         {
             return Complex(real - c.real, imag-c.imag);
             
         }
         
         Complex mul_complex(Complex &c)
         {
            int result_real = real*c.real + imag*c.imag;
            int result_imag = real*c.imag + imag*c.real;
            
            return Complex(result_real, result_imag);
            
         }
         
         void displayComplex() const
         {
            if(imag>0){
                 cout<< real << "+" << "i" << imag << endl;
            }
            else{
                 
                cout<< real << "-" << "i" << -imag << endl;
           }
         }
        
};

int main()
{

     int r1, i1, r2, i2;
     
     cout<< "Enter the real part of 1st complex number : " ;
     cin>> r1;
     
     cout<< "Enter the imaginary part of 1st complex number : " ;
     cin>> i1;
     
     Complex c1(r1, i1);
     
     c1.displayComplex();
     
     cout<< "Enter the real part of 2nd complex number : " ;
     cin>> r2;
     
     cout<< "Enter the imaginary part of 2nd complex number : " ;
     cin>> i2;
     
     Complex c2(r2, i2);
     
     c2.displayComplex();
     
     Complex c3;
     
     c3 = c1.add_complex(c2);
     
     cout << " Addition of these complex Number = " ;
     c3.displayComplex();
     
     Complex c4;
     
     c4 = c1.sub_complex(c2);
     
     cout << " Subtraction of these complex Number = " ;
     c4.displayComplex();
     
     Complex c5;
     
     c5 = c1.mul_complex(c2);
     
     cout << " Multiplication of these complex Number = " ;
     c5.displayComplex();
     
     return 0;
}
