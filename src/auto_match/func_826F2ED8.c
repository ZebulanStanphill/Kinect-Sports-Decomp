struct Key_826F2ED8 {
    unsigned char *name;
    int value;
};

extern void fn_826F2D00(void *table, void *owner, struct Key_826F2ED8 *key, unsigned int hash);

void fn_826F2ED8(void *table, unsigned char *name, int value)
{
    struct Key_826F2ED8 key;
    unsigned int hash;
    int i;
    int n;

    key.name = name;
    key.value = value;
    i = 4;
    hash = 0x1505;
    n = 4;
    do {
        i--;
        hash = name[i] + hash * 0x1003f;
        n--;
    } while (n != 0);
    fn_826F2D00(table, table, &key, hash);
}
