public class ToDoList
{
    private String[] tasks = new string[5];
    private int taskCount = 0;
    public void addTask(String taskName)
    {
        if (taskCount >= 5)
        {
            Console.WriteLine("Task list full!");
            return;
        }
        tasks[taskCount] = taskName;
        taskCount++;
    }
    public void displayTasks()
    {
        if (taskCount == 0)
        {
            Console.WriteLine("No tasks in list!");
            return;
        }
        Console.WriteLine("Tasks:");
        for (int i = 0; i < taskCount; i++)
        {
            Console.WriteLine("Task" + (i + 1) + "." + tasks[i]);
        }
    }
    public void markCompleted(int taskNumber)
    {
        if (taskCount < taskNumber)
        {
            Console.WriteLine("No task exists with this task number!");
            return;
        }
        tasks[taskNumber] = tasks[taskNumber] + "(Completed)";
    }
}