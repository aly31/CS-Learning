#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand (time(NULL));

    // Let's review how to iterate over a string
    // Visit all its characters and print them out on a new line
    int encryptionCode = rand() % 26 + 1;
    string stringToEncrypt;
    cout << encryptionCode << endl;
    cout << "Enter the string you want to encrypt" << endl;
    getline(cin, stringToEncrypt);      // Remember getline???? User input for strings

    for (unsigned int i = 0; i < stringToEncrypt.length(); i++)
    {
        char c = stringToEncrypt[i];
        if (isalpha(c))     // for now, we'll only encrypt alphabetical characters
        {
            if (isupper(c))
            {
                char encrypted = c - 'A';
                encrypted = (encrypted + encryptionCode ) % 26;     // shift the character by the encryption code
                encrypted += 'A';
                c = encrypted;
            }
            else if (islower(c))
            {
                char encrypted = c - 'a';
                encrypted = (encrypted + encryptionCode ) % 26;     // shift the character by the encryption code
                encrypted += 'a';
                c = encrypted;
            }
        }
        stringToEncrypt[i] = c;
    }

    cout << endl;
    // Dang, I def can't read that if i was spying on your messages

    cout << stringToEncrypt << endl;

    for (unsigned int i = 0; i < stringToEncrypt.length(); i++)
    {
        char c = stringToEncrypt[i];
        if (isalpha(c))     // only alphabetical characters were encrypted
        {
            if (isupper(c))
            {
                char encrypted = c - 'A';
                encrypted -= encryptionCode;
                if (encrypted < 0)
                {
                    encrypted += 26;
                }
                c = encrypted + 'A';
            }
            else if (islower(c))
            {
                char encrypted = c - 'a';
                encrypted -= encryptionCode;
                if (encrypted < 0)
                {
                    encrypted += 26;
                }
                c = encrypted + 'a';
            }
        }
        stringToEncrypt[i] = c;
    }
    cout << endl;

    cout << stringToEncrypt << endl;
   
}




















char encryptChar(char c, int encryptionCode)
{
    if (isalpha(c))
    {
        if (isupper(c))
        {
            char encrypted = c - 'A';
            encrypted = (encrypted + encryptionCode ) % 26;
            encrypted += 'A';
            return encrypted;
        }
        if (islower(c))
        {
            char encrypted = c - 'a';
            encrypted = (encrypted + encryptionCode ) % 26;
            encrypted += 'a';
            return encrypted;
        }
    }
    return c;
}

char decryptChar(char c, int encryptionCode)
{
    if (isalpha(c))
    {
        if (isupper(c))
        {
            char encrypted = c - 'A';
            encrypted -= encryptionCode;
            if (encrypted < 0)
            {
                encrypted += 26;
            }
            return encrypted + 'A';
        }
        if (islower(c))
        {
            char encrypted = c - 'a';
            encrypted -= encryptionCode;
            if (encrypted < 0)
            {
                encrypted += 26;
            }
            return encrypted + 'a';
        }
    }
    return c;
}


