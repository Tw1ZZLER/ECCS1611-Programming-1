import java.util.Scanner;

public class SentinelValue {
    public static void main(String[] args) {
        double epicValue = 0;

        try (Scanner in = new Scanner(System.in)) {
            System.out.print("Enter epic value:");
            epicValue = in.nextDouble();
        } catch (Exception e) {}

        
    }
}
