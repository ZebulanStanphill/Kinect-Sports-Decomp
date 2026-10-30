typedef struct O O; typedef struct V {void *pad[2]; void (*f)(O *);} V; struct O {V *v;}; void fn_83027100(char *p) {if((*(O **)(p+72))) (*(O **)(p+72))->v->f((*(O **)(p+72)));}
