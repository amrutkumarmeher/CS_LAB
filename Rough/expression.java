class Stack{
    private int topIndex;
    private int self[];
    private int capaci;
    Stack(int capacity){
        capaci = capacity;
        self = new int[capacity];
        topIndex = -1;
    }
    private boolean stackoverflow(){
        if(topIndex+1 != capaci){
            return false;
        } else {
            return true;
        }
    }
    private boolean stackunderflow(){
        if(topIndex >= 0){
            return false;
        } else {
            return true;
        }
    }
    void push(int item){
        if(stackoverflow() == true){
            System.err.println("Stack OverFlow!");
        } else {
            topIndex = topIndex + 1;
            self[topIndex] = item;
        }
    }
    int pop(){
        int item;
        if(stackunderflow() == true){
            System.err.println("Stack UnderFlow!");
            return 0;
        } else {
            item = self[topIndex];
            topIndex = topIndex - 1;
            return item;
        }
    }
    int peek(){
        int item;
        if(stackunderflow() == true){
            System.err.println("Stack Is Empty");
            return 0;
        } else {
            item = self[topIndex];
            return item;
        }
    }
}
public class expression {
    static boolean ItsOperator(char token){
        // if operator: true
        // else:        falso
        if(token=='+' || token=='-' || token=='*' || token=='/' || token=='%'){
            return true;
        } else {
            return false;
        }
    }
    static int charToIn(char ch){
        if (ch == '1') {
            return 1;
        }
        else if(ch == '2'){
            return 2;
        }
        else if(ch == '3'){
            return 3;
        }
        else if(ch == '4'){
            return 4;
        }
        else if(ch == '5'){
            return 5;
        }
        else if(ch == '6'){
            return 6;
        }
        else if(ch == '7'){
            return 7;
        }
        else if(ch == '8'){
            return 8;
        }
        else if(ch == '9'){
            return 9;
        }
        else{
            return 0;
        }
        
    }
    static int operation(char operator, int op1, int op2){
        if(operator=='+'){
            return op1 + op2;
        }
        else if(operator=='-'){
            return op1 - op2;
        }
        else if(operator=='/'){
            return op1 / op2;
        }
        else if(operator=='%'){
            return op1%op2;
        }
        else if(operator=='*'){
            return op1 * op2;
        }
        else {
            return 0;
        }
    }
    static int resultPostfix(String expre){
        Stack operandStack = new Stack(5);
        int operand1;
        int operand2;
        for (int i = 0; i < expre.length(); i++) {
            if(ItsOperator(expre.charAt(i))){
                operand2 = operandStack.pop();
                operand1 = operandStack.pop();
                operandStack.push(operation(expre.charAt(i), operand1, operand2));
            }
            else {
                operandStack.push(charToIn(expre.charAt(i)));
            }
        }
        return operandStack.peek();
    }
    public static void main(String[] args) {
        int i = resultPostfix("234*+");
        System.out.println(""+i);
    }
}