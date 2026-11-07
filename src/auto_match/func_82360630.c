typedef struct Value_82360630 {
    int obj;
    int type;
    double num;
} Value_82360630;

typedef struct Icon_82360630 {
    float progress0;
    float progress1;
    void *movie;
} Icon_82360630;

typedef struct Sub_82360630 {
    char pad[0x1854];
    Icon_82360630 *icon;
} Sub_82360630;

typedef struct Obj_82360630 {
    char pad0[0xd4];
    Sub_82360630 *sub;
    char pad1[0x2b20 - 0xd8];
    unsigned int id;
    char pad2[0x2ca4 - 0x2b24];
    float a;
    float b;
} Obj_82360630;

extern void fn_8229D190(Icon_82360630 *icon, int a, int b);
extern void fn_82273CD8(Value_82360630 *v, int type);
extern void fn_82273C88(Value_82360630 *v);
extern int fn_82672C20(void *movie, const char *path, Value_82360630 *args, int n);
extern double lbl_821954B0[];
extern float lbl_821CA45C[];
extern float lbl_821CC160;

void fn_82360630(Obj_82360630 *self, unsigned int id, float a, float b)
{
    Icon_82360630 *icon;
    Value_82360630 args[3];
    Value_82360630 args2[3];
    Value_82360630 *p;
    float v;
    float zero;
    float one;
    double d;
    int i;

    if (id != self->id)
        return;

    zero = lbl_821CC160;
    d = lbl_821954B0[13];
    one = lbl_821CA45C[1];

    if (a == zero) {
        fn_8229D190(self->sub->icon, 0, 2);
    } else {
        icon = self->sub->icon;
        v = a;
        if (a > one) {
            v = one;
        } else {
            if (a < zero)
                v = zero;
            if (v <= zero)
                goto second;
        }
        if (v != icon->progress1) {
            for (i = 0; i < 3; i++) {
                args[i].obj = 0;
                args[i].type = 0;
            }
            fn_82273CD8(&args[0], 3);
            args[0].num = d;
            fn_82273CD8(&args[1], 3);
            args[1].num = v;
            fn_82273CD8(&args[2], 3);
            args[2].num = lbl_821954B0[112];
            icon->progress1 = v;
            fn_82672C20(icon->movie, "_root.handIconMngr.setProgress", args, 3);
            p = &args[3];
            i = 2;
            do {
                p--;
                fn_82273C88(p);
                i--;
            } while (i >= 0);
        }
    }
second:
    if (b == zero) {
        fn_8229D190(self->sub->icon, 0, 1);
    } else {
        icon = self->sub->icon;
        v = b;
        if (b > one) {
            v = one;
        } else {
            if (b < zero)
                v = zero;
            if (v <= zero)
                goto done;
        }
        if (v != icon->progress0) {
            for (i = 0; i < 3; i++) {
                args2[i].obj = 0;
                args2[i].type = 0;
            }
            fn_82273CD8(&args2[0], 3);
            args2[0].num = d;
            fn_82273CD8(&args2[1], 3);
            args2[1].num = v;
            fn_82273CD8(&args2[2], 3);
            args2[2].num = lbl_821954B0[15];
            icon->progress0 = v;
            fn_82672C20(icon->movie, "_root.handIconMngr.setProgress", args2, 3);
            p = &args2[3];
            i = 2;
            do {
                p--;
                fn_82273C88(p);
                i--;
            } while (i >= 0);
        }
    }
done:
    self->a = a;
    self->b = b;
}
