typedef struct Value_822A3918 {
    int a;
    int b;
    unsigned char flag;
    char pad[7];
} Value_822A3918;

typedef struct Res_822A3918 {
    int movie;
    unsigned int ref;
} Res_822A3918;

typedef struct View_822A3918 {
    int a;
    int b;
} View_822A3918;

typedef struct Obj_822A3918 {
    int pad0;
    View_822A3918 view;
} Obj_822A3918;

extern int fn_822315A0(unsigned int ref);
extern void fn_82273C88(Value_822A3918 *v);
extern void fn_82273CD8(Value_822A3918 *v, int type);
extern int fn_82517978(Res_822A3918 *res, int a, int b, int c);
extern int fn_82672C20(int movie, const char *method, void *args, int count);
extern void fn_82672F30(int movie, const char *name, unsigned int type, void *values, unsigned int count, unsigned int index);

static __forceinline void Value_setBool(Value_822A3918 *v, unsigned char flag)
{
    fn_82273CD8(v, 2);
    v->flag = flag;
}

static __forceinline void GetMovie(Res_822A3918 *res, View_822A3918 *view)
{
    res->movie = 0;
    res->ref = 0;
    fn_82517978(res, view->a, view->b, 0);
}

void fn_822A3918(Obj_822A3918 *self, int *pins)
{
    Res_822A3918 res;
    Value_822A3918 values[10];
    Value_822A3918 *p;
    int i;

    for (i = 0; i < 10; i++) {
        values[i].a = 0;
        values[i].b = 0;
    }
    for (i = 0; i < 10; i++) {
        Value_setBool(&values[i], pins[i] == 1);
    }
    GetMovie(&res, &self->view);
    fn_82672F30(res.movie, "_root.mc_pindicator.pinsStatus", 0, values, 10, 1);
    if (res.ref != 0) {
        fn_822315A0(res.ref);
    }
    GetMovie(&res, &self->view);
    fn_82672C20(res.movie, "_root.mc_pindicator.update", 0, 0);
    if (res.ref != 0) {
        fn_822315A0(res.ref);
    }
    p = values + 10;
    i = 9;
    do {
        p--;
        fn_82273C88(p);
        i--;
    } while (i >= 0);
}
