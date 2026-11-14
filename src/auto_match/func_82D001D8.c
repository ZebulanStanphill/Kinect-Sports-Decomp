typedef struct StringMap_82D001D8 {
    unsigned int *elem;
    int numElems;
    unsigned int hashMod;
} StringMap_82D001D8;

extern int fn_82CFBBF0(const char *a, const char *b);

unsigned int fn_82D001D8(StringMap_82D001D8 *self, const char *key)
{
    unsigned int hash = 0;
    unsigned int i;
    int n;

    for (n = 0; key[n] != 0; n++)
        hash = hash * 31 + key[n];
    hash &= 0x7fffffff;
    for (i = hash & self->hashMod; self->elem[i] != -1; i = (i + 1) & self->hashMod) {
        if (self->elem[i] == hash
            && fn_82CFBBF0(key, (const char *)self->elem[self->hashMod + i + 1]) == 0)
            return i;
    }
    return self->hashMod + 1;
}
