package Basics_Java;
import java.util.Scanner;
public class change_of_value_without_using_third_variable
{
    static void main()
    {   Scanner sc = new Scanner(System.in);
        System.out.print("enter the value of a : ");
        int a = sc.nextInt();
        System.out.print("enter the value of b : ");
        int b = sc.nextInt();
        a = a+b;
        b = a-b;
        a = a-b;
        System.out.println(a);
        System.out.println("the swapped value of a is "+a+" and b is "+b );

    }
}
