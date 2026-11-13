typedef struct Header_8285FFE0 {
    char pad0[0xb];
    char version[0x15];
    unsigned int offset;    /* 0x20 */
    unsigned int size;      /* 0x24 */
    int count;              /* 0x28 */
} Header_8285FFE0;

/* .rdata block (size 0x10) holding "04.05.05.0032" */
extern char lbl_8201F908[0x10];

extern int strcmp(const char *, const char *);
extern unsigned int fn_828177C8(unsigned int value, const char *section);

unsigned int fn_8285FFE0(Header_8285FFE0 *h)
{
    if (strcmp(h->version, lbl_8201F908) == 0) {
        return h->count * h->size + h->offset;
    }
    {
        unsigned int offset = fn_828177C8(h->offset, ".data");
        unsigned int size = fn_828177C8(h->size, ".data");
        offset = (offset + 3) & ~3;
        size = (size + 3) & ~3;
        return h->count * size + offset;
    }
}
