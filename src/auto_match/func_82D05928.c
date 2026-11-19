typedef struct Obj Obj;
struct Obj { void (**vt)(Obj *); char pad[0x1c]; void *h; };

extern void *socket(int a, int b, int c);

int fn_82D05928(Obj *p)
{
    void *h;
    p->vt[4](p);
    h = socket(2, 1, 0);
    p->h = h;
    return h == (void *)-1;
}
