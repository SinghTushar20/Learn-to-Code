#include <iostream>
int pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << j + 1 << " ";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << i + 1 << " ";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            std::cout << j + 1 << " ";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if ((j >= (2 * n - 1) / 2 - i) && (j <= (2 * n - 1) / 2 + i))
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if ((j >= i) && (j < (2 * n - 1) - i))
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if ((j >= (2 * n - 1) / 2 - i) && (j <= (2 * n - 1) / 2 + i))
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if ((j >= i) && (j < (2 * n - 1) - i))
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int i = n / 2 + 1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern11(int n)
{
    bool set = true;
    for (int i = 0; i < n; i++)
    {
        bool temp = set;
        for (int j = 0; j <= i; j++)
        {
            if (temp)
            {
                std::cout << "1 ";
            }
            else
            {
                std::cout << "0 ";
            }
            temp = !temp;
        }
        set = !set;
        std::cout << std::endl;
    }
    return 1;
}

int pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
                std::cout << j << " ";
            else
                std::cout << "  ";
        }
        for (int j = n; j >= 1; j--)
        {
            if (j <= i)
                std::cout << j << " ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern13(int n)
{
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << x++ << " ";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = 65;
        for (int j = 0; j <= i; j++)
        {
            std::cout << char(x++) << " ";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = 65;
        for (int j = 0; j < n - i; j++)
        {
            std::cout << char(x++) << " ";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern16(int n)
{
    int x = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << char(x) << " ";
        }
        x++;
        std::cout << std::endl;
    }
    return 1;
}

int pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = 65;
        for (int j = 0; j < n; j++)
        {
            if (j >= n - i - 1)
            {
                std::cout << char(x++) << " ";
            }
            else
            {
                std::cout << " ";
            }
        }
        --x;
        for (int j = 0; j < i; j++)
        {
            std::cout << char(--x) << " ";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = 65 + n - 1 - i;
        for (int j = 0; j <= i; j++)
        {
            std::cout << char(x++) << " ";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if ((j > n - i - 1) && (j < n + i))
            {
                std::cout << " ";
            }
            else
            {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if ((j > n - i - 1) && (j < n + i))
            {
                std::cout << " ";
            }
            else
            {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern20(int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = 65 + n - 1 - i;
        for (int j = 0; j <= i; j++)
        {
            std::cout << char(x++) << " ";
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if ((i == 0) || (i == n - 1) || (j == 0) || (j == n - 2))
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 1;
}

int pattern22(int n)
{
    int t = n;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            std::cout << t << " ";
        }
        std::cout << std::endl;
    }
    return 1;
}


/**
 * The pattern should look like this for let's say n = 5
 * 
 * E                 E 
 * D E             E D
 * C D E         E D C
 * B C D E     E D C B
 * A B C D E E D C B A
 *
 */
int pattern23(int n)
{
    for(int i=1; i<=n; i++) {
        char c = 65+n-1;
        for(int j=n-1; j>=0; j--) {
            if(n-j <= i) {
                std::cout<<char(c-i+n-j)<<" ";
            }else{
                std::cout<<"  ";
            }
        }
        for(int j=0; j<n; j++) {
            if(n-j <= i) {
                std::cout<<char(c-i+n-j)<<" ";
            }else{
                std::cout<<"  ";
            }
        }
        std::cout<<std::endl;
    }
    return 1;
}
