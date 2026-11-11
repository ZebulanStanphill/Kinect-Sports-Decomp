typedef struct {unsigned key;float value;} Entry_82490F58;
typedef struct {void *vt;Entry_82490F58 *begin,*end;} Obj_82490F58;
static __forceinline Entry_82490F58 *find(Entry_82490F58 *p,Entry_82490F58 *end,unsigned key) {
 while(p!=end && p->key!=key) ++p;
 return p;
}
float fn_82490F58(Obj_82490F58 *o,unsigned a,unsigned b) {
 Entry_82490F58 *p=find(o->begin,o->end,a);
 Entry_82490F58 *q=find(o->begin,o->end,b);
 float sum=0.0f;
 while(p!=q) {sum=p->value+sum;p++;}
 return sum;
}
