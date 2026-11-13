typedef struct Val_822A4C18 { int w0; int type; union { void *p; unsigned char b; double d; } u; } Val_822A4C18;

typedef struct Data_822A4C18 {
    char pad0[0x28];
    int movie;          /* 0x28 */
    char pad2c[0x50 - 0x2c];
    int event;          /* 0x50 */
    int config;         /* 0x54 */
} Data_822A4C18;

typedef struct Self_822A4C18 {
    Data_822A4C18 *data;
} Self_822A4C18;

extern const double lbl_821954B0[0x145];
extern void fn_82273CD8(Val_822A4C18 *, int);
extern void fn_82273C88(Val_822A4C18 *);
extern void fn_82672C20(int, const char *, Val_822A4C18 *, int);

void fn_822A4C18(Self_822A4C18 *self, int config)
{
    Data_822A4C18 *data = self->data;
    Val_822A4C18 v;

    if (config == data->config) {
        return;
    }
    if (data->movie == 0) {
        return;
    }
    v.w0 = 0;
    v.type = 0;
    if (config != 0) {
        switch (data->event) {
        case 1:
            fn_82273CD8(&v, 3);
            v.u.d = lbl_821954B0[0xf];
            fn_82672C20(self->data->movie, "_root.setConfiguration", &v, 1);
            break;
        case 2:
            fn_82273CD8(&v, 3);
            v.u.d = lbl_821954B0[0x70];
            fn_82672C20(self->data->movie, "_root.setConfiguration", &v, 1);
            break;
        case 3:
            fn_82273CD8(&v, 3);
            v.u.d = lbl_821954B0[0x88];
            fn_82672C20(self->data->movie, "_root.setConfiguration", &v, 1);
            break;
        case 4:
            fn_82273CD8(&v, 3);
            v.u.d = lbl_821954B0[0x70];
            fn_82672C20(self->data->movie, "_root.setConfiguration", &v, 1);
            break;
        }
    } else {
        fn_82672C20(data->movie, "_root.hideAllConfigurations", 0, 0);
    }
    self->data->config = config;
    fn_82273C88(&v);
}
