extern void *memset(void *dst, int value, unsigned int size);

typedef struct Object_82A4D7F0 {
    char pad[0x54];
    int *first;
    int *second;
    char pad5c[4];
    unsigned int count;
    char pad64[0xa0];
    int enabled;
} Object_82A4D7F0;

void fn_82A4D7F0(Object_82A4D7F0 *self)
{
    if (self->enabled != 0) {
        memset(self->first, 0, self->count * sizeof(int));
        memset(self->second, 0, self->count * sizeof(int));
    }
}
