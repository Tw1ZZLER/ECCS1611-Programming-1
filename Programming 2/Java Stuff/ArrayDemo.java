import java.util.Scanner;

public class ArrayDemo {
    public static void main(String args[]) {
      Scanner in = new Scanner(System.in);
      int scores[];
      int numStudents;
      
      // get the number of students and create the array
      System.out.print("How many students: ");
      numStudents = in.nextInt();
      scores = new int[numStudents];
      
      // get the scores...
      for (int i = 0; i < scores.length; i++ ) {
          System.out.print(" Enter score #" + (i+1) + ": ");
          scores[i] = in.nextInt();
      }
      
      // calculate average
      int sum = 0;
      for (int i = 0; i < scores.length; i++ ) {
          sum += scores[i];
      }
      double avg = (double) sum / numStudents;
      
      System.out.println("average is " + avg );
      in.close();
    }
}