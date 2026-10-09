package main

import (
	"errors"
	"fmt"
	"strings"
)

// =====================================
// Validation via error return
// =====================================
func CreateUser(username string, age int) error {

	if username == "" {
		return errors.New("username is required")
	}

	if age < 0 {
		return errors.New("age cannot be negative")
	}

	return nil
}

// =====================================
// Return validation
// =====================================
func SetPassword(password string) bool {

	if password == "" {
		return false
	}

	if len(password) < 8 {
		return false
	}

	return true
}

// =====================================
// Range validation
// =====================================
func SetPercentage(value int) error {

	if value < 0 || value > 100 {
		return errors.New("percentage out of range")
	}

	return nil
}

// =====================================
// Panic validation
// =====================================
func CriticalOperation(input string) {

	if input == "" {
		panic("input cannot be empty")
	}

	fmt.Println(input)
}

// =====================================
// Email validator helper
// =====================================
func ValidateEmail(email string) bool {
	return strings.Contains(email, "@")
}

func CreateAccount(email string) error {

	if !ValidateEmail(email) {
		return errors.New("invalid email")
	}

	return nil
}

// =====================================
// Whitelist validation
// =====================================
func SetRole(role string) error {

	validRoles := map[string]bool{
		"admin": true,
		"user":  true,
		"guest": true,
	}

	if !validRoles[role] {
		return errors.New("invalid role")
	}

	return nil
}

// =====================================
// Multiple parameters
// =====================================
func Transfer(amount float64, account string) error {

	if amount <= 0 {
		return errors.New("invalid amount")
	}

	if account == "" {
		return errors.New("missing account")
	}

	return nil
}

// =====================================
// Continue validation
// =====================================
func ProcessUsers(users []string) {

	for _, user := range users {

		if user == "" {
			continue
		}

		fmt.Println(user)
	}
}

// =====================================
// Break validation
// =====================================
func ReadValues(values []int) {

	for _, value := range values {

		if value == -1 {
			break
		}

		fmt.Println(value)
	}
}

// =====================================
// Nested validation
// =====================================
func NestedValidation(input string) error {

	if input != "" {

		if len(input) < 3 {
			return errors.New("too short")
		}

	} else {
		return errors.New("missing input")
	}

	return nil
}

// =====================================
// Mixed validation + business logic
// =====================================
func Purchase(quantity int) error {

	if quantity <= 0 {
		return errors.New("invalid quantity")
	}

	if quantity > 100 {
		fmt.Println("bulk order")
	}

	return nil
}

// =====================================
// Business logic only
// NIET classificeren als validation
// =====================================
func CalculateDiscount(age int) float64 {

	if age > 65 {
		return 0.20
	}

	return 0.0
}

// =====================================
// Business logic only
// NIET classificeren als validation
// =====================================
func Login(username string) {

	if username == "admin" {
		fmt.Println("administrator")
	}
}

func main() {
	fmt.Println("Demo")
}