char randomLetter;

char randomchar() {
        char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
        string randomLetter = "";
        randomLetter = alphabet[rand() % 26];
        return randomLetter;
}

