typedef struct Obj_830091D0 Obj_830091D0;
typedef struct Vt_830091D0 { void *slots[77]; int (*get)(Obj_830091D0 *,int); } Vt_830091D0;
struct Obj_830091D0 { Vt_830091D0 *vt; };
extern void fn_830045F8(Obj_830091D0 *,int,float,int,int,int);
void fn_830091D0(Obj_830091D0 *self,int unused,int a,float f,int b,int c) {
 fn_830045F8(self,self->vt->get(self,0),f,a,b,c);
}
