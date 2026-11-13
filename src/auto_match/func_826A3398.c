typedef struct Value_826A3398 {
    unsigned char type;
} Value_826A3398;

typedef struct Obj_826A3398 {
    int f0;
    Value_826A3398 *result;
    char *f8;
} Obj_826A3398;

typedef struct Array_826A3398 {
    char pad0[0x34];
    int **data;
    unsigned int count;
} Array_826A3398;

extern unsigned char fn_82695468(Obj_826A3398 *o, int kind);
extern int fn_826954C0(Obj_826A3398 *o, const char *name, int a, int b);
extern void fn_826959C8(Value_826A3398 *v);
extern void fn_82695FA0(Value_826A3398 *v, int *item);
extern void fn_826A2CB0(Array_826A3398 *a, unsigned int count);

static __forceinline void PopBack_826A3398(Array_826A3398 *a)
{
    if (a->count != 0)
        fn_826A2CB0(a, a->count - 1);
}

void fn_826A3398(Obj_826A3398 *o)
{
    Array_826A3398 *a;
    int *item;

    if (fn_82695468(o, 7) == 0) {
        fn_826954C0(o, "Array", 0, 0);
        return;
    }
    a = o->f8 != 0 ? (Array_826A3398 *)(o->f8 - 0x10) : 0;
    if (a->count != 0) {
        item = a->data[a->count - 1];
        if (item != 0) {
            fn_82695FA0(o->result, item);
        } else {
            Value_826A3398 *v = o->result;
            fn_826959C8(v);
            v->type = 0;
        }
        PopBack_826A3398(a);
    } else {
        Value_826A3398 *v = o->result;
        fn_826959C8(v);
        v->type = 0;
    }
}
