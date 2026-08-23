package If_Else;
import java.util.Scanner;
public class greatest_of_three_numbers {
    static void main() {
        int a = 23;
        int b = 56;
        int c = 34;
        if (b > a && b > c)
        {
            System.out.println(b+" is the greatest ");
            System.out.println("b is the greatest ");
        }
        else if (a>b && a>c)
        {
            System.out.println(a+" is the greatest");
        }
        else
        {
            System.out.println(c+" is the greatest");
        }
    }
}

