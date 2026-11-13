typedef struct Sub_82E23210 { int a; int count; } Sub_82E23210;
typedef struct Obj_82E23210 { void *vt; Sub_82E23210 sub; } Obj_82E23210;
int fn_82E23210(Obj_82E23210 *o) { Sub_82E23210 *s = &o->sub; return ++s->count; }
