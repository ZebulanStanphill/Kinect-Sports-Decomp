typedef struct { int *vt; int pad[22]; int count; } Ref_830145F8;
typedef struct { unsigned first,last,end; } Array_830145F8;
typedef struct { void *vt; int p[3]; Array_830145F8 array; int q[8]; Ref_830145F8 *ref; } Object_830145F8;
extern void *lbl_8217C364[]; extern void *lbl_831BC768;
extern void fn_82FA5190(void *,void *);extern void fn_82FFFB38(void *);
static __forceinline void releaseArray(Array_830145F8 *a) { if(a->first) { a->last=a->first; fn_82FA5190(lbl_831BC768,(void *)a->first);a->first=0;a->last=0;a->end=0; } }
static __forceinline void releaseRef(Ref_830145F8 *r) { if(r) { if(--r->count<=0) { void *heap=lbl_831BC768; (*(void (**)(void *,int))r->vt)(r,0);fn_82FA5190(heap,r); } } }
void fn_830145F8(Object_830145F8 *self) { self->vt=lbl_8217C364;releaseArray(&self->array);releaseRef(self->ref);fn_82FFFB38(self); }
