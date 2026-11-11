extern void fn_82F907A0(void *);
typedef struct { int pad; void *obj; int count; } Obj_82F90760;
void fn_82F90760(Obj_82F90760 *p)
{ fn_82F907A0(p->obj); p->count=p->count - 1; }
