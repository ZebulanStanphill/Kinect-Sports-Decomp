typedef struct Obj Obj;
typedef struct { void (*f[2])(Obj *); } VT;
struct Obj { VT *vt; };

void fn_82A432F0(char *p)
{
    if (*(Obj **)(p + 0x38))
        (*(Obj **)(p + 0x38))->vt->f[1](*(Obj **)(p + 0x38));
}
