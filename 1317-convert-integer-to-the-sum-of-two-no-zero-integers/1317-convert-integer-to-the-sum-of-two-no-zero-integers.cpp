class Solution {
public:
    
    bool notHasZero(int n){
      while(n!=0){
          int k=n%10;
          if(k==0)
              return false ;
          n=n/10;
      } 
        return true ;
    }
    
    vector<int> getNoZeroIntegers(int n) {
      int a=1;
        int b=n-1;
        while(true){
            if(notHasZero(a) &&notHasZero(b)) break;
            a++;
            b--;
        }
        return {a,b};
    }
};