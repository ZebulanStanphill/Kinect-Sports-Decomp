typedef struct Obj Obj;
typedef struct ObjVtbl {
    void (*dtor)(Obj *, int);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
};
typedef struct List {
    int **begin;
    int **end;
    int pad[2];
    int locked;
} List;
typedef struct SharedPtr {
    int *ptr;
    void *rep;
} SharedPtr;

extern List *fn_8229E7D0(void);
extern void fn_8229E8D8(List *);
extern SharedPtr *fn_82279C58(SharedPtr *, Obj *);
extern void fn_82672660(int *, Obj **);
extern void fn_822315A0(void *);
extern void fn_8265CA20(Obj **);
extern void *memmove(void *, const void *, unsigned int);

static int **move_ptrs(int **first, int **last, int **dest)
{
    unsigned int count = last - first;
    memmove(dest, first, count * sizeof(*first));
    return dest + count;
}

Obj **fn_8229E260(Obj **param_1)
{
    List *list;
    int **p;
    SharedPtr sp;

    list = fn_8229E7D0();
    if (list->locked == 0) {
        for (p = list->begin; p != list->end; p++) {
            if (*p == (int *)param_1) {
                move_ptrs(p + 1, list->end, p);
                list->end--;
                break;
            }
        }
        fn_8229E8D8(list);
    }
    if (*param_1 != 0) {
        fn_82672660(fn_82279C58(&sp, *param_1)->ptr, param_1);
        if (sp.rep != 0) {
            fn_822315A0(sp.rep);
        }
        if (*param_1 != 0) {
            (*param_1)->vt->dtor(*param_1, 1);
        }
        *param_1 = 0;
    }
    fn_8265CA20(param_1);
    return param_1;
}
