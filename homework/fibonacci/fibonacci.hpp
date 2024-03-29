#pragma once

int fibonacci_iterative(int sequence) {
    int a = 0, b = 1, c = 0;
    for(int i = 1;i <= sequence;++i)
    {
        c = a + b;   
        a = b;
        b = c;
    }
    return c;
}
int x = 0;
int fibonacci_recursive(int sequence)
{
    if(sequence == 0)
    {
        return 0;
    }
    if(sequence == 2 || sequence == 1)
    {
        return 1;
    }
    else return x = fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
