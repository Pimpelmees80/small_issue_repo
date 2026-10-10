fn demo(users: Vec<String>, limit: usize) {

    for user in &users {
        println!("{}", user);
    }

    for i in 0..users.len() {
        println!("{}", i);
    }

    let max = limit;

    for i in 0..max {
        println!("{}", i);
    }

    let mut counter = limit;

    while counter > 0 {
        counter -= 1;
    }

    loop {
        break;
    }
}