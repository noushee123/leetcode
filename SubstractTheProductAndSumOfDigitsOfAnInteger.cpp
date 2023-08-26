class solution{
public:
int SubstractProductAndSum(int n){
     int product = 1;
     int sum = 0;

     while(n!=0){
       int lastdigit=n%10;
       product = product*lastdigit;
       sum = sum + lastdigit;

       n=n/10;
     }
  
     int answer = product - sum;
     return answer;
}
