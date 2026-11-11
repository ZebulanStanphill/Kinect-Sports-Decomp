typedef struct { char **p; unsigned idx; } Iter_826C0BA8;
typedef struct { int a,b; } Pair_826C0BA8;
typedef struct { Iter_826C0BA8 it; Pair_826C0BA8 pair; Iter_826C0BA8 tmp; } Loc_826C0BA8;
extern Iter_826C0BA8 *fn_826B0A78(Iter_826C0BA8 *,void *,void *,unsigned char);
extern unsigned char fn_826A8E58(Iter_826C0BA8 *,Pair_826C0BA8 *);
extern void fn_826A8D88(void *);
extern void fn_826BE998(void *,void *);
int fn_826C0BA8(char *p, char *q, void **r) {
 Loc_826C0BA8 L;
 void *map=p+8;
 Iter_826C0BA8 *it=fn_826B0A78(&L.tmp,map,r,(unsigned char)q[4]>6);
 L.pair.a=0; L.pair.b=0;
 L.it=*it;
 if (fn_826A8E58(&L.it,&L.pair)) return 0;
 if ((*L.it.p+L.it.idx*32)[0x19]&2) return 0;
 if (*r==*(void **)(*(char **)q+0x194)) fn_826A8D88(q);
 fn_826BE998(map,r);
 return 1;
}
