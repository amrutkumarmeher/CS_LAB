class Stack {
    private int topIndex;
    private int self[];
    private int capaci;

    Stack(int capacity) {
        capaci = capacity;
        self = new int[capacity];
        topIndex = -1;
    }

    private boolean stackoverflow() {
        if (topIndex + 1 != capaci) {
            return false;
        } else {
            return true;
        }
    }

    private boolean stackunderflow() {
        if (topIndex >= 0) {
            return false;
        } else {
            return true;
        }
    }

    void push(int item) {
        if (stackoverflow() == true) {
            System.err.println("Stack OverFlow!");
        } else {
            topIndex = topIndex + 1;
            self[topIndex] = item;
        }
    }

    int pop() {
        int item;
        if (stackunderflow() == true) {
            System.err.println("Stack UnderFlow!");
            return 0;
        } else {
            item = self[topIndex];
            topIndex = topIndex - 1;
            return item;
        }
    }

    int peek() {
        int item;
        if (stackunderflow() == true) {
            System.err.println("Stack Is Empty");
            return 0;
        } else {
            item = self[topIndex];
            return item;
        }
    }
}

public class expression {
    static boolean ItsOperator(String token) {
        // if operator: true
        // else: false
        if (token.charAt(0) == "+".charAt(0) || token.charAt(0) == "-".charAt(0) || token.charAt(0) == "*".charAt(0)
                || token.charAt(0) == "/".charAt(0) || token.charAt(0) == "%".charAt(0)) {
            return true;
        } else {
            return false;
        }
    }

    static int StrToInt(String str) {
        int Strli[] = new int[str.length()];
        int i; // iterator
        int sum = 0;
        int pwr = 1;
        for (i = 0; i < Strli.length; i++) {
            Strli[i] = str.charAt(i) - 48;
        }
        // temp loop
        i = i - 1;
        for (; i >= 0; i--) {
            Strli[i] = Strli[i] * pwr;
            pwr = pwr * 10;
        }
        for (i = 0; i < Strli.length; i++) {
            sum = sum + Strli[i];
        }
        return sum;
    }

    static int operation(String operator, int op1, int op2) {
        if (operator.charAt(0) == "+".charAt(0)) {
            return op1 + op2;
        } else if (operator.charAt(0) == "-".charAt(0)) {
            return op1 - op2;
        } else if (operator.charAt(0) == "/".charAt(0)) {
            return op1 / op2;
        } else if (operator.charAt(0) == "%".charAt(0)) {
            return op1 % op2;
        } else if (operator.charAt(0) == "*".charAt(0)) {
            return op1 * op2;
        } else {
            return 0;
        }
    }

    static int resultPostfix(String expre) {
        int i; // iterator variable
        String tokens[] = expre.split(" ");
        Stack OperandStack = new Stack(10);
        int operand1;
        int operand2;
        for (i = 0; i < tokens.length; i++) {
            if (ItsOperator(tokens[i])) {
                operand2 = OperandStack.pop();
                operand1 = OperandStack.pop();
                OperandStack.push(operation(tokens[i], operand1, operand2));
            } else {
                OperandStack.push(StrToInt(tokens[i]));
            }
        }
        return OperandStack.peek();
    }

    static int resultPrefix(String expre){
        int i; // iterator variable
        String tokens[] = expre.split(" ");
        Stack OperandStack = new Stack(10);
        int operand1;
        int operand2;
        for (i = tokens.length-1; i >= 0; i--) {
            if (ItsOperator(tokens[i])) {
                operand1 = OperandStack.pop();
                operand2 = OperandStack.pop();
                OperandStack.push(operation(tokens[i], operand1, operand2));
            } else {
                OperandStack.push(StrToInt(tokens[i]));
            }
        }
        return OperandStack.peek();
    }
    public static void main(String[] args) {
        int i = resultPrefix("- 5 1");
        System.out.println(""+i);
    }
}