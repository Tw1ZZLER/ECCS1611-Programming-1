public class BlackjackExample {
    public static void main(String args[]) {
        final int PLAYERS = 4;
        
        // declare an array of arrays
        char[][] hands = new char[PLAYERS][];
        
        // declare the inner arrays
        hands[0] = new char[] {'A', 'T'};
        hands[1] = new char[] {'2', '3', '3'};
        hands[2] = new char[] {'4', '5', '6', '8'};
        hands[3] = new char[] {'K', 'Q'};
        
        for (int player = 0; player < hands.length; player++) {
            int score = evaluate(hands[player]);
            System.out.println("Player " + player + " score is " + score);
        }
    }
    
    public static int evaluate(char[] hand) {
        int value = 0;
        for (int i = 0; i < hand.length; i++) {
            char c = hand[i];
            if (c <= '9') value += c - '0';
            else switch (c) {
                case 'T': case 'J': case 'Q': case 'K': value += 10; break;
                case 'A': value += 11; break;
            }
        }
        return value;
    }
}
