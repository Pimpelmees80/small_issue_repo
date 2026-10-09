// =====================================
// Throw-like validation (Result::Err)
// =====================================
fn create_user(username: Option<&str>, age: i32) -> Result<(), String> {
    if username.is_none() {
        return Err("username is required".to_string());
    }

    if age < 0 {
        return Err("age cannot be negative".to_string());
    }

    Ok(())
}

// =====================================
// Return validation
// =====================================
fn set_password(password: &str) -> bool {
    if password.is_empty() {
        return false;
    }

    if password.len() < 8 {
        return false;
    }

    true
}

// =====================================
// Type-like validation
// =====================================
fn process_number(value: Option<i32>) -> Result<i32, String> {
    if value.is_none() {
        return Err("missing value".to_string());
    }

    Ok(value.unwrap() * 2)
}

// =====================================
// Range validation
// =====================================
fn set_percentage(value: i32) -> Result<(), String> {
    if value < 0 || value > 100 {
        return Err("percentage out of range".to_string());
    }

    Ok(())
}

// =====================================
// Panic validation
// =====================================
fn critical_operation(input: &str) {
    if input.is_empty() {
        panic!("input cannot be empty");
    }

    println!("{}", input);
}

// =====================================
// Continue validation
// =====================================
fn process_users(users: Vec<Option<String>>) {
    for user in users {

        if user.is_none() {
            continue;
        }

        println!("{}", user.unwrap());
    }
}

// =====================================
// Break validation
// =====================================
fn read_values(values: Vec<Option<i32>>) {
    for value in values {

        if value.is_none() {
            break;
        }

        println!("{}", value.unwrap());
    }
}

// =====================================
// Helper validator
// =====================================
fn validate_email(email: &str) -> bool {
    email.contains("@")
}

fn create_account(email: &str) -> Result<(), String> {
    if !validate_email(email) {
        return Err("invalid email".to_string());
    }

    Ok(())
}

// =====================================
// Whitelist validation
// =====================================
fn set_role(role: &str) -> Result<(), String> {
    let valid_roles = ["admin", "user", "guest"];

    if !valid_roles.contains(&role) {
        return Err("invalid role".to_string());
    }

    Ok(())
}

// =====================================
// Multiple parameters
// =====================================
fn transfer(amount: i32, account: &str) -> Result<(), String> {

    if amount <= 0 {
        return Err("invalid amount".to_string());
    }

    if account.is_empty() {
        return Err("missing account".to_string());
    }

    Ok(())
}

// =====================================
// Business logic
// NIET classificeren als validation
// ===