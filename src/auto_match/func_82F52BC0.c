typedef struct Obj_82F52BC0 Obj_82F52BC0;
typedef struct Vt_82F52BC0 { void *slots[3]; void (*f)(Obj_82F52BC0 *); } Vt_82F52BC0;
struct Obj_82F52BC0 { Vt_82F52BC0 *vt; };
typedef struct Owner_82F52BC0 { int a,b; Obj_82F52BC0 *obj; } Owner_82F52BC0;
typedef struct Output_82F52BC0 { int a,b,count; } Output_82F52BC0;
Output_82F52BC0 *fn_82F52BC0(Owner_82F52BC0 *self,Output_82F52BC0 *out) {
 if (self->obj!=0) {
 self->obj->vt->f(self->obj);
 ++out->count;
 return out;
 }
 return 0;
}
