def reverse(text):
	return text[::-1]

def is_palindrome(text):
	return text == reverse(text)

forbidden_char = (' ', ',', '!', '.')
something = input("Enter text: ")
for x in forbidden_char:
	if x in something:
		something = something.replace(x, '')
if is_palindrome(something):
	print("Yes, it is a palindrome")
else:
	print("No, it is not a palindrome")
