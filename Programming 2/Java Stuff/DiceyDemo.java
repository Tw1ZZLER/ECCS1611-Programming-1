import java.util.*; // gets both Scanner and Random

public class DiceyDemo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int die[] = new int[2];
        Random rnd = new Random();
        
        // roll the dice until the boredom sets in...
        while (true) {
            for (int i = 0; i < die.length; i++)
                die[i] = 1 + rnd.nextInt(6);
                
            System.out.println("You have rolled a " + die[0] + " and a " + die[1]);
            System.out.print("Roll again (y|n): ");
            char c = in.next().charAt(0);
            if ( c == 'N' || c == 'n') break;
        }
        
        System.out.println("Done!");
        in.close();
    }
}