typedef struct { int x; struct { unsigned char bytes[24]; } data; } Sub; typedef struct { int a,b,c; Sub s; } O;
extern void fn_82811400(void *, int); extern void *memcpy(void *, const void *, unsigned);
O *fn_827DC858(O *p, Sub *q) { Sub *s=&p->s; fn_82811400(&s->data, 16); s->x=q->x; s->data=q->data; p->a=0; p->b=0; p->c=0; return p; }
