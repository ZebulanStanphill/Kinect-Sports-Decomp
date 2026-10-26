extern float lbl_82134508;

typedef struct {
    int unk0;
    float cur;
    unsigned char flag;
    char pad9[0x23];
    float target;
} Obj;

/* Inlined setter: one lfs feeds both stores. */
static void Obj_setValue(Obj *o, float v)
{
    o->target = v;
    o->cur = v;
}

void fn_82D5D268(Obj *o)
{
    o->flag = 0;
    Obj_setValue(o, lbl_82134508);
}
