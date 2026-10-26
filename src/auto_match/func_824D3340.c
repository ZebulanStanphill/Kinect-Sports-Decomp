typedef struct Obj Obj;
typedef struct { void (*f[10])(Obj *); } VT;
struct Obj { VT *vt; };

void fn_824D3340(char *p)
{
    if (*(Obj **)(p + 0xa50))
        (*(Obj **)(p + 0xa50))->vt->f[9](*(Obj **)(p + 0xa50));
}
