// See https://aka.ms/new-console-template for more information

public class Program
{
    private static ToDoList List = new();
    private static int Choice = 0;
    private static String TaskName="";
    private static int TaskNumber;
    public static void Main(String[] args)
    {
        do
        {
            Console.WriteLine("MENU:\n1)Add Task\n2)Display tasks\n3)Mark task complete\n4)Exit");
            Console.WriteLine("Enter choice:");
            while (true)
            {
                if (int.TryParse(Console.ReadLine(), out Choice))
                {
                    break;
                }
                Console.WriteLine("Invalid integer.please try again.");
            }
            switch (Choice)
            {
                case 1:
                    Console.WriteLine("Enter task name:");
                    while (true) {
                        TaskName = Console.ReadLine();
                        if (!string.IsNullOrWhiteSpace(TaskName))
                        {
                            break;
                        }
                        Console.WriteLine("Please try again!");
                    }
                    
                    List.addTask(TaskName);
                    break;
                case 2:
                    List.displayTasks();
                    break;
                case 3:
                    Console.WriteLine("Enter task number:");
                    while (true)
                    {
                        if (int.TryParse(Console.ReadLine(), out TaskNumber))
                        {
                            break;
                        }
                        Console.WriteLine("Invalid integer.please try again.");
                    }
                    List.markCompleted(TaskNumber);
                    break;
                case 4:
                    Console.WriteLine("Exiting ...");
                    break;
                default:
                    Console.WriteLine("Invalid Choice!");
                    break;
            }
        } while (Choice != 4);
    }
}
