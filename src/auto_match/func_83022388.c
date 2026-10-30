typedef struct O O; typedef struct V {void *pad[2]; void (*f)(O *);} V; struct O {V *v;}; void fn_83022388(char *p) {if((*(O **)(p+4))) (*(O **)(p+4))->v->f((*(O **)(p+4)));}
