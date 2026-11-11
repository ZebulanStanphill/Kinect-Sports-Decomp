extern void fn_82F90710(void *);
typedef struct { int pad; void *obj; int count; } Obj_82F906D0;
void fn_82F906D0(Obj_82F906D0 *p)
{ fn_82F90710(p->obj); p->count=p->count + 1; }
