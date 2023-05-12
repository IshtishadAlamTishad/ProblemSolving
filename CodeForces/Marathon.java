import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int t=sc.nextInt();
        for(int i=0;i<t;++i) {
        int ct=0;
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c=sc.nextInt();
        int d=sc.nextInt();

        if(a<c) ct++;
        if(a<b) ct++;
        if(a<d) ct++; 

        System.out.println(ct);
        }
    }
}