extern unsigned int lbl_82005BB4;
extern unsigned int lbl_82005BC0;
extern unsigned int lbl_82005BCC;


typedef struct { int pad; int count; } Rep_82689100;
typedef struct { int count; unsigned *vt; } Sub_82689100;
typedef struct { unsigned *vt; Sub_82689100 sub; Rep_82689100 *rep; int v[4]; } Obj_82689100;
void fn_82689100(Obj_82689100 *self, Rep_82689100 *rep, int *src){ Sub_82689100 *s=&self->sub; int a,b,c,d; self->sub.count = 1; s->vt = &lbl_82005BB4; self->vt = &lbl_82005BCC; self->sub.vt = &lbl_82005BC0; if (rep != 0) rep->count++; self->rep = rep; d=src[3];c=src[2];b=src[1];a=src[0]; self->v[0]=a;self->v[1]=b;self->v[2]=c;self->v[3]=d; }