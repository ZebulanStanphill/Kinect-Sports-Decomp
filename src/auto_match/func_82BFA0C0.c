typedef struct Global_82BFA0C0 {
    char pad[0x27];
    unsigned char pending;      /* 0x27 */
    unsigned char busy;         /* 0x28 */
} Global_82BFA0C0;

extern Global_82BFA0C0 lbl_8322FD08;
extern unsigned char lbl_8322BCF8[];
extern int fn_82BF9038(void *buffer, unsigned int size, unsigned int offset, int flags);

void fn_82BFA0C0(void)
{
    Global_82BFA0C0 *g = &lbl_8322FD08;
    unsigned char *buffer;
    unsigned int size;
    unsigned int offset;

    if (g->busy == 0) {
        if (g->pending != 0) {
            size = 0x4000;
            buffer = lbl_8322BCF8;
            offset = 0;
        } else {
            size = 0x800;
            offset = 0x3800;
            buffer = lbl_8322BCF8 + 0x3800;
        }
        if (fn_82BF9038(buffer, size, offset, 0) != 0)
            g->pending = 0;
    }
}
