package TrickyLogic;
import java.util.*;

public class Automorphic {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        long sq=(long)n*n;
        if(String.valueOf(sq).endsWith(String.valueOf(n)))
            System.out.println("Automorphic");
        else
            System.out.println("Not Automorphic");
    }
}
