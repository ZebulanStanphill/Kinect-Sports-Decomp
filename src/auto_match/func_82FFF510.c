typedef struct Msg_82FFF510 { int a,b,c,d,e; unsigned char f,g,h; char tail[0xc]; } Msg_82FFF510;
typedef struct Obj_82FFF510 { void (**vt)(struct Obj_82FFF510 *,Msg_82FFF510 *); } Obj_82FFF510;
void fn_82FFF510(Obj_82FFF510 *self,int b,int c) {
 Msg_82FFF510 m;
 m.f=0; m.h=0; m.e=4; m.a=0; m.d=0; m.g=0; m.b=b; m.c=c;
 self->vt[7](self,&m);
}
