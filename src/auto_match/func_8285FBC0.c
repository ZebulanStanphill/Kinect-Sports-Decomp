typedef struct Self_8285FBC0 {
    int pad[18];
    int f48;
    int f4c;
} Self_8285FBC0;

typedef struct Ctx_8285FBC0 {
    int pad[21];
    unsigned char *buf;
} Ctx_8285FBC0;

typedef struct Writer_8285FBC0 {
    unsigned char *buf;
    int count;
    int a;
    int b;
} Writer_8285FBC0;

extern int lbl_832115D0[];
extern Ctx_8285FBC0 *fn_82859DE0(void);
extern void fn_8285FA78(Self_8285FBC0 *self, int arg, unsigned char **cursor);
extern void fn_8285FB00(Self_8285FBC0 *self, int arg, unsigned char **cursor);

void fn_8285FBC0(Self_8285FBC0 *self, int arg)
{
    Writer_8285FBC0 *w = (Writer_8285FBC0 *)&lbl_832115D0[20];
    unsigned char *buf = fn_82859DE0()->buf;
    int b = self->f4c;
    int a = self->f48;
    unsigned char *cursor;

    cursor = buf + 1;
    w->count = 1;
    w->a = a;
    w->buf = buf;
    w->b = b;
    *buf = 0xfc;
    fn_8285FA78(self, arg, &cursor);
    fn_8285FB00(self, arg, &cursor);
}
