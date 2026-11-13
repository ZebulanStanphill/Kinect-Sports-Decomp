extern void *(*lbl_83223C58)(void *ctx, unsigned int size, int flags);
extern void *lbl_83223C5C;
extern void *lbl_83223C60;
extern void *lbl_83223C64;

void *fn_82AB1818(unsigned int size)
{
    void *r = 0;
    if (lbl_83223C58 != 0 && lbl_83223C60 != 0 && lbl_83223C5C != 0) {
        r = lbl_83223C58(lbl_83223C64, size, 2);
    }
    return r;
}
