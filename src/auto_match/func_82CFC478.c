typedef struct String_82CFC478 {
    char *data;
    int size;
    int capacity;
} String_82CFC478;

void fn_82CFC478(unsigned char *out, const String_82CFC478 *self, const String_82CFC478 *suffix)
{
    int len = suffix->size - 1;
    int i;
    int offset;

    if (self->size - 1 < len) {
        *out = 0;
        return;
    }
    offset = self->size - suffix->size;
    for (i = 0; i < len; i++) {
        if (self->data[offset + i] != suffix->data[i]) {
            *out = 0;
            return;
        }
    }
    *out = 1;
}
