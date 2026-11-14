void *memset(void *d, int c, unsigned int n);
int memcmp(const void *a, const void *b, unsigned int n);

typedef struct Key_82BE5100 {
    unsigned char bytes[0x24];
} Key_82BE5100;

typedef struct Entry_82BE5100 {
    char pad0[0x18];
    Key_82BE5100 key;                       /* 0x18 */
} Entry_82BE5100;

unsigned char fn_82BE5100(Entry_82BE5100 *entry)
{
    Key_82BE5100 zero;
    memset(&zero, 0, sizeof(zero));
    return memcmp(&entry->key, &zero, sizeof(Key_82BE5100)) == 0;
}
