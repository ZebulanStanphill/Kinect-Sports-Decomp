typedef struct {
    int count;
    void *data;
    int inline_buf[1];
} Obj;

typedef struct {
    int key;
    void *ptr;
} Arg;

extern void fn_822315A0(void *p);
extern Obj *fn_827D5070(int key);

void fn_8255FC70(Arg *param_1)
{
    Obj *o;

    o = fn_827D5070(param_1->key);
    if (o->data == 0 && o->count != 0) {
        o->data = o->inline_buf;
    }
    if (param_1->ptr != 0) {
        fn_822315A0(param_1->ptr);
    }
}
