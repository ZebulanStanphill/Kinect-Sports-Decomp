typedef struct Inner_82368750 {
    char pad[0x2c];
    int id;
} Inner_82368750;

typedef struct Obj_82368750 {
    char pad[0x10];
    Inner_82368750 *inner;
} Obj_82368750;

typedef struct Elem_82368750 {
    Obj_82368750 *obj;
    int extra;
} Elem_82368750;

typedef struct Owner_82368750 {
    char pad[0x30];
    Elem_82368750 *begin;
    Elem_82368750 *end;
} Owner_82368750;

extern void fn_82356F98(int *out, Elem_82368750 *it);
extern void fn_82522588(int *out, Elem_82368750 *it);

int *fn_82368750(int *param_1, Owner_82368750 *param_2, int param_3)
{
    Elem_82368750 *it;

    for (it = param_2->begin; it != param_2->end; it++) {
        if (it->obj->inner->id == param_3) {
            fn_82522588(param_1, it);
            return param_1;
        }
    }
    fn_82356F98(param_1, it);
    return param_1;
}
