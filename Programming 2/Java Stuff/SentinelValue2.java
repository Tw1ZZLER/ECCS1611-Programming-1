import java.util.*;
public class SentinelValue2 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> values = new ArrayList<Integer>();
        int number = 0;
        System.out.print("Enter integers, -1 to quit: ");
        while (in.hasNextInt()) {
            number = in.nextInt();
            values.add(number);
        }
        double sum = 0;
        for (int c : values) 
            sum += c;
        double average = sum / values.size();
        average = ((int)(100 * average)) / 100.00;
        System.out.println("Number of inputs: " + values.size());
        System.out.println("Average of all inputs: " + average);
        System.out.println("Minimum input: " + Collections.min(values));
        System.out.println("Maximum input: " + Collections.max(values));
        in.close();
    }
}