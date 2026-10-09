/**
 * Demo file voor Input Validation Detection
 */

// ============================
// Throw validation
// ============================
function createUser(username, age) {
    if (username == null) {
        throw new Error("username is required");
    }

    if (age < 0) {
        throw new Error("age cannot be negative");
    }

    return true;
}

// ============================
// Return validation
// ============================
function setPassword(password) {
    if (!password) {
        return false;
    }

    if (password.length < 8) {
        return false;
    }

    return true;
}

// ============================
// Type validation
// ============================
function processNumber(value) {
    if (typeof value !== "number") {
        throw new Error("value must be a number");
    }

    return value * 2;
}

// ============================
// Array validation
// ============================
function handleItems(items) {
    if (!Array.isArray(items)) {
        return;
    }

    console.log(items.length);
}

// ============================
// Regex validation
// ============================
function register(email) {
    const emailRegex = /^[^@]+@[^@]+\.[^@]+$/;

    if (!emailRegex.test(email)) {
        throw new Error("invalid email");
    }

    return true;
}

// ============================
// Enum / whitelist validation
// ============================
function setRole(role) {
    const validRoles = ["admin", "user", "guest"];

    if (!validRoles.includes(role)) {
        throw new Error("invalid role");
    }

    return true;
}

// ============================
// Continue validation
// ============================
function processUsers(users) {
    for (const user of users) {

        if (user == null) {
            continue;
        }

        console.log(user);
    }
}

// ============================
// Break validation
// ============================
function readValues(values) {
    for (const value of values) {

        if (value == null) {
            break;
        }

        console.log(value);
    }
}

// ============================
// Validation via helper
// ============================
function validateEmail(email) {
    return /^[^@]+@[^@]+\.[^@]+$/.test(email);
}

function createAccount