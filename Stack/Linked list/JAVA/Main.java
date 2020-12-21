
import java.util.LinkedList;
import java.util.List;

class Stack {
   private LinkedList l = new LinkedList();
   public void push(Object obj) {
     l.addFirst(obj);
   }
   public Object top() {
      return l.getFirst();
   }
   public Object pop() {
      return l.removeFirst();
   }
}

public class Main {
   public static void main(String[] args) {
      Stack s = new Stack();
      s.push(5);
      s.push(1);
      s.push(3);
      s.push(9);
      s.push(7);
      System.out.println("The top element of the stack is: " + s.top());
      System.out.println("The stack element that is popped is: " + s.pop());
      System.out.println("The stack element that is popped is: " + s.pop());
      System.out.println("The top element of the stack is: " + s.top());
   }
}
