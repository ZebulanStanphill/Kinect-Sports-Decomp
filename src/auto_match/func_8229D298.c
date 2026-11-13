typedef struct Ref_8229D298 {
    void *ptr;
    void *ctrl;
} Ref_8229D298;

typedef struct Name_8229D298 {
    int a;
    int b;
} Name_8229D298;

typedef struct Obj_8229D298 {
    void *vtbl;
    Ref_8229D298 widget;
    int field0c;
    float field10;
    int field14;
    int field18;
} Obj_8229D298;

extern void fn_822315A0(void *ctrl);
extern void fn_82291208(void);
extern void fn_822A0790(void);
extern void fn_823F2E20(Ref_8229D298 *dst, Ref_8229D298 *src);
extern void fn_82517978(Ref_8229D298 *out, void *ptr, void *ctrl, int v);
extern void fn_82520158(const char *name, Name_8229D298 *out, int v);
extern void *fn_8266EC60(void);
extern Ref_8229D298 *fn_8266EE08(Ref_8229D298 *out, void *mgr, Name_8229D298 *name, int a, int b, int c);
extern void fn_8266F628(void *ptr, int v);
extern void fn_8266F640(void *ptr, int v);
extern void fn_8266F6A8(void *ptr, int v);
extern void fn_82673A28(void *ptr, void (*cb)(void), Obj_8229D298 *ctx);
extern void fn_82673BC0(void *ptr, void (*cb)(void), Obj_8229D298 *ctx);
extern char lbl_821AB238[];
extern char lbl_821ABBA4[];

Obj_8229D298 *fn_8229D298(Obj_8229D298 *self)
{
    Ref_8229D298 *widget;

    self->vtbl = lbl_821ABBA4;
    widget = &self->widget;
    widget->ptr = 0;
    widget->ctrl = 0;
    self->field10 = 0.0f;
    self->field0c = 0;
    self->field14 = 0;
    self->field18 = 0;
    {
        Name_8229D298 name;
        Ref_8229D298 tmp;
        fn_82520158("ui_herocaption", &name, 0);
        fn_823F2E20(widget, fn_8266EE08(&tmp, fn_8266EC60(), &name, 0, 1, 0));
        if (tmp.ctrl != 0) {
            fn_822315A0(tmp.ctrl);
        }
    }
    fn_8266F640(widget->ptr, 1);
    fn_8266F628(widget->ptr, 1);
    fn_82673A28(widget->ptr, fn_822A0790, self);
    fn_82673BC0(widget->ptr, fn_82291208, self);
    {
        Ref_8229D298 tmp2;
        tmp2.ptr = 0;
        tmp2.ctrl = 0;
        self->vtbl = lbl_821AB238;
        fn_82517978(&tmp2, widget->ptr, widget->ctrl, 0);
        fn_8266F6A8(tmp2.ptr, 0x10);
        if (tmp2.ctrl != 0) {
            fn_822315A0(tmp2.ctrl);
        }
    }
    return self;
}
