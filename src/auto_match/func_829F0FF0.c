typedef struct A {
    char pad[0x50];
} A;

typedef struct B {
    int active;
    char pad[0x1c - 4];
} B;

typedef struct Obj {
    char pad00[0x90];
    int current;
    char pad94[0xc0 - 0x94];
    A a[4];
    B b[4];
    unsigned int count;
    unsigned int mode;
} Obj;

int fn_829F00A0(Obj *obj, int arg, A *a, B *b, int arg2);

int fn_829F0FF0(Obj *obj, int arg, int arg2)
{
    unsigned int i;

    if (obj->current != -1) {
        if (fn_829F00A0(obj, arg, &obj->a[obj->current], &obj->b[obj->current], arg2) != 0) {
            return 0;
        }
        if (obj->mode == 1) {
            return 0;
        }
        obj->current = -1;
    }
    for (i = 0; i < obj->count; i++) {
        if (fn_829F00A0(obj, arg, &obj->a[i], &obj->b[i], arg2) != 0
            || (obj->mode == 1 && obj->b[i].active != 0)) {
            obj->current = i;
        }
    }
    return 0;
}
