    #include<stdio.h>
    //executed on turbo c.  used to add two numbers in C.
    void main() {
       int a = 10, b = 20, c;

       asm {
          mov ax,a
          mov bx,b
          add ax,bx
          mov c,ax
       }

       printf("c= %d",c);
    }
