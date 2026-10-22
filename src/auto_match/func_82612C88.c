extern void fn_82552B50(void *p, int n);
extern char lbl_821CACAC[];

typedef struct Ref { unsigned int pad[4]; unsigned int count; } Ref;
typedef struct Obj { void *vt; int pad; Ref **ref; } Obj;

void fn_82612C88(Obj *p)
{
    p->vt = lbl_821CACAC;
    if (*((unsigned char *)p + 0x71)) fn_82552B50((char *)p + 0x74, 1);
    if (p->ref && *p->ref) {
        Ref *r = *p->ref;
        if (r->count) r->count--;
    }
}
