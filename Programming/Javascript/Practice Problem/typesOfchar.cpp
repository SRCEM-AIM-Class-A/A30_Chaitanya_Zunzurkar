#include <iostream>
#include <iomanip>

// int main() {
//     // char
//     char myChar = 'A';
//     std::cout << "char: " << myChar << std::endl;

//     // wchar_t
//     wchar_t myWideChar = L'€';
//     std::wcout << L"wchar_t: " << myWideChar << std::endl;

//     // char16_t and char32_t
//     char16_t myChar16 = '65';
//     char32_t myChar32 = U'🌍';
//     std::cout << "char16_t: " << myChar16 << std::endl;
//     std::cout << "char32_t: " << myChar32 << std::endl;

//     // unsigned char
//     unsigned char myUnsignedChar = 255;
//     std::cout << "unsigned char: " << static_cast<int>(myUnsignedChar) << std::endl;

//     // signed char
//     signed char mySignedChar = -128;
//     std::cout << "signed char: " << static_cast<int>(mySignedChar) << std::endl;

//     return 0;
// }
#include <iostream>

int main() {
    char c = -127;          // The default sign is compiler-dependent
    signed char sc = -127;  // Explicitly signed
    unsigned char uc = -255;  // Explicitly unsigned

    std::cout << "char: " << static_cast<int>(c) << std::endl;
    std::cout << "signed char: " << static_cast<int>(sc) << std::endl;
    std::cout << "unsigned char: " << static_cast<int>(uc) << std::endl;

    return 0;
}

