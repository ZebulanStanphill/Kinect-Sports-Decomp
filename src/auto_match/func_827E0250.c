typedef struct Obj { char pad[0x6c]; unsigned int mask; unsigned int limit; } Obj;
extern unsigned int fn_8256DBA0(void);

unsigned int fn_827E0250(Obj *o)
{
    unsigned int mask = o->mask;
    unsigned int v = fn_8256DBA0() & mask;
    if (o->limit <= v) {
        v = v - (mask >> 1) - 1;
    }
    return v;
}
