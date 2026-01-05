package TrickyLogic;
import java.util.*;
import java.math.*;

public class SumDigitsFactorial {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        BigInteger fact=BigInteger.ONE;
        for(int i=1;i<=n;i++){
            fact=fact.multiply(BigInteger.valueOf(i));
        }
        int sum=0;
        while(fact.compareTo(BigInteger.ZERO)>0){
            sum+=fact.mod(BigInteger.TEN).intValue();
            fact=fact.divide(BigInteger.TEN);
        }
        System.out.println(sum);
    }
}
