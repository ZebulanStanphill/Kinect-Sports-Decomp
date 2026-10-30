typedef struct O O; typedef struct V {void *pad[3]; void (*f)(O *, int);} V; struct O {V *v;}; void fn_8270ED80(char *p, short x) {if((*(O **)(p+8))) (*(O **)(p+8))->v->f((*(O **)(p+8)), x);}
