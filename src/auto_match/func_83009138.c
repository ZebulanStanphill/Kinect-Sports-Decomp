typedef struct Obj_83009138 Obj_83009138;
typedef struct Vt_83009138 { void *slots[77]; int (*get)(Obj_83009138 *,int); } Vt_83009138;
struct Obj_83009138 { Vt_83009138 *vt; };
extern void fn_830049F8(Obj_83009138 *,int,float,int,int,int);
void fn_83009138(Obj_83009138 *self,int unused,int a,float f,int b,int c) {
 fn_830049F8(self,self->vt->get(self,0),f,a,b,c);
}
