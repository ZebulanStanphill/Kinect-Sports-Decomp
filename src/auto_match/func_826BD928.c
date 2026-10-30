typedef struct S S; typedef struct V{void *a;void *b;int (*f)(S*);}V; struct S{V*v;}; void *fn_826BD928(S*p){return p->v->f(p)==2 ? (char*)p-0x68 : 0;}
