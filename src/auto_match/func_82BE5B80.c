typedef struct Obj_82BE5B80 {
    char pad0[0x1c];
    void *file;             /* 0x1c */
    int pad20;
    int id;                 /* 0x24 */
    int pad28[2];
    unsigned char *hash;    /* 0x30 */
} Obj_82BE5B80;

extern unsigned int fn_82F6D460(const char *str, unsigned int max);
extern unsigned char *fn_82BF1CA0(void *file, int id, const char *key, unsigned int len);
extern void (*lbl_831751CC)(void *p);
extern int memcmp(const void *, const void *, unsigned int);

unsigned char fn_82BE5B80(Obj_82BE5B80 *self)
{
    const char *key = "11111111111111111111111111111111";
    unsigned char *digest;
    unsigned int len;
    void *file;
    unsigned char same;
    len = fn_82F6D460(key, 0x21);
    file = self->file;
    digest = fn_82BF1CA0(file, self->id, key, len);
    if (digest == 0)
        return 0;
    if (memcmp(self->hash, digest, 0x14) == 0)
        same = 1;
    else
        same = 0;
    lbl_831751CC(digest);
    return same;
}
