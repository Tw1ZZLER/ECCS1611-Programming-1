import java.util.Scanner;

public class EnhancedForLoopEx {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        
        // get number of students in class
        System.out.print("Enter number of students: ");
        String s = in.nextLine();
        int size = Integer.parseInt(s);
        
        // create arrays
        String[] names = new String[size];
        int[] scores = new int[size];
        
        // get names
        System.out.println("Student names");
        for (int i = 0; i < names.length; i++) {
            System.out.print("Enter name of student #" + (i + 1) + ": ");
            names[i] = new String(in.nextLine());
        }
        
        // get quiz scores
        for (int i = 0; i < names.length; i++) {
            System.out.print("Enter " + names[i] + "'s quiz score: ");
            scores[i] = in.nextInt();
        }
        in.close();
        
        // find who has the high and low entries
        int highIndex = 0;
        int lowIndex  = 0;
        
        for (int i = 1; i < names.length; i++) {
            if ( scores[i] > scores[highIndex]) 
                highIndex = i;
            if ( scores[i] < scores[lowIndex] )
               lowIndex = i;
        }
        
        System.out.println("High score: " + names[highIndex] + " with a " + scores[highIndex]);
        System.out.println("Low score: " + names[lowIndex] + " with a " + scores[lowIndex]);
    }
}