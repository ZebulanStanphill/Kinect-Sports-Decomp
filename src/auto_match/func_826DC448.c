typedef struct {
    char **p;
    int idx;
}
Iter_826DC448;
typedef struct {
    Iter_826DC448 it,zero,end,tmp;
}
Loc_826DC448;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern Iter_826DC448 *fn_826D98A8(Iter_826DC448 *,void *,void *);
extern unsigned char fn_826A8E58(Iter_826DC448 *,Iter_826DC448 *);
extern void fn_826D6290(void *,void *);
int fn_826DC448(char *p,void *out,void *key) {
    Loc_826DC448 l;
    char *lock=0;
    Iter_826DC448 *r;
    if(*(int *)(p+0x74)<2) {
        lock=p;
        RtlEnterCriticalSection(p+0xac);
    }
    r=fn_826D98A8(&l.tmp,p+0xc8,key);
    l.zero.p=0;
    l.zero.idx=0;
    l.end=l.zero;
    l.it=*r;
    if(!fn_826A8E58(&l.it,&l.end)) {
        fn_826D6290(out,*l.it.p+(l.it.idx+1)*16);
        if(lock)RtlLeaveCriticalSection(lock+0xac);
        return 1;
    }
    if(lock)RtlLeaveCriticalSection(lock+0xac);
    return 0;
}
