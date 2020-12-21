public class Main
{
    public static void main(String[] args) 
    {
        CustomStack<Integer> stack = new CustomStack<>();
 
        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.push(40);
         
        System.out.println(stack);
         
        System.out.println( stack.pop() );
        System.out.println( stack.pop() );
        System.out.println( stack.pop() );
         
        System.out.println( stack );
    }
}