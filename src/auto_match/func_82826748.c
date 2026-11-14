typedef struct Entry_82826748 {
    int pad[2];
    char *name;
    int pad0c[2];
    unsigned char id;
} Entry_82826748;

typedef struct {
    char pad[0x28];
    unsigned char id;
} Key_82826748;

extern void fn_828223C8(void *cur, Entry_82826748 **next);
extern char *strncpy(char *dst, const char *src, unsigned int n);

void fn_82826748(char *self, Key_82826748 *key, char *out, int size)
{
    Entry_82826748 *entry;
    void *cur = self + 0x2f4;
    char *name;

    for (;;) {
        fn_828223C8(cur, &entry);
        if (entry == 0) {
            return;
        }
        if (entry->id == key->id) {
            break;
        }
        cur = entry;
    }
    name = entry->name;
    if (name != 0) {
        strncpy(out, name, size);
        out[size - 1] = 0;
    }
}
