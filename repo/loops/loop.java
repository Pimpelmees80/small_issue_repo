import java.util.List;

public class LoopDemo {

    public void demo(List<String> users, int limit) {

        for (int i = 0; i < users.size(); i++) {
        }

        for (String user : users) {
        }

        int max = limit;

        for (int i = 0; i < max; i++) {
        }

        while (limit > 0) {
            limit--;
        }

        do {
            limit--;
        } while (limit > 0);
    }
}