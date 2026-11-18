#include <string.h>

typedef struct Writer_82A99F88 {
    char pad0[0xc];
    long status;           /* 0xc */
    char *buffer;          /* 0x10 */
    unsigned int capacity; /* 0x14 */
    unsigned int length;   /* 0x18 */
} Writer_82A99F88;

void fn_82A99F88(Writer_82A99F88 *self, const char *text)
{
    if (self->status < 0) {
        return;
    }
    if (self->capacity - self->length < strlen(text) + 1) {
        self->status = 0x80004005;
        return;
    }
    strcpy(self->buffer + self->length, text);
    self->length += strlen(text);
}
