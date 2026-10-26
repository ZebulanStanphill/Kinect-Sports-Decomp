typedef struct { int unk0; int type; } Desc;
typedef struct { Desc *desc; } Obj;

unsigned char fn_8248F510(Obj *o)
{
    return o->desc->type == 0x5a ? 3 : 4;
}
