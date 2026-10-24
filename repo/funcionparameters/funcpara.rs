use std::collections::HashMap;

fn validate_age(age: i32) {
    if age < 0 {
        panic!("age cannot be negative");
    }
}

fn calculate_discount(age: i32, is_vip: bool) -> f64 {
    if age > 65 {
        return 0.20;
    }

    if is_vip {
        return 0.10;
    }

    0.0
}

fn process_users(users: Vec<String>) {
    for user in users {
        if user.is_empty() {
            continue;
        }

        println!("{}", user);
    }
}

fn find_value(values: Vec<i32>, target: i32) -> Option<i32> {
    for value in values {
        if value == target {
            return Some(value);
        }
    }

    None
}

fn divide(a: i32, b: i32) -> i32 {
    if b == 0 {
        panic!("division by zero");
    }

    a / b
}

fn contains_name(names: &[String], search_name: &str) -> bool {
    for name in names {
        if name == search_name {
            return true;
        }
    }

    false
}

fn count_positive(numbers: &[i32]) -> usize {
    let mut count = 0;

    for number in numbers {
        if *number > 0 {
            count += 1;
        }
    }

    count
}

fn process_map(data: HashMap<String, i32>, minimum: i32) {
    for (_, value) in data {
        if value < minimum {
            continue;
        }

        println!("{}", value);
    }
}

fn nested_validation(users: Vec<String>, min_length: usize) {
    for user in users {
        if user.len() < min_length {
            panic!("username too short");
        }

        println!("{}", user);
    }
}

fn loop_with_index(items: Vec<String>) {
    for i in 0..items.len() {
        if items[i].is_empty() {
            continue;
        }

        println!("{}", items[i]);
    }
}

fn while_loop(limit: i32) {
    let mut current = 0;

    while current < limit {
        current += 1;
    }
}

fn complex_condition(age: i32, country: &str, active: bool) {
    if age >= 18 && country == "NL" && active {
        println!("allowed");
    }
}

fn assert_example(value: i32) {
    assert!(value > 0);
}

fn unreachable_example(flag: bool) {
    if flag {
        return;
    }

    unreachable!("should never happen");
}

fn result_example(input: &str) -> Result<u32, String> {
    if input.is_empty() {
        return Err("input empty".to_string());
    }

    Ok(42)
}

fn main() {
    validate_age(25);

    let users = vec![
        "Alice".to_string(),
        "".to_string(),
        "Bob".to_string(),
    ];

    process_users(users);
}