typedef struct Id_82880818 {
    unsigned char bytes[8];
} Id_82880818;

typedef struct Self_82880818 {
    char pad0[0x60];
    Id_82880818 *begin;     /* 0x60 */
    Id_82880818 *end;       /* 0x64 */
} Self_82880818;

int memcmp(const void *a, const void *b, unsigned int n);

unsigned char fn_82880818(Self_82880818 *self, const Id_82880818 *id)
{
    Id_82880818 *it;

    for (it = self->begin; it != self->end; it++) {
        if (memcmp(it, id, sizeof(Id_82880818)) == 0)
            return 1;
    }
    return 0;
}
