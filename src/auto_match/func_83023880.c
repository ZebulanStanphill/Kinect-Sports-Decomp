typedef struct CRITICAL_SECTION { int v[8]; } CRITICAL_SECTION;
void RtlInitializeCriticalSection(CRITICAL_SECTION *cs);
extern char lbl_8217C5EC[];
extern char lbl_8217C5D0[];
typedef struct Obj {
    void *vtbl;
    void *vtbl2;
    CRITICAL_SECTION cs;
    int f28, f2c, f30, f34, f38;
    unsigned short f3c, f3e;
    int arr[2];
    unsigned short f48, f4a;
    unsigned char f4c;
} Obj;

Obj *fn_83023880(Obj *o)
{
    o->vtbl = lbl_8217C5EC;
    o->vtbl2 = lbl_8217C5D0;
    RtlInitializeCriticalSection(&o->cs);
    { int i; o->f28 = 0; o->f38 = 0; o->f4a = 0; o->f2c = 0; o->f30 = 0; o->f34 = 0; o->f4c = 0; o->f3c = 0; o->f3e = 0; o->f48 = 0; for (i = 0; i < 2; i++) o->arr[i] = 0; }
    return o;
}
