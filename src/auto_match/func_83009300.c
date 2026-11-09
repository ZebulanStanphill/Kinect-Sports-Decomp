typedef struct Obj_83009300 Obj_83009300;
typedef struct Vt_83009300 { void *slots[77]; int (*get)(Obj_83009300 *,int); } Vt_83009300;
struct Obj_83009300 { Vt_83009300 *vt; };
extern void fn_830048A8(Obj_83009300 *,int,float,int,int,int);
void fn_83009300(Obj_83009300 *self,int unused,int a,float f,int b,int c) {
 fn_830048A8(self,self->vt->get(self,0),f,a,b,c);
}
