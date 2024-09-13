// WAP to declare int a,b & float c inside a class, use two sum function & display them.
class Cclass{
    int a,b;
    float c;
    int sum(int i, int j){
        a = i;
        b = j;
        return a+b;
    }
    float sum(int i, float j){
        a = i;
        c = j;
        return a+c;
    }
}
public class Program14{
    public static void main(String[] args) {
        Cclass obj = new Cclass();
        System.out.println("10 + 20 = "+obj.sum(10, 20));
        System.out.println("10 + 5.5 = "+obj.sum(10, 5.5f));
    }
}
