typedef struct { unsigned short *first,*last; } Vec_82FB9530;
extern void fn_82FB93C8(unsigned short **,Vec_82FB9530 *,unsigned short **);
static __forceinline unsigned short *find_82FB9530(unsigned short *first,unsigned short *last,unsigned short value)
{
    for(;first!=last;++first) if(*first==value) break;
    return first;
}
int fn_82FB9530(Vec_82FB9530 *v,unsigned short value)
{
    unsigned short *it,*result;
    it=v->first;
    if(it!=v->last) {
        it=find_82FB9530(it,v->last,value);
        if(it!=v->last) { fn_82FB93C8(&result,v,&it); return 1; }
    }
    return 2;
}
