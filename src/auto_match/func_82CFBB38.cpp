#include "havok/hkString.h"

char hkString::toLower(char ch)
{
    if (ch < 'A' || ch > 'Z') {
        return ch;
    }
    return ch + ('a' - 'A');
}
