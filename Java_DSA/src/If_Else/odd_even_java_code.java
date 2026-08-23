package If_Else;
import java.util.Scanner ;

public class odd_even_java_code
{
    static void main()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a number :");
        int a = sc.nextInt();
        if(a%2==0)
        {
            System.out.print("it is a even number and the number is "+a);
        }
        else
        {
            System.out.print("the number is odd");
        }
    }
}
