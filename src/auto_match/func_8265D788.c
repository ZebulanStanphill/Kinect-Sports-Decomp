typedef struct Obj_8265D788 {
    unsigned char pad[0x1c];
    unsigned short value;
} Obj_8265D788;

extern Obj_8265D788 *fn_8265D7D0(Obj_8265D788 *o, void *a);

Obj_8265D788 *fn_8265D788(Obj_8265D788 *o, void *a, unsigned short value)
{
    fn_8265D7D0(o, a);
    o->value = value;
    return o;
}
