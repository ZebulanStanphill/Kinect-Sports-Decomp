typedef struct Stream_82D41FB0 Stream_82D41FB0;
typedef struct Info_82D41FB0 {
    int pad0[3];
    int kind;
    int pad10[4];
    char a[0x10];
    char b[0x10];
    char c[0x10];
} Info_82D41FB0;
typedef struct StreamVtbl_82D41FB0 {
    void *pad0[3];
    unsigned int (*seek)(Stream_82D41FB0 *self, unsigned int mode);
    void *pad10;
    Info_82D41FB0 *(*getInfo)(Stream_82D41FB0 *self, unsigned int mode, char *buffer);
} StreamVtbl_82D41FB0;
struct Stream_82D41FB0 {
    StreamVtbl_82D41FB0 *vt;
    int pad4[41];
    unsigned int countA;
    int padAC[2];
    unsigned int countB;
};
extern char *fn_82D6F590(char *out, char *a, char *b, char *c, float scale);
extern float lbl_83182A98;

unsigned int fn_82D41FB0(Stream_82D41FB0 *self)
{
    unsigned int mode;
    Info_82D41FB0 *info;
    char result[16];
    char buffer[512];

    if (self->countB + self->countA == 0) {
        return 0xffffffff;
    }
    mode = self->countA == 0 ? 0x80000000 : 0;
    info = self->vt->getInfo(self, mode, buffer);
    if (info->kind != 3) return mode;
    if (*fn_82D6F590(result, info->a, info->b, info->c, lbl_83182A98) == 0) return mode;
    return self->vt->seek(self, mode);
}
