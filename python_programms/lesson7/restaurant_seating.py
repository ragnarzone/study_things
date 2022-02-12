amount_of_people = input("How many people in your group? ")
amount_of_people = int(amount_of_people)

if amount_of_people > 8:
	print("You have to wait for a table.")
else:
	print("Your table is ready.")
