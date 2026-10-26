typedef struct Obj Obj;
typedef struct { void (*f[73])(Obj *); } VT;
struct Obj { VT *vt; };

void fn_826F6028(char *p)
{
    if (*(Obj **)(p + 0x68))
        (*(Obj **)(p + 0x68))->vt->f[72](*(Obj **)(p + 0x68));
}
