typedef struct O O; typedef struct V { void *a,*b,*c,*d; void (*f)(O *); } V; struct O { V *v; };
void fn_826D72C8(char *p) { O *o=*(O **)(p+0x1c); if ((int)o != 0) o->v->f(o); *(char *)(*(char **)(p+0x20)+0x40)=1; }
