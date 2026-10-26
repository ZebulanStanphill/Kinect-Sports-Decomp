typedef struct Obj Obj;
typedef struct { void (*f[44])(Obj *); } VT;
struct Obj { VT *vt; };

void fn_826F6090(char *p)
{
    if (*(Obj **)(p + 0x68))
        (*(Obj **)(p + 0x68))->vt->f[43](*(Obj **)(p + 0x68));
}
