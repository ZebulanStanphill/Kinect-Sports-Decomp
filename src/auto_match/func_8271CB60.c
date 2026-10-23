extern void fn_826C09B0(void *p);
extern void fn_826829A0(void *p, int a, int b);
extern char lbl_82012A64[];
extern char lbl_8200FDC8[];
extern double lbl_8200E890;

typedef struct {
    void *vtbl;
    int pad04[3];
    void *vtbl2;
    int pad14[7];
    double d30;
    double d38;
} Obj;

Obj *fn_8271CB60(Obj *p, int a, int b)
{
    double d;
    fn_826C09B0(p);
    p->vtbl = lbl_82012A64;
    p->vtbl2 = lbl_8200FDC8;
    fn_826829A0(&p->vtbl2, a, b);
    d = lbl_8200E890;
    p->d30 = d;
    p->d38 = d;
    return p;
}
