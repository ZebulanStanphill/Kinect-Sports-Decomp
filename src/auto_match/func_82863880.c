typedef struct Header_82863880 {
    char pad0[0xb];
    char version[0x15];
    unsigned int offset;    /* 0x20 */
    unsigned int size;      /* 0x24 */
    int count;              /* 0x28 */
} Header_82863880;

/* .rdata block (size 0x48) holding "04.05.05.0032" at +0, ".data" at +0x10 and +0x18 */
extern char lbl_8201F998[0x48];

extern int strcmp(const char *, const char *);
extern unsigned int fn_828177C8(unsigned int value, const char *section);

unsigned int fn_82863880(Header_82863880 *h)
{
    if (strcmp(h->version, &lbl_8201F998[0]) == 0) {
        return h->count * h->size + h->offset;
    }
    {
        unsigned int offset = fn_828177C8(h->offset, &lbl_8201F998[0x10]);
        unsigned int size = fn_828177C8(h->size, &lbl_8201F998[0x18]);
        offset = (offset + 3) & ~3;
        size = (size + 3) & ~3;
        return h->count * size + offset;
    }
}
