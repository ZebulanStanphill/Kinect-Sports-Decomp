typedef struct Obj_828B29A0 Obj_828B29A0;

typedef struct {
    void *pad[17];
    int (*f44)(Obj_828B29A0 *self);
    __int64 (*f48)(Obj_828B29A0 *self);
} Vtbl_828B29A0;

struct Obj_828B29A0 {
    Vtbl_828B29A0 *vt;
};

extern unsigned int fn_828B2360(void);
extern unsigned char fn_828B2DE0(void);
extern unsigned char fn_8288B760(Obj_828B29A0 *p);
extern int fn_828B2278(int a, int v);
extern int fn_828B2448(int a, __int64 *v);

int fn_828B29A0(int a, Obj_828B29A0 *p)
{
    __int64 t;

    if (fn_828B2360() == 0 || fn_828B2DE0() == 0) {
        return 0;
    }
    if (fn_8288B760(p)) {
        return fn_828B2278(a, p->vt->f44(p));
    }
    t = p->vt->f48(p);
    return fn_828B2448(a, &t);
}
