class Aclass{
    int x;
}
public class Program19 {
    public static void main(String[] args) {
        Aclass ob[] = new Aclass[3];
        ob[0] = new Aclass();
        ob[1] = new Aclass();
        ob[2] = new Aclass();
        ob[0].x=100;
        ob[1].x=200;
        ob[2].x=300;
        System.out.println(ob[0].x);
        System.out.println(ob[1].x);
        System.out.println(ob[2].x);
    }
}
