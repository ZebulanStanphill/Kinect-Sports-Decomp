typedef struct { char pad[0x2c]; unsigned short value; } Obj;

void fn_827E25E0(Obj *o, int delta)
{
    int v = o->value + delta;
    if (v < 0) {
        o->value = 0;
    } else {
        o->value = v;
    }
}
