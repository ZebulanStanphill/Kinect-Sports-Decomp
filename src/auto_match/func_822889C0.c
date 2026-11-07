typedef struct Obj_822889C0 {
    char pad0[0x44];
    int kind;          /* 0x44 */
    char pad48[4];
    void *a;           /* 0x4c */
    char pad50[4];
    void *b;           /* 0x54 */
    char pad58[0xc];
    void *c;           /* 0x64 */
    char pad68[4];
    int hasC;          /* 0x6c */
} Obj_822889C0;

typedef struct Owner_822889C0 {
    char pad0[0x69c];
    Obj_822889C0 *obj; /* 0x69c */
} Owner_822889C0;

extern void fn_82266D28(unsigned int *out, int v);
extern void fn_82279C58(unsigned int *out, void *v);

unsigned int *fn_822889C0(unsigned int *param_1, Owner_822889C0 *param_2)
{
    Obj_822889C0 *o = param_2->obj;
    void *v;

    if (o->hasC != 0) {
        v = o->c;
    } else {
        void **pp;
        if (o->kind == 1 || o->kind == 0) {
            pp = &o->a;
        } else {
            pp = &o->b;
        }
        v = *pp;
    }
    if (v != 0) {
        fn_82279C58(param_1, v);
    } else {
        param_1[0] = 0;
        param_1[1] = 0;
        fn_82266D28(param_1, 0);
    }
    return param_1;
}
