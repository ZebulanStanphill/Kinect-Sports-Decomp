#include "havok/hkString.h"

char hkString::toUpper(char ch)
{
    if (ch < 'a' || ch > 'z') {
        return ch;
    }
    return ch - ('a' - 'A');
}
