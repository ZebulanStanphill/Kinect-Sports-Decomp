struct Key_826A5E30 {
    unsigned char *name;
    int value;
};

extern void fn_826A55C0(void *table, void *owner, struct Key_826A5E30 *key, unsigned int hash);

void fn_826A5E30(void *table, unsigned char *name, int value)
{
    struct Key_826A5E30 key;
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
    fn_826A55C0(table, table, &key, hash);
}
