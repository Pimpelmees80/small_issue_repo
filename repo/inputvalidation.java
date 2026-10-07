public class InputValidationDemo {

    // =====================================================
    // 1. NO INPUTVALIDATIE
    // =====================================================
    public static int noValidation(int a, int b) {

        int result = 0;

        if (result == 0) {
            result = 1;
        }

        if (Math.random() > 0.5) {
            result += 10;
        }

        return result;
    }

    // =====================================================
    // 2. ONLY INPUTVALIDATIE
    // =====================================================
    public static int onlyValidation(int age, String name, int amount) {

        if (age < 0) {
            return -1;
        }

        if (name == null) {
            return -2;
        }

        if (name.isEmpty()) {
            return -3;
        }

        if (amount <= 0) {
            return -4;
        }

        return amount;
    }

    // =====================================================
    // 3. MIXED
    // =====================================================
    public static int mixed(int age, String name, int score) {

        // inputvalidatie
        if (age < 0) {
            return -1;
        }

        // inputvalidatie
        if (name == null) {
            return -2;
        }

        int bonus = 10;

        // No inputvalidatie
        if (score > 100) {
            bonus = 20;
        }

        // No inputvalidatie
        if (bonus > 15) {
            score += 5;
        }

        // inputvalidatie
        if (score < 0) {
            return -3;
        }

        return score + bonus;
    }
}