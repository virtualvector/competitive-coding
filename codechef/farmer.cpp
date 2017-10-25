    #include <iostream>
    #include <cmath>
     
    using namespace std;
     
    int  isPrime(int sum)
    {
        for(int i=2; i <=sum/2; i++)
        {
            if(count%i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
    int main()
    {
        int t;
        cin >> t;
        while(t--)
        {
            int a, b;
            cin >> a >> b;
            int j =1;
            while(true)
            {
                
                if(isPrime(a+b+j))
                {
                    cout << j << "\n";
                    break;
                }
                j++;
            }
        }
        return 0;
    } 
