// Implement Stack data structure
class Stack {
    private int topmost_index;
    private int capacity;
    private int self[];
    
    Stack(int capaci) {
        topmost_index = -1;
        capacity = capaci;
        self = new int[capacity];
    }

    public void push(int element) {
        if (topmost_index == capacity - 1) {
            // do nothing, STACKOVERFLOW!
        } else {
            topmost_index += 1;
            self[topmost_index] = element;
        }
    }

    public int pop() {
        int element = 0;
        if (topmost_index == -1) {
            // do nothing, STACK-UNDERFLOW!
        } else {
            element = self[topmost_index];
            topmost_index -= 1;
        }
        return element;
    }
}

public class Stackimp {
    public static void main(String[] args) {
        Stack i = new Stack(10);
        i.push(10);
        i.push(13);
        i.push(16);
        i.push(30);
        System.out.println("elements: \n"+i.pop()+"\n"+i.pop()+"\n"+i.pop()+"\n"+i.pop());
    }
}