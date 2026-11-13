struct Key_8276E480 {
    unsigned char *name;
    int value;
};

extern void fn_8276DAB0(void *table, void *owner, struct Key_8276E480 *key, unsigned int hash);

void fn_8276E480(void *table, unsigned char *name, int value)
{
    struct Key_8276E480 key;
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
    fn_8276DAB0(table, table, &key, hash);
}
