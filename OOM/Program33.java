
// WAP to use bufferedWriter to write "Hello" to a file.
import java.io.BufferedWriter;
import java.io.FileWriter;

public class Program33 {
    public static void main(String[] args) {
        BufferedWriter buff;
        try {
            buff = new BufferedWriter(new FileWriter("filename.txt"));
            buff.write("Hello");
            buff.close();
            System.out.println("Successfully written to the file");
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
