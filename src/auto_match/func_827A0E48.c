typedef struct { char pad0[0x28]; unsigned int count; } Obj_827A0E48;
extern void fn_827A0BD0(Obj_827A0E48 *o);
extern int fn_8279C2A0(Obj_827A0E48 *o, unsigned int index, float value);

int fn_827A0E48(Obj_827A0E48 *o, unsigned int index, float value)
{
    if (index >= o->count) {
        return -1;
    }
    fn_827A0BD0(o);
    return fn_8279C2A0(o, index, value);
}
