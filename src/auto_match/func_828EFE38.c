#include <string.h>

typedef struct String_828EFE38 {
    char data[16];         // 0x00
    unsigned int size;     // 0x10
    unsigned int capacity; // 0x14
} String_828EFE38;

extern int fn_82F64020(char *buffer, unsigned int size, const char *format, ...);
extern String_828EFE38 *fn_82230360(String_828EFE38 *self, const char *text, unsigned int count);

String_828EFE38 *fn_828EFE38(String_828EFE38 *out, const unsigned char *bytes)
{
    char byteText[16];
    char text[256];
    unsigned int i;

    fn_82F64020(text, 256, "0x");
    for (i = 0; i < 8; i++) {
        fn_82F64020(byteText, 8, "%.2X", bytes[i]);
        strcat(text, byteText);
    }
    out->size = 0;
    {
        unsigned int *pCapacity = &out->capacity;
        *pCapacity = 15;
    }
    out->data[0] = 0;
    fn_82230360(out, text, strlen(text));
    return out;
}
