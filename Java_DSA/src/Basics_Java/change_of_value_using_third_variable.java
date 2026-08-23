package Basics_Java;
import java.util.Scanner;
public class change_of_value_using_third_variable
{
    static void main()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the value of a : ");
        int a = sc.nextInt();
        System.out.print("enter the value of b : ");
        int b = sc.nextInt();
        int y = a;
        a = b;
        b = y;

        System.out.println(a+"");
        System.out.println(a+"  "+b);
        System.out.println("The swaped value of a is "+a+" and b is "+b);
        System.out.println("The swaped value "+a+" and "+b );


    }
}
