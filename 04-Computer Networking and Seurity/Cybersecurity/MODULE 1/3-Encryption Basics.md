- Encryption is a method of converting a plain text into a form that is unreadable(ciphertext), Decryption is the method of converting a cyphertext back to redable plain text.
- Two main things for encryption is Algorithm(Public) and Key(Secret). With the combination of these two the plaintext will be converted to cyphertext.

- Symmetrical Encryption: Symmetric encryption is a type of encryption where **only one key (a secret key) is used to both encrypt and decrypt electronic information**.
	- AES(Advanced Encryption Standard), DES(Data Encryption Standard), Triple DES (3DES), Blowfish, RC4, RC5, RC6.
	- Symmertical encryption is fast and strong.

- Asymmetrical Encryption: Asymmetric Encryption uses **two distinct, yet related keys**. The Public Key, is used for encryption and the other, the Private Key, is for decryption.
	- Mostly it is used to Key-Exchange and agreement.
	- RSA(Rivest-Shamir-Adleman), ECC(Elliptic Curve Cryptosystem), DH(Diffie-Hellman), El Gamal.
	- The Public-Private key pair is generated at the same time as they are mathematically related and the encryption done by one key can be decrypted by it's other paired key only.
		- When a session begin the public key of both the parties are exchanged.
		- If we encrypt with the public key then **it assures *Confidentiality*** as decryption can only happen with the paired private key. So it's assured that the message can't be read by someone else as they can't have the private key.
		- If we encrypt with the private key then **it assures *Authentication*** as decryption can only happen with the paired public key. So only the person who has the private key can send the messsage that can be decrypted by that shared public key which gaurentee that the other person is genuine.
			- This gives the assurence to the reciever that only person who could have encrypted the data is the individual who posses the private key.
	- Asymmetrical encryption is Scalable, has better key distribution, can help with authentication and nonrepudiation but is also slow and mathematically intensive.
	![[Pasted image 20211129145812.png]]

- Hash Function: Hash functions take a string of any size and convert it into a gibrish value of fixed size.
	- When passed same input it will always produce same output.
	- Hash functions are irreversible.
	- The best thing about Hash function is that it's only one way i.e. one can't get the string back from the gibrish. (**This assures integrity**)
	- Hash functions and digital signatures help us **provide the authentication and legitimacy** of the senders and the receivers.
	- MD2, MD4, MD5, HAVAL, SHA, SHA-1, SHA-256, SHA-384, SHA-512, Tiger
	- HMAC (Hash Based Message Authentication Code): In this we include a pre shared secret into the message which is to be send and then hash it. **This assures Authentication and Integrity**.
		![[Pasted image 20211129151038.png]]
		- One can't alter the message as the message with the key is hashed not just the message. eg. JWT token.
	- Messages are stored in the hashed format in the databases so even if the database is hacked the passwords will not be revelead but it has a loop hole i.e. if the hacker send a password and the generated hash matched with any hash value in DB then the hacker will know the password, that's why the passwords are not directly hashed they are first added with the salt and then hashed.4
		- Salt is random data that is used as an additional input to a one-way function that hashes data, a password or passphrase. Salts are used to safeguard passwords in storage.
		- Salts create unique passwords even in the instance of two users choosing the same passwords. Salts help us mitigate hash table attacks by forcing attackers to re-compute them using the salts for each user.

- Digital Signatures: It is basically a hash value that is encrypted using the sender's private key.
	- This provide us with Authentication(private key for encryption), Nonrepudiation(Use of private key that only the sender possess) and integrity(Hash function).
	- To check if the digital signature is valid, the digitally signed message is decrypted using the public key to get the hash value that can later be verified.
	- Digital signature ensures that the software or whatever recived came from the correct publisher and also protect the message from altering after being published or sent.

- SSL(Secure Socket Layer) and TLS(Transfer Layer Security)
	- SSL is older and TLS is new encryption method.
	- TLS is most widely used method for encrypting data on the internet.
	- TLS provides privacy as it encrypt the data, data integrity as it uses message authentication code(MAC) when communicating between 2 applications.