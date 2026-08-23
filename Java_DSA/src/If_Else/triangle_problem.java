package If_Else;
import java.util.Scanner;
public class triangle_problem
{
    static void main()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the 1st side of the triangle : ");
        int a = sc.nextInt();
        System.out.print("enter the 2nd side of the triangle : ");
        int b = sc.nextInt();
        System.out.print("enter the 3rd side of the triangle : ");
        int c = sc.nextInt();
        if (a+b>c && b+c>a && c+a>b)
        {
            System.out.println("it is a valid triangle");
            if(a==b && a==c && b==c)
            {
                System.out.print("it is an equilateral traiangle");
            }// if valein sarein statesment chlte h ek ke bad ek
            else if(a==b||b==c||c==a)
            {
                System.out.print("it is an isosceles triangle");
            }
            else
            {
                System.out.print("it is a scalene triangle");
            }
        }
        else
        {
            System.out.print("it is not a valid triangle");
        }
    }
}
