#include <iostream>
using namespace std;

void pattern1(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<"*\t";
        }
        cout<<endl;
    }
}

void pattern2(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {
            cout<<"*\t";
        }
        cout<<endl;
    }
}

void pattern3(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {
            cout<<j+1<<"\t";
        }
        cout<<endl;
    }
}

void pattern4(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {
            cout<<i+1<<"\t";
        }
        cout<<endl;
    }
}

void pattern5(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            cout<<"*\t";
        }
        cout<<endl;
    }
}

void pattern6(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            cout<<j+1<<"\t";
        }
        cout<<endl;
    }
}

void pattern7(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<2*n-1; j++) {
            if((j >= (2*n-1)/2-i) && (j<= (2*n-1)/2+i))
            cout<<"*\t";
            else
            cout<<"\t";
        }
        cout<<endl;
    }
}

void pattern8(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<2*n-1; j++) {
            if((j >= i) && (j < (2*n-1)-i))
            cout<<"*\t";
            else
            cout<<"\t";
        }
        cout<<endl;
    }
}

void pattern9(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<2*n-1; j++) {
            if((j >= (2*n-1)/2-i) && (j<= (2*n-1)/2+i))
            cout<<"*\t";
            else
            cout<<"\t";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<2*n-1; j++) {
            if((j >= i) && (j < (2*n-1)-i))
            cout<<"*\t";
            else
            cout<<"\t";
        }
        cout<<endl;
    }
}

void pattern10(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout<<"*\t";
        }
        cout<<endl;
    }
    for(int i=n/2+1; i>=0; i--) {
        for(int j=i; j>=0; j--) {
            cout<<"*\t";
        }
        cout<<endl;
    }
}

void pattern11(int n) {
    bool set = true;
    for(int i=0; i<n; i++) {
        bool temp = set;
        for(int j=0; j<=i; j++) {
            if(temp){
                cout<<"1\t";
            }else{
                cout<<"0\t";
            }
            temp = !temp;
        }
        set = !set;
        cout<<endl;
    }
}

void pattern12(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(j<=i)
            cout<<j<<"\t";
            else
            cout<<"\t";
        }
        for(int j=n; j>=1; j--) {
            if(j<=i)
            cout<<j<<"\t";
            else
            cout<<"\t";
        }
        cout<<endl;
    }
}

void pattern13(int n) {
    int x = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout<<x++<<"\t";
        }
        cout<<endl;
    }
}

void pattern14(int n) {
    for(int i=0; i<n; i++) {
        int x = 65;
        for(int j=0; j<=i; j++) {
            cout<<char(x++)<<"\t";
        }
        cout<<endl;
    }
}

void pattern15(int n) {
    for(int i=0; i<n; i++) {
        int x = 65;
        for(int j=0; j<n-i; j++) {
            cout<<char(x++)<<"\t";
        }
        cout<<endl;
    }
}

void pattern16(int n) {
    int x = 65;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout<<char(x)<<"\t";
        }
        x++;
        cout<<endl;
    }
}

void pattern17(int n) {
    for(int i=0; i<n; i++) {
        int x = 65;
        for(int j=0; j<n; j++) {
            if(j>=n-i-1) {
                cout<<char(x++)<<"\t";
            }else{
                cout<<"\t";
            }
        }
        --x;
        for(int j=0; j<i; j++) {
            cout<<char(--x)<<"\t";
        }
        cout<<endl;
    }
}

void pattern18(int n) {
    for(int i=0; i<n; i++) {
        int x = 65+n-1-i;
        for(int j=0; j<=i; j++) {
            cout<<char(x++)<<"\t";
        }
        cout<<endl;
    }
}

void pattern19(int n) {
    for(int i=0; i<n; i++) {
        int x = 65+n-1-i;
        for(int j=0; j<=i; j++) {
            cout<<char(x++)<<"\t";
        }
        cout<<endl;
    }
}

void pattern20(int n) {
    for(int i=0; i<n; i++) {
        int x = 65+n-1-i;
        for(int j=0; j<=i; j++) {
            cout<<char(x++)<<"\t";
        }
        cout<<endl;
    }
}

void pattern21(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if((i == 0) || (i==n-1) || (j == 0) || (j == n-2)) {
                cout<<"*\t";
            }else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
}

void pattern22(int n) {
    int t = n;
    for(int i=0; i<2*n-1; i++) {
        for(int j=0; j<2*n-1; j++) {
            cout<<t<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    // pattern1(5);
    // pattern2(5);
    // pattern3(5);
    // pattern4(5);
    // pattern5(5);
    // pattern6(5);
    // pattern7(5);
    // pattern8(5);
    // pattern9(5);
    // pattern10(5);
    // pattern11(5);
    // pattern12(5);
    // pattern13(5);
    // pattern14(5);
    // pattern15(5);
    // pattern16(5);
    // pattern17(5);
    // pattern18(5);
    // pattern19(5);
    // pattern20(5);
    pattern21(5);
    // pattern22(5);
    return 0;
}
