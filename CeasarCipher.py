keepGoing = True
while keepGoing:
	action = raw_input("Would you like to encrypt or decrypt? [encrypt/decrypt/quit]: ")
	while not (action == "encrypt" or action == "decrypt" or action == "quit"):
		action = raw_input("Invalid input. Would you like to encrypt or decrypt? [encrypt/decrypt/quit]: ")

	if action == "encrypt":
		shift = input("Enter the Caesar Cipher shift value: ")
		plaintext = raw_input("Enter your message: ")

		ciphertext = ""
		for i in range(0, len(plaintext)):
			currASCII = ord(plaintext[i])
			ciphertext = ciphertext + chr(currASCII + shift)
		print("Your encrypted message is: " + ciphertext)
	elif action == "decrypt":
		shift = input("Enter the Caesar Cipher shift value: ")
		crypttext = raw_input("Enter your encrypted message: ")

		decrypttext = ""
		for i in range(0, len(crypttext)):
			currASCII = ord(crypttext[i])
			decrypttext = decrypttext + chr(currASCII - shift)
		print("Your decrypted message is: " + decrypttext)
	else:
		keepGoing = False
