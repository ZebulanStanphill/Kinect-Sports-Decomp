typedef struct Obj_82BF8CA8 {
    char pad0[0x1c];
    void *file;             /* 0x1c */
    int pad20;
    int id;                 /* 0x24 */
    int pad28[2];
    unsigned char *hash;    /* 0x30 */
    int pad34[5];
    int loadedId;           /* 0x48 */
} Obj_82BF8CA8;

extern unsigned char *fn_82BF1C20(void *file, int id);
extern int memcmp(const void *, const void *, unsigned int);

unsigned char fn_82BF8CA8(Obj_82BF8CA8 *self)
{
    unsigned char *digest;
    if (self->loadedId != self->id)
        return 0;
    digest = fn_82BF1C20(self->file, self->id);
    if (digest == 0)
        return 0;
    return memcmp(self->hash, digest, 0x14) == 0;
}
