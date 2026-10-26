typedef struct Obj Obj;
typedef struct { void (*f[6])(Obj *); } VT;
struct Obj { VT *vt; };

void fn_82A43340(char *p)
{
    if (*(Obj **)(p + 0x38))
        (*(Obj **)(p + 0x38))->vt->f[5](*(Obj **)(p + 0x38));
}
