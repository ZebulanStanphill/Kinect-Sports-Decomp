typedef struct Shared_8242EDD0 { void *p; void *rep; } Shared_8242EDD0;
typedef struct Holder_8242EDD0 { void *vt; Shared_8242EDD0 value; } Holder_8242EDD0;
extern void *fn_8265C9E0(unsigned);
extern unsigned char fn_8223AAC0(void *);
extern void fn_822315A0(void *);
extern char lbl_821B9030[];
static __forceinline void init(Shared_8242EDD0 *v) {v->p=0;v->rep=0;}
static __forceinline void lock(Shared_8242EDD0 *d, Shared_8242EDD0 *s) {
 void *r = s->rep; void *p = s->p;
 if (r && fn_8223AAC0(r)) { if(d->rep) fn_822315A0(d->rep); d->rep = r; d->p = p; }
}
Holder_8242EDD0 *fn_8242EDD0(Holder_8242EDD0 *s) {
 Holder_8242EDD0 *d = fn_8265C9E0(12);
 if(d) { d->vt=lbl_821B9030; init(&d->value); lock(&d->value,&s->value); return d; }
 return 0;
}
