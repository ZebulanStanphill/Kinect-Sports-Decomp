typedef struct Reader_82BEE320 {
    char pad0[0x20];
    unsigned int pos; /* 0x20 */
    char pad24[0xc];
    int name; /* 0x30 */
    char pad34[0x1c];
    __int64 created;  /* 0x50 */
    __int64 modified; /* 0x58 */
} Reader_82BEE320;

extern int fn_82BE68A0(Reader_82BEE320 *self);
extern unsigned char fn_82BE5C30(Reader_82BEE320 *self);
extern unsigned int fn_82BE5CC0(Reader_82BEE320 *self);
extern __int64 fn_82BE5D08(Reader_82BEE320 *self);
extern char *fn_82BE6950(Reader_82BEE320 *self);
extern int fn_82BE5F40(Reader_82BEE320 *self, unsigned char tag);
extern void fn_82BE68F0(Reader_82BEE320 *self);
/* An empty logging stub; the call still passes its arguments. */
extern void fn_82BA02A8();
extern unsigned int fn_82BE1A10(void);
extern int fn_82BE2078(void *manager, const char *name);
extern int fn_82BE5B80(Reader_82BEE320 *self);
extern void (*lbl_831751CC)(void *p);

unsigned char fn_82BEE320(Reader_82BEE320 *self)
{
    unsigned char found;
    unsigned int length;
    unsigned int start;
    unsigned char tag;
    char *item;

    found = 0;
    self->pos = 0;
    if (fn_82BE68A0(self) != 0 && fn_82BE5C30(self) == 0xcc) {
        length = fn_82BE5CC0(self);
        start = self->pos;
        while (self->pos - start < length) {
            tag = fn_82BE5C30(self);
            switch (tag) {
            case 0x1e:
                fn_82BE68F0(self);
                fn_82BA02A8(self, self->name, 0x14);
                length -= 0x16;
                found++;
                break;
            case 0x2a:
                self->created = fn_82BE5D08(self);
                found++;
                break;
            case 0x2b:
                self->modified = fn_82BE5D08(self);
                found++;
                break;
            case 0x47:
                item = fn_82BE6950(self);
                if (item != 0) {
                    fn_82BE2078((void *)fn_82BE1A10(), item);
                    lbl_831751CC(item);
                }
                break;
            default:
                if (fn_82BE5F40(self, tag) == 0) {
                    return 0;
                }
                break;
            }
        }
        if (found == 3) {
            return fn_82BE5B80(self) != 0;
        }
    }
    return 0;
}
