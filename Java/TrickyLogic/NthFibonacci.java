package TrickyLogic;
import java.util.*;

public class NthFibonacci {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a=0,b=1;
        for(int i=1;i<n;i++){
            int c=a+b;
            a=b;
            b=c;
        }
        System.out.println(a);
    }
}
