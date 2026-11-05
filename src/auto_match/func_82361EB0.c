typedef struct Shared_82361EB0 { void *p; void *rep; } Shared_82361EB0;
typedef struct Holder_82361EB0 { void *vt; Shared_82361EB0 value; } Holder_82361EB0;
extern void *fn_8265C9E0(unsigned);
extern unsigned char fn_8223AAC0(void *);
extern void fn_822315A0(void *);
extern char lbl_821B297C[];
static __forceinline void init(Shared_82361EB0 *v) {v->p=0;v->rep=0;}
static __forceinline void lock(Shared_82361EB0 *d, Shared_82361EB0 *s) {
 void *r = s->rep; void *p = s->p;
 if (r && fn_8223AAC0(r)) { if(d->rep) fn_822315A0(d->rep); d->rep = r; d->p = p; }
}
Holder_82361EB0 *fn_82361EB0(Holder_82361EB0 *s) {
 Holder_82361EB0 *d = fn_8265C9E0(12);
 if(d) { d->vt=lbl_821B297C; init(&d->value); lock(&d->value,&s->value); return d; }
 return 0;
}
