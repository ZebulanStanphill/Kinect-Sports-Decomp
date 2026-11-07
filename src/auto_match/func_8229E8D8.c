typedef struct Elem_8229E8D8 {
    int key;
    int pad[0x103];
    int f410;
} Elem_8229E8D8;

typedef struct Vec_8229E8D8 {
    Elem_8229E8D8 **begin;
    Elem_8229E8D8 **end;
} Vec_8229E8D8;

typedef struct Ptr_8229E8D8 {
    int p;
    void *ctrl;
} Ptr_8229E8D8;

extern Ptr_8229E8D8 *fn_82279C58(Ptr_8229E8D8 *out, int key);
extern void fn_822315A0(void *ctrl);
extern void fn_8266F628(int p, int flag);

void fn_8229E8D8(Vec_8229E8D8 *v)
{
    unsigned int i;

    for (i = 0; i < (unsigned int)(v->end - v->begin); i++) {
        Elem_8229E8D8 *e = v->begin[i];
        int last = (i == (unsigned int)(v->end - v->begin) - 1);
        Ptr_8229E8D8 a;
        unsigned char valid;

        valid = fn_82279C58(&a, e->key)->p != 0;
        if (a.ctrl != 0) {
            fn_822315A0(a.ctrl);
        }
        if (valid) {
            Ptr_8229E8D8 b;
            int flag;

            flag = (!last || e->f410 != 0);
            fn_8266F628(fn_82279C58(&b, e->key)->p, flag);
            if (b.ctrl != 0) {
                fn_822315A0(b.ctrl);
            }
        }
    }
}
