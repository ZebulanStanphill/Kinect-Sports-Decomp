typedef struct Obj Obj;
typedef struct { void (*f[4])(Obj *); } VT;
struct Obj { VT *vt; };

void fn_82A43318(char *p)
{
    if (*(Obj **)(p + 0x38))
        (*(Obj **)(p + 0x38))->vt->f[3](*(Obj **)(p + 0x38));
}
