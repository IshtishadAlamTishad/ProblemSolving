public class Basics_Bit
{
    public static int a = 10;
    public static int b = 5;

    public static void main(String[] args) {
        
        System.out.println("A & B : "+ (a&b));
        System.out.println("A | B : "+ (a|b));
        System.out.println("A ^ B : "+ (a^b));
        System.out.println("~A : "+ (~a));
        System.out.println("~B : "+ (~b));

        System.out.println();

        System.out.println(17>>1);
        System.out.println(17>>2); // -> 17/(2*2)
        System.out.println(19<<1);
        System.out.println(19>>2);

        System.out.println();

    }
}
