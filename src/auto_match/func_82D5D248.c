extern float lbl_82134508;

typedef struct {
    int unk0;
    float cur;
    char pad8[0x24];
    float target;
    int count;
} Obj;

/* Inlined setter: one lfs feeds both stores. */
static void Obj_setValue(Obj *o, float v)
{
    o->target = v;
    o->cur = v;
}

void fn_82D5D248(Obj *o)
{
    o->count = 0;
    Obj_setValue(o, lbl_82134508);
}
