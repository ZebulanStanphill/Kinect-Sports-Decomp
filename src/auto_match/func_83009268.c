typedef struct Obj_83009268 Obj_83009268;
typedef struct Vt_83009268 { void *slots[77]; int (*get)(Obj_83009268 *,int); } Vt_83009268;
struct Obj_83009268 { Vt_83009268 *vt; };
extern void fn_83004750(Obj_83009268 *,int,float,int,int,int);
void fn_83009268(Obj_83009268 *self,int unused,int a,float f,int b,int c) {
 fn_83004750(self,self->vt->get(self,0),f,a,b,c);
}
