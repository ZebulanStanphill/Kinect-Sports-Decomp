extern void fn_82773A20(void*);extern char lbl_820E975C[];
typedef struct Str_82722690{char *ptr;unsigned size;}Str_82722690;
typedef struct Obj_82722690 {void(**vt)();unsigned pad[2];Str_82722690 str;}Obj_82722690;
static __forceinline char *text(Str_82722690*s){return s->ptr?s->ptr:lbl_820E975C;}
void fn_82722690(Obj_82722690*p){char*s;unsigned n;fn_82773A20(&p->str);n=p->str.size;s=text(&p->str);p->vt[1](p,s,n);}