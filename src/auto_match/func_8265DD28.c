typedef struct String_8265DD28 {
    char buf[16];
    unsigned int size;
    unsigned int res;
} String_8265DD28;

extern char *fn_8265DDA0(String_8265DD28 *self);

unsigned char fn_8265DD28(String_8265DD28 *self, const char *ptr)
{
    if (ptr == 0 || ptr < fn_8265DDA0(self) || fn_8265DDA0(self) + self->size <= ptr) {
        return 0;
    } else {
        return 1;
    }
}
