typedef struct {
    char **p;
    int idx;
}
Iter_8273E2B8;
typedef struct {
    int a,b;
}
Pair_8273E2B8;
typedef struct {
    Pair_8273E2B8 zero;
    Iter_8273E2B8 it,end,tmp;
}
Loc_8273E2B8;
typedef struct Value_8273E2B8 Value_8273E2B8;
typedef struct {
    void (*f)(Value_8273E2B8 *,int);
}
Vt_8273E2B8;
struct Value_8273E2B8 {
    Vt_8273E2B8 *vt;
    int pad;
    unsigned count;
}
;
extern void fn_826BE6C0(void *);
extern Iter_8273E2B8 *fn_82686EE8(Iter_8273E2B8 *,void *);
extern unsigned char fn_826A8E58(Iter_8273E2B8 *,Iter_8273E2B8 *);
extern void fn_8273CF58(Iter_8273E2B8 *);
void fn_8273E2B8(char *p) {
    Loc_8273E2B8 l;
    Iter_8273E2B8 *r;
    fn_826BE6C0(p);
    r=fn_82686EE8(&l.tmp,p+0x34);
    l.zero.a=0;
    l.zero.b=0;
    l.end=*(Iter_8273E2B8 *)&l.zero;
    l.it=*r;
    if(!fn_826A8E58(&l.it,&l.end)) {
        l.zero.a=0;
        l.zero.b=0;
        l.end=*(Iter_8273E2B8 *)&l.zero;
        do{
            Value_8273E2B8 *v=*(Value_8273E2B8 **)(*l.it.p+l.it.idx*16+20);
            v->count++;
            if(v->count & 0x70000000) {
                v->count &= ~0x70000000;
                v->vt->f(v,2);
            }
            fn_8273CF58(&l.it);
        }
        while(!fn_826A8E58(&l.it,&l.end));
    }
}
