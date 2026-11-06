extern char lbl_82006E64[];
extern void fn_826C2528(void *, int);
extern void fn_826824B0(void *);
typedef struct Pair_826C26B0 {void *a,*b; unsigned char flags; char pad[3];} Pair_826C26B0;
static __forceinline void tidy(Pair_826C26B0 *p) {
 if (!(p->flags&2) && p->a) fn_826824B0(p->a); p->a=0;
 if (!(p->flags&1) && p->b) fn_826824B0(p->b); p->b=0;
}
void fn_826C26B0(unsigned *p) { *p=(unsigned)lbl_82006E64;
 if(p[7]) fn_826C2528((void*)p[7],1);
 tidy((Pair_826C26B0*)(p+4));tidy((Pair_826C26B0*)(p+1));}
