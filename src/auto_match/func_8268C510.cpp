// Constructor of Scaleform's string (game/String_8268C510.h) from a C string:
// allocates a block for the text's length and copies the text into it. A null
// pointer gives an empty string.
#include "game/String_8268C510.h"

extern "C" {
unsigned int strlen(const char *text);
void *memcpy(void *dest, const void *src, unsigned int size);
StringData_8268C510 *fn_8268B368(String_8268C510 *self, void *heap, unsigned int size, int unk);
extern void *lbl_831E7E64; // Scaleform's global heap
}

String_8268C510::String_8268C510(const char *text)
{
    unsigned int size = text ? strlen(text) : 0;
    StringData_8268C510 *data = fn_8268B368(this, lbl_831E7E64, size, 0);
    memcpy(data->text, text, size);
    tagged = (unsigned int)data;
}
