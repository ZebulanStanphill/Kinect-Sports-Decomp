typedef struct { char pad[0x44]; void *a,*b,*c,*d,*e,*f; int g; } Obj;
unsigned char fn_825B2010(Obj *p) { unsigned char b=p->a && p->b && p->c && p->d && p->e && p->f; if(p->g && b) return 1; return 0; }
