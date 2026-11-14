typedef struct Entry_827B2E98 {
    unsigned short value;
    char pad2[6];
} Entry_827B2E98;

typedef struct Owner_827B2E98 {
    char pad0[0x48];
    char set[4];
    unsigned int count;
    char pad50[8];
    Entry_827B2E98 **pages;
} Owner_827B2E98;

extern void *fn_827B26B0(void *set, unsigned short *key);
extern void fn_827B1238(void *set, void *owner, unsigned short *key, unsigned int hash);

static __forceinline unsigned int Hash_827B2E98(const void *data, unsigned int size)
{
    const unsigned char *bytes = (const unsigned char *)data;
    unsigned int hash = 0x1505;
    while (size > 0) {
        size--;
        hash = hash * 0x1003f + bytes[size];
    }
    return hash;
}

void fn_827B2E98(Owner_827B2E98 *self, unsigned int index, unsigned int value)
{
    unsigned short key;
    void *set;
    if (index < self->count) {
        set = self->set;
        key = (unsigned short)value;
        self->pages[index >> 6][index & 0x3f].value = (unsigned short)value;
        if (fn_827B26B0(set, &key) == 0) {
            key = (unsigned short)value;
            fn_827B1238(set, set, &key, Hash_827B2E98(&key, sizeof(key)));
        }
    }
}
