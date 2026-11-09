typedef struct Value_824A0520 {
    int type;
    int data;
    double num;
} Value_824A0520;

typedef struct Ref_824A0520 {
    int obj;
    void *ref;
} Ref_824A0520;

typedef struct Obj_824A0520 {
    char pad0[0x4c];
    int f4c;
    int movie;
    char pad54[0x30];
    float f84;
} Obj_824A0520;

extern void *fn_8266EC60(void);
extern void *fn_8266ECF0(Ref_824A0520 *out, void *a, void *b, int c, int d, int e, int f, int g);
extern void fn_823F2E20(int *dst, void *src);
extern void fn_822315A0(void *p);
extern void fn_82273CD8(Value_824A0520 *v, int type);
extern void fn_82273C88(Value_824A0520 *v);
extern void fn_82672C20(int movie, const char *name, Value_824A0520 *args, int count);
extern void fn_824A0720(Obj_824A0520 *self, int a, int b);
extern void fn_824A0808(Obj_824A0520 *self);

extern double lbl_821954B0[];

void fn_824A0520(Obj_824A0520 *self, int param_2, int param_3)
{
    Ref_824A0520 tmp;
    Value_824A0520 v;
    Value_824A0520 a1[2];
    Value_824A0520 a2[2];
    Value_824A0520 *e;
    double t;
    int i;

    if (self->movie == 0) {
        fn_823F2E20(&self->movie,
                    fn_8266ECF0(&tmp, fn_8266EC60(), &self->f4c, 4, 0, -1, 0, 0x18280143));
        if (tmp.ref != 0) {
            fn_822315A0(tmp.ref);
        }
        for (i = 0; i < 2; i++) {
            a1[i].type = 0;
            a1[i].data = 0;
        }
        fn_82273CD8(&a1[0], 3);
        t = lbl_821954B0[0xcc];
        a1[0].num = t;
        fn_82273CD8(&a1[1], 3);
        a1[1].num = t;
        fn_82672C20(self->movie, "setTimings", a1, 2);
        e = &a1[2];
        i = 1;
        do {
            e--;
            fn_82273C88(e);
            i--;
        } while (i >= 0);
        self->f84 = 0.0f;
        fn_824A0808(self);
    }
    if (param_3 == 0) {
        v.type = 0;
        v.data = 0;
        fn_82273CD8(&v, 3);
        v.num = (double)param_2;
        fn_82672C20(self->movie, "HideMoveIcons", &v, 1);
        fn_824A0720(self, param_2, 0);
        fn_82273C88(&v);
    } else {
        for (i = 0; i < 2; i++) {
            a2[i].type = 0;
            a2[i].data = 0;
        }
        fn_82273CD8(&a2[0], 3);
        a2[0].num = (double)param_2;
        fn_82273CD8(&a2[1], 3);
        a2[1].num = (double)param_3;
        fn_82672C20(self->movie, "Show", a2, 2);
        e = &a2[2];
        i = 1;
        do {
            e--;
            fn_82273C88(e);
            i--;
        } while (i >= 0);
    }
}
