typedef struct P { int tag; void *p; } P;
extern void fn_8267C4C8(void *);
extern void fn_82687270(void *);
P *fn_826D6290(P *d,P *s) {
 if(!s->tag && s->p)fn_8267C4C8(s->p);
 if(!d->tag && d->p)fn_82687270(d->p);
 d->tag=s->tag; d->p=s->p; return d;
}
