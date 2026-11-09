extern void *memset(void *dst, int value, unsigned int size);

typedef struct Object_82A4D098 {
    char pad[0x2c];
    int *first;
    int *second;
    char pad34[4];
    unsigned int count;
} Object_82A4D098;

void fn_82A4D098(Object_82A4D098 *self)
{
    memset(self->first, 0, self->count * sizeof(int));
    memset(self->second, 0, self->count * sizeof(int));
}
