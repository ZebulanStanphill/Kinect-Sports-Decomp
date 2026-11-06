typedef struct Obj_82292518 Obj_82292518;
struct Obj_82292518 { void (**vt)(); };
typedef struct { Obj_82292518 **begin,**end; unsigned extra[2]; } Vec_82292518;
typedef struct { char pad[0x24]; Vec_82292518 a,b; } Owner_82292518;
extern void *memmove(void *,const void *,unsigned);
static __forceinline void erase_82292518(Vec_82292518 *v,Obj_82292518 **first,Obj_82292518 **last) {
 unsigned count=v->end-last;
 memmove(first,last,count*sizeof(*first));
 v->end=first+count;
}
unsigned fn_82292518(Owner_82292518 *self) {
 Obj_82292518 **it;
 Vec_82292518 *a=&self->a;
 Vec_82292518 *b;
 for(it=a->begin;it!=self->a.end;it++) (*it)->vt[0](*it);
 b=&self->b;
 for(it=b->begin;it!=self->b.end;it++) (*it)->vt[0](*it);
 for(it=a->begin;it!=self->a.end;it++) { if(*it) (*it)->vt[3](*it,1); *it=0; }
 { Obj_82292518 **begin=a->begin; if(begin!=a->end) erase_82292518(a,begin,a->end); }
 for(it=b->begin;it!=self->b.end;it++) { if(*it) (*it)->vt[3](*it,1); *it=0; }
 { Obj_82292518 **begin=b->begin; if(begin!=b->end) erase_82292518(b,begin,b->end); }
 return 0;
}
