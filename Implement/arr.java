class demo{
    int i;
    demo(){
        i = 10;
    }
}
public class arr {
    public static void main(String[] args) {
        demo arra[] = new demo[10];
        for (int i=0; i<arra.length;i++) {
            arra[i] = new demo();
        }
        for(demo i : arra){
            System.out.print(i.i+" ");
        }
    }
}
