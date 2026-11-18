typedef struct Entry_82526260 {
    unsigned int refCount; /* 0x0 */
    char name[0x3e8];      /* 0x4 */
    void *buffer;          /* 0x3ec */
    void *handle;          /* 0x3f0 */
} Entry_82526260;

typedef struct Table_82526260 {
    Entry_82526260 entries[35]; /* 0x0 */
    int count;                  /* 0x8a5c */
} Table_82526260;

extern Table_82526260 lbl_832767F0;

extern int fn_82A81CD0(const char *a, const char *b);
extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_82A1F238(void *handle);
extern void XMemSet(void *dst, int value, unsigned int size);

void fn_82526260(const char *name, void *buffer, void *handle)
{
    int i;
    int count;
    Entry_82526260 *entry;
    entry = lbl_832767F0.entries;
    for (i = 0; i < 35; i++, entry++) {
        if (entry->refCount != 0 && fn_82A81CD0(name, entry->name) != 0 && buffer == entry->buffer &&
            handle == entry->handle) {
            if (--entry->refCount == 0) {
                if (buffer != 0) {
                    fn_8265C990(buffer, 0x21006000);
                }
                if (handle != 0) {
                    fn_82A1F238(handle);
                }
                XMemSet(entry, 0, sizeof(Entry_82526260));
                for (count = 0; count < 35; count++) {
                    if (lbl_832767F0.entries[count].refCount == 0) {
                        break;
                    }
                }
                lbl_832767F0.count = count;
            }
        }
    }
}
