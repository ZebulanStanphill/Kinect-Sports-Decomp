typedef unsigned U;
typedef struct Pair {void **data; U count;} Pair;
typedef struct Virtual {void **vt;} Virtual;
typedef struct Cache {char pad[16]; U count; unsigned pad14; unsigned char disabled;} Cache;
typedef struct Object {void *vt; U refs; char pad8[0x94]; Virtual *source; char pada0[0x10c]; Cache *cache;} Object;
extern void fn_826C6E68(Object *,U);
extern void fn_8267C498(Object *);
void fn_826C90C8(Object *p,U index) {
 U count,i; Pair pair;
 if(p) ++p->refs;
 if(p->cache && !p->cache->disabled) count=p->cache->count;
 else count=((U (*)(Virtual *))p->source->vt[10])(p->source);
 if(index>=count) {fn_8267C498(p); return;}
 {
  fn_826C6E68(p,index);
  ((void (*)(Pair *,Virtual *,U))p->source->vt[11])(&pair,p->source,index);
  i=0;
  if(pair.count) do {Virtual *v=(Virtual *)pair.data[i]; ((void (*)(Virtual *,Object *,int))v->vt[2])(v,p,4); ++i;} while(i<pair.count);
 }
 fn_8267C498(p);
}
