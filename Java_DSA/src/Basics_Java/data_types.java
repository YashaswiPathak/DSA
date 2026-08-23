package Basics_Java;

import java.sql.SQLOutput;

public class data_types
{
    static void main()
    {   //implicit type data conversion
        int num = 100;
        double value = num;
        System.out.println(value);
        System.out.println(num);

        //explicit type data conversion
        double n = 123.546;
        int x = (int)n;
        System.out.println(x);
    }
}
