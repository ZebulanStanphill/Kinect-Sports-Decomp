typedef struct Obj_82624590 {
    char pad[0xc];
    unsigned short count;
} Obj_82624590;

typedef struct Arg_82624590 {
    unsigned int value;
    int kind;
} Arg_82624590;

typedef struct Owner_82624590 {
    char pad[0xb8];
    unsigned int objBase;
} Owner_82624590;

typedef struct Self_82624590 {
    void *vtable;
    char pad04[0x38];
    Owner_82624590 *owner;   /* 0x3c */
    char pad40[0x10];
    unsigned int handle;     /* 0x50 */
} Self_82624590;

extern void *fn_8251E4D0(Obj_82624590 *obj);
extern void fn_82A1DD38(void *a, Arg_82624590 *arg, unsigned short count);
extern void fn_825D50C0(Self_82624590 *self);
extern unsigned int lbl_821CAD94;

void fn_82624590(Self_82624590 *param_1)
{
    param_1->vtable = &lbl_821CAD94;
    if (param_1->handle != 0) {
        Arg_82624590 a;
        Obj_82624590 *o;
        void *r;
        a.value = param_1->handle;
        a.kind = 3;
        o = (Obj_82624590 *)(param_1->owner->objBase + 8);
        r = fn_8251E4D0(o);
        fn_82A1DD38(r, &a, o->count);
    }
    fn_825D50C0(param_1);
}
