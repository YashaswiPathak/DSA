package If_Else;
import java.util.Scanner;
public class absolute_value
{
    static void main()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the value a : ");
        int a = sc.nextInt();
        if(a>0)
        {
            System.out.println(a);
        }
        else
        {
            System.out.println(-a);
        }
    }
}

