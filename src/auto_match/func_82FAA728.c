extern char lbl_8216CC64[], lbl_8217D040[];
extern void fn_82FA9208(void *);
typedef struct { void *v; int pad[6]; void *p; } T;

void fn_82FAA728(T *o) { o->v=lbl_8216CC64; {void **inline_cleanup_0=(&o->p); if (*inline_cleanup_0) { fn_82FA9208(*inline_cleanup_0); *inline_cleanup_0=0; } } o->v=lbl_8217D040; }
