#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;//Stored in stack
    int *p=new int(); // allocate memory in heap
        *p=10;
    delete(p); //deallocate memory

    p=new int[4];

    delete[]p;
    p=NULL;

    return 0;
}

// Dangling pointers and wild pointers in computer programming are pointers that do not point to a valid object of the appropriate type. These are special cases of memory safety violations. More generally, dangling references and wild references are references that do not resolve to a valid destination.