public class Program21 {
    public static void main(String[] args) {
        String sentence = "the quick brown fox jumps over the lazy dog";
        System.out.println("The sentence before replace");
        System.out.println(sentence);
        sentence = sentence.replaceAll("the", "a");
        sentence = sentence.replaceAll("fox", "Kangaroo");
        sentence = sentence.replaceAll("jumps over", "punch");
        sentence = sentence.replaceAll("dog", "man");
        System.out.println("The sentence after replace:");
        System.out.println(sentence);
    }
}
