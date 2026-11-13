typedef struct Val_822A4830 { int w0; int type; union { void *p; unsigned char b; double d; } u; } Val_822A4830;

typedef struct Data_822A4830 {
    char pad0[0x28];
    int movie;          /* 0x28 */
    char pad2c[0x50 - 0x2c];
    int event;          /* 0x50 */
} Data_822A4830;

typedef struct Self_822A4830 {
    Data_822A4830 *data;
} Self_822A4830;

extern void fn_82F64988(unsigned short *dst, int size, const unsigned short *src);
extern void fn_82273CD8(Val_822A4830 *, int);
extern void fn_82273C88(Val_822A4830 *);
extern void fn_82672C20(int, const char *, Val_822A4830 *, int);

void fn_822A4830(Self_822A4830 *self, int event, int kind)
{
    Val_822A4830 v;
    unsigned short name[0x20];
    const unsigned short *text;

    self->data->event = event;
    if (self->data->movie == 0) {
        return;
    }
    v.w0 = 0;
    v.type = 0;
    switch (kind) {
    case 1:
        text = L"100_sprint";
        break;
    case 2:
        text = L"hurdles";
        break;
    case 3:
        text = L"longJump";
        break;
    case 4:
        text = L"discus";
        break;
    case 5:
        text = L"javelin";
        break;
    default:
        goto set;
    }
    fn_82F64988(name, 0x20, text);
set:
    fn_82273CD8(&v, 5);
    v.u.p = name;
    fn_82672C20(self->data->movie, "_root.setThumbnail", &v, 1);
    fn_82273C88(&v);
}
