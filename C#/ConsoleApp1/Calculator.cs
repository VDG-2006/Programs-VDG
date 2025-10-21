using System.Security.Cryptography.X509Certificates;

public class Calculator {
    private static int num1, num2;
    public static int ch,res1;
    public static float res2; 
    public static void readValues()
    {
        Console.Write("Enter first number: ");
        while (!int.TryParse(Console.ReadLine(), out num1))
        {
            Console.WriteLine("Invalid input. Please enter an integer.");
            Console.Write("Enter first number: ");
        }
        Console.Write("Enter second number: ");
        while (!int.TryParse(Console.ReadLine(), out num2))
        {
            Console.WriteLine("Invalid input. Please enter an integer.");
            Console.Write("Enter second number: ");
        }
    }
    public static int add(int x, int y) {
        return x + y;
    }
    public static int subtract(int x, int y) {
        return x - y;
    }
    public static int multiply(int x, int y) {
        return x * y;
    }
    public static float divide(int x, int y) {
        if (y == 0)
            return 0;
        return (float)x / y;
    }
    public static void Main()
    {

        do
        {
            Console.WriteLine("MENU:\n1)Initalize\n2)Add\n3)Subtract\n4)Multiply\n5)Divide\n6)Exit");
            Console.WriteLine("Enter choice:");
            if (!int.TryParse(Console.ReadLine(), out ch))
            {
                Console.WriteLine("Invalid input. Please enter a number.");
                continue;
            }
            switch (ch)
            {
                case 1:
                    readValues();
                    break;
                case 2:
                    res1 = add(num1, num2);
                    Console.WriteLine("Sum is:" + res1);
                    break;
                case 3:
                    res1 = subtract(num1, num2);
                    Console.WriteLine("Difference is:" + res1);
                    break;
                case 4:
                    res1 = multiply(num1, num2);
                    Console.WriteLine("Product is:" + res1);
                    break;
                case 5:
                    res2 = divide(num1, num2);
                    Console.WriteLine("Division is:" + res2);
                    break;
                case 6:
                    Console.WriteLine("Exiting...");
                    break;
                default:
                    Console.WriteLine("Invalid Choice!");
                    break;
            }
        } while (ch != 6);
    }
}