extern void *memset(void *, int, unsigned int);
extern void fn_82A2AA90(void *);
extern void fn_82A2AA98(void *, const void *, int);
extern void fn_82A2AAA0(void *, void *);

typedef struct Digest_82BF1C20 {
    unsigned int words[5];
} Digest_82BF1C20;

extern Digest_82BF1C20 lbl_8322B278;

Digest_82BF1C20 *fn_82BF1C20(const void *data, int size)
{
    unsigned char ctx[0x60];
    memset(ctx, 0, 0x58);
    memset(&lbl_8322B278, 0, sizeof(lbl_8322B278));
    fn_82A2AA90(ctx);
    fn_82A2AA98(ctx, data, size);
    fn_82A2AAA0(ctx, &lbl_8322B278);
    return &lbl_8322B278;
}
