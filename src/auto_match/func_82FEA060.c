/* Sends a request message (the func_82FE6F38 shape) for an entry looked up by key, with an optional 16-byte payload
   copied into the message. Returns the message id, or 0 on failure. */
typedef struct Entry_82FEA060 {
    char pad[0xc];
    unsigned int id;           /* 0x0C */
} Entry_82FEA060;

typedef struct Msg_82FEA060 {
    unsigned char hdr[2];      /* 0x00 */
    unsigned short len;        /* 0x02 */
    unsigned int owner;        /* 0x04 */
    unsigned int id;           /* 0x08 */
    unsigned int f0C;          /* 0x0C */
    unsigned int f10;          /* 0x10 */
    unsigned int f14;          /* 0x14 */
    unsigned int f18;          /* 0x18 */
    Entry_82FEA060 *entry;     /* 0x1C */
    unsigned int pad[4];       /* 0x20 */
} Msg_82FEA060;

extern char *lbl_832642E0;
extern unsigned int lbl_83264348;
extern unsigned int lbl_832642E4;
extern unsigned int lbl_83264304;

extern void *memcpy(void *dst, const void *src, unsigned int size);
extern Entry_82FEA060 *fn_82FAB9C0(void *table, unsigned int key);
extern unsigned short fn_8300F0F0(void);
extern int fn_8300F208(unsigned int h, void *msg, unsigned int size);
extern int fn_82FF4858(unsigned int h, unsigned int *msg, unsigned int a, unsigned int b, unsigned int flags, unsigned int id);

unsigned int fn_82FEA060(unsigned int key, unsigned int owner, unsigned int flags, unsigned int a, unsigned int b,
                         const void *payload)
{
    Msg_82FEA060 s;
    Entry_82FEA060 *entry;

    s.len = 1;
    if (payload != 0) {
        memcpy(&s.f0C, payload, 0x10);
    } else {
        *(unsigned __int64 *)&s.f0C = 0;
        s.f14 = 0;
    }
    s.entry = entry = fn_82FAB9C0(lbl_832642E0 + 0x674, key);
    if (entry != 0) {
        s.owner = owner;
        s.id = ++lbl_83264348;
        if (fn_8300F208(lbl_832642E4, &s, fn_8300F0F0()) == 1) {
            if ((a == 0 && (flags & 0x10000) == 0) ||
                fn_82FF4858(lbl_83264304, &s.owner, a, b, flags, s.entry->id) == 1) {
                return s.id;
            }
        }
    }
    return 0;
}
