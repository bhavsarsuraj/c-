#include <iostream>

using namespace std;


int main()
{
    
    
    
    int n;
    cin>>n;
    int a1[(n % 2 != 0) ? n/2 +1 : n/2];
    int a2[n/2];
    int k = 0, m = 0;
    
    int sum = 0;
    int count = 0;
    for(int i = 1, j = (n % 2 == 0 ? n :n - 1 ); i <= n/2 && j > n/2; i+=2, j-=2 ){
            sum += i;
            a1[k++] = i;
            a2[m++] = i+1;
            count++;
            if(count < n/2) {
                a1[k++] = j;
                a2[m++] = (n % 2 == 0) ? j-1 : j+1;
                sum += j;
                count++;
            }
    }
    if( n % 2 != 0){
            a1[k++] = n/2+1;
            sum += n/2+1;
    }
    for(int i = 0; i < k; i++) {
        cout<<a1[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < m; i++) {
        cout<<a2[i]<<" ";
    }
    
    
    cout<<endl;
    cout<<sum<<endl;
    cout<<((n*n + n)/2-sum)<<endl;
    return 0;
}
