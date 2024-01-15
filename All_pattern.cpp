#include <iostream>
using namespace std;

void print1(int n)
{

	for (int i = 1; i <= n; i++)
	{

			char start = 'A' + n - i;
		for (int j = 1; j <= i; j++)
		{
			cout << start;
			start = start + 1;
		}
		cout << endl;
	}
}
void print2(int n){

	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n-i+1;j++){
		
			cout<<"*";
		}   
		cout<<endl;
	}
}
void print3(int n){

	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n-i+1;j++){
		
			cout<<j;
		}   
		cout<<endl;
	}
}
void print4(int n){

	for(int i=1;i<=n;i++){
//space
	for(int j=1;j<=n-i;j++){
		cout<<" ";
	}
			//star
		for(int j=1;j<=2*i-1;j++){

		cout<<"*";
		}   

		//space
	for(int j=1;j<=n-i;j++){
		cout<<" ";
	}
		cout<<endl;
	}
}
void print5(int n){
	for(int i=1;i<=n;i++){
//space
	for(int j=1;j<=i-1;j++){
		cout<<" ";
	}
			//star
		for(int j=1;j<=2*n-(2*i-1);j++){

		cout<<"*";
		}   

		//space
	for(int j=1;j<=i-1;j++){
		cout<<" ";
	}
		cout<<endl;
	}
}
void print6(int n){

	for(int i=1;i<=2*n-1;i++){
		int stars=i;
		if(i>n) stars=2*n-i;
		for(int j=1;j<=stars;j++){
		
			cout<<"*";
		}   
		cout<<endl;
	}
}
void print7(int n){

int start=1;
for(int i=0; i<n;i++){
	if(i%2==0) start=1;
	else
	start=0;
	for(int j=0; j<=i;j++){
		cout<<start;
		
		start=1-start;
	}
	cout<<endl;
}

}
void print8(int n){
	for(int i=1;i<=n;i++){
		//number
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		//space
		for(int j=1;j<=2*n-(2*i);j++){
			cout<<"*";
		}
		for(int j=1;j<=i;j++){
			cout<<(i-j+1);
		}
		cout<<endl;
		
	}
}
void print9(int n){
int num=1;
for(int i=1; i<=n;i++){
    
    for(int j=1;j<=n;j++){
        cout<<num<<" ";
		num=num+1;
    }
    cout<<endl;
}
}
void print10(int n){

for(int i=1; i<=n;i++){
    
    for(char ch='A';ch<='A'+i;ch++){
     cout<<ch<<" ";
    }
    cout<<endl;
}
}
void print11(int n){

for(int i=1; i<=n;i++){
    
    for(char ch='A';ch<='A'+n-i;ch++){
     cout<<ch<<" ";
    }
    cout<<endl;
}
}
void print12(int n){

for(int i=1; i<=n;i++){
    for(int j=1;j<=i;j++){
        char ch='A'+i-1;

     cout<<ch<<" ";
   
    }
    cout<<endl;
}
}
void print13(int n){

	for(int i=0;i<n;i++){
//space
	for(int j=0;j<n-i-1;j++){
		cout<<" ";
	}
			//character
            char ch='A';
            int breakpoint=(2*i+1)/2;
		for(int j=1;j<=2*i+1;j++){

		cout<<ch;
        if(j<=breakpoint) ch++;
        else ch--;
		}   

		//space
	for(int j=0;j<n+i-1;j++){
		cout<<" ";
	}
		cout<<endl;
	}
}
void print14(int n){
    for(int i=0; i<n; i++){
       
        for( char ch='E'-i; ch<='E'; ch++){
        cout<<ch<<" ";
    }
    cout<<endl;
}
}
void print15(int n){

	int iniSpace=0;
	for(int i=0;i<=n;i++){
		//star
		for(int j=1; j<=n-i;j++){
			cout<<"*";
		}
		//space
		for(int j=0; j<iniSpace;j++){
			cout<<" ";
		}
		//star
		for(int j=1; j<=n-i;j++){
			cout<<"*";
		}
		iniSpace+=2;
		cout<<endl;
	}

	int initSpace=8;
	//int initSpace=2*n-2;>>--for n number
	for(int i=1;i<=n;i++){
		//star
		for(int j=1; j<=i;j++){
			cout<<"*";
		}
		//space
		for(int j=0; j<initSpace;j++){
			cout<<" ";
		}
		//star
		for(int j=1; j<=i;j++){
			cout<<"*";
		}
		initSpace-=2;
		cout<<endl;
	}
}
void print16(int n){
/*
int initSpace=8;
	//int initSpace=2*n-2;>>--for n number
	for(int i=1;i<=n;i++){
		//star
		for(int j=1; j<=i;j++){
			cout<<"*";
		}
		//space
		for(int j=0; j<initSpace;j++){
			cout<<" ";
		}
		//star
		for(int j=1; j<=i;j++){
			cout<<"*";
		}
		initSpace-=2;
		cout<<endl;
	}

int iniSpace=2;
	for(int i=0;i<=n;i++){
//stars
for(int j=1;j<=n-i-1;j++){
	cout<<"*";
}
	
//space
for(int j=0; j<iniSpace;j++){
	cout<<" ";
	
}

//stars
for(int j=1;j<=n-i-1;j++){
	cout<<"*";
}
iniSpace+=2;
cout<<endl;
}
}
*/

// ANOTHER METHOD TO SOLVE THIS PROBLEM

int spaces=2*n-2;
for(int i=1;i<=2*n-1;i++){
	int stars=i;
	if(i>n) stars=2*n-i;
	//stars
	for(int j=1;j<=stars;j++){
		cout<<"*";
	}
	//space
	for(int j=1; j<=spaces;j++){
		cout<<" ";
	}
	//stars
	for(int j=1;j<=stars;j++){
		cout<<"*";
	}
	cout<<endl;
	if(i<n) spaces-=2;
	else spaces+=2;
}
}
void print17(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n; j++){
			if(i==1||j==1||i==n||j==n){
				cout<<"*";
			}
			else cout<<" ";
		}
		cout<<endl;
	}
}
void print18(int n){
	/*
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n; j++){
			if (i==1||j==1||i==n||j==n){
				cout<<"4";
			}
			else if (i==2||j==2||i==n-1||j==n-1){
				cout<<"3";
			}
			else if (i==3||j==3||i==n-2||j==n-2){
				cout<<"2";
			}
			else cout<<"1";
		}
		cout<<endl;
	}
	*/

for(int i=0; i<2*n-1;i++){
	for(int j=0;j<2*n-1;j++){

		int top=i;
		int left=j;
		int right=(2*n-2)-j;
		int down=(2*n-2)-i;
		cout<<(n-min(min(top,down),min(left,right)));
	}
cout<<endl;
}

}
int main()
{

   cout<<"Enter The Number"<<endl;
	int n;
	cin >> n;
	/*print4(n);
	print5(n);
	*/
	print18(n);

}