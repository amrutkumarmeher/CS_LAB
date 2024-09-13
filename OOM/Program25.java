// WAP to perform multi level inheritance
class Y1{
    Y1(){
        System.out.println("Hello! from Y1 with no parameter");
    }
}
class Y2 extends Y1{
    Y2(){
        System.out.println("Hello! from Y2 with no parameter");
    }
}
class Y3 extends Y2{
    Y3(int para3){
        System.out.println("Hello! from Y3 with parameter: "+para3);
    }
}
public class Program25 {
    public static void main(String[] args) {
        Y3 obj = new Y3(10);
    }
}
