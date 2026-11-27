typedef struct File_826E9740 {
    void *vtable;         /* 0x00 */
    int unknown04;        /* 0x04 */
    unsigned int name;    /* 0x08: string node pointer with flag bits in the low two bits */
    unsigned char opened; /* 0x0c */
    void *file;           /* 0x10 */
    unsigned int flags;   /* 0x14 */
    int error;            /* 0x18 */
    int unknown1C;        /* 0x1c */
} File_826E9740;

extern void *lbl_831E7E64;
extern void *fn_8267B890(void *heap, unsigned int size, void *info);
extern void fn_8267BE38(void *block);
extern int fn_826BD6B0(unsigned short *out, const char *text, int length);
extern int fn_826BD758(const char *text, int length);
extern int fn_826E96C8(void);
extern void fn_82F6B580(void *file);
extern int fn_82F6B818(void **file, const unsigned short *name, const unsigned short *mode);

static __forceinline const char *GetName_826E9740(File_826E9740 *self)
{
    return (const char *)((self->name & ~3) + 8);
}

void fn_826E9740(File_826E9740 *self)
{
    const char *mode = "rb";
    unsigned short *name;
    unsigned short wideMode[16];

    if (self->flags & 4) {
        if (self->flags & 1) {
            mode = "w+b";
        } else {
            mode = "wb";
        }
    } else if (self->flags & 8) {
        if (self->flags & 1) {
            mode = "a+b";
        } else {
            mode = "ab";
        }
    } else if (self->flags & 2) {
        mode = "r+b";
    }
    name = (unsigned short *)fn_8267B890(lbl_831E7E64, (fn_826BD758(GetName_826E9740(self), -1) + 1) * 2, 0);
    fn_826BD6B0(name, GetName_826E9740(self), -1);
    fn_826BD6B0(wideMode, mode, -1);
    fn_82F6B818(&self->file, name, wideMode);
    fn_8267BE38(name);
    if (self->file != 0) {
        fn_82F6B580(self->file);
    }
    self->opened = self->file != 0;
    if (!self->opened) {
        self->error = fn_826E96C8();
    } else {
        self->error = 0;
    }
    self->unknown1C = 0;
}
