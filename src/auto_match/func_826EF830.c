typedef struct Pair_826EF830 {unsigned a,b;} Pair_826EF830;
typedef struct Obj_826EF830 Obj_826EF830;
typedef struct Vt_826EF830 {void *f0,*f4;Pair_826EF830 *(*f8)(Pair_826EF830 *,Obj_826EF830 *,void *,unsigned);} Vt_826EF830;
struct Obj_826EF830 {Vt_826EF830 *vt;};
typedef struct Context_826EF830 {char pad[0x18];Obj_826EF830 *ptr;} Context_826EF830;
Pair_826EF830 *fn_826EF830(Pair_826EF830 *out,Context_826EF830 *o,unsigned arg) {
 if(o->ptr){o->ptr->vt->f8(out,o->ptr,(char *)o+12,arg);return out;}
 out->a=0;out->b=0;return out;
}
