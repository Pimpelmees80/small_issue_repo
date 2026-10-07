public class DuplicateTest {

    // Unique function name
    public void uniqueFunction(int value) {
        if (value > 10) {
            System.out.println("Greater than 10");
        }

        if (value < 0) {
            System.out.println("Negative");
        }
    }

    // First function named duplicateFunction
    public void duplicateFunction(int value) {
        // Duplicate IF #1
        if (value == 5) {
            System.out.println("Five");
        }

        // Duplicate IF #2: exactly the same condition
        if (value == 5) {
            System.out.println("Five again");
        }

        // Unique IF
        if (value == 20) {
            System.out.println("Twenty");
        }
    }

    // Same function name (overloading)
    public void duplicateFunction(String text) {
        // Same IF condition twice
        if (text == null) {
            return;
        }

        if (text == null) {
            return;
        }

        // Unique IF
        if (text.isEmpty()) {
            System.out.println("Empty");
        }
    }

    public void anotherUniqueFunction(int value) {
        // These are duplicates
        if (value > 100) {
            System.out.println("Large");
        }

        if (value > 100) {
            System.out.println("Still large");
        }

        if (value > 100) {
            System.out.println("Very large");
        }

        // Not a duplicate
        if (value > 200) {
            System.out.println("Very large");
        }
    }
}


class SecondClass {

    // Duplicate name across classes
    public void uniqueFunction(int value) {
        if (value < 0) {
            System.out.println("Negative");
        }
    }

    // Actually unique in this class, but name exists in DuplicateTest
    public void anotherUniqueFunction(int value) {
        if (value == 42) {
            System.out.println("Answer");
        }
    }

    public void completelyUnique() {
        if (true) {
            System.out.println("Unique");
        }
    }
}