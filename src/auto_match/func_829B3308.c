typedef struct Node_829B3308 Node_829B3308;
typedef struct Vt_829B3308 {void *f0;Node_829B3308 *(*clone)(Node_829B3308 *);} Vt_829B3308;
struct Node_829B3308 {Vt_829B3308 *vt;};
typedef struct Block_829B3308 {unsigned __int64 v[4];} Block_829B3308;
typedef struct Obj_829B3308 {
 char pad[0x10];Block_829B3308 block;int f30;
 int a[2],b[2],c[2];int f4c,f50;
 Node_829B3308 *kids[2],*single,*more[4];int f70,f74;
} Obj_829B3308;
extern void *fn_82930318(unsigned);
extern Obj_829B3308 *fn_829B3170(void *);
Obj_829B3308 *fn_829B3308(Obj_829B3308 *o) {
 void *mem=fn_82930318(0x78);
 Obj_829B3308 *n;unsigned i;
 n=mem?fn_829B3170(mem):0;
 if(!n)return 0;
 n->block=o->block;n->f30=o->f30;
 for(i=0;i<2;i++){n->a[i]=o->a[i];n->b[i]=o->b[i];n->c[i]=o->c[i];}
 n->f4c=o->f4c;n->f74=o->f74;
 for(i=0;i<2;i++)if(o->kids[i])if(!(n->kids[i]=o->kids[i]->vt->clone(o->kids[i])))return 0;
 if(o->single)if(!(n->single=o->single->vt->clone(o->single)))return 0;
 for(i=0;i<4;i++)if(o->more[i])if(!(n->more[i]=o->more[i]->vt->clone(o->more[i])))return 0;
 n->f50=o->f50;return n;
}
