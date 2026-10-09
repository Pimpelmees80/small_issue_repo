def validation_demo(age, name, email, score):

    # range check
    if age < 0:
        return False

    # null check
    if name is None:
        return False

    # length check
    if len(name) < 3:
        return False

    # whitelist check
    if score not in [0, 1, 2, 3\]:
        return False

    # business logic (geen validatie)
    if score == 3:
        print("excellent")

    # business logic (geen validatie)
    if age >= 18:
        print("adult")

    return True