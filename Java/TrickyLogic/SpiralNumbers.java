package TrickyLogic;
import java.util.*;

public class SpiralNumbers {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int top=0,bottom=n-1,left=0,right=n-1;
        int num=1;
        while(top<=bottom&&left<=right){
            for(int i=left;i<=right;i++){
                System.out.print(num+++" ");
            }
            top++;
            for(int i=top;i<=bottom;i++) {
                System.out.print(num+++" ");
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--) {
                    System.out.print(num+++" ");
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--) {
                    System.out.print(num+++" ");
                }
                left++;
            }
        }
    }
}
