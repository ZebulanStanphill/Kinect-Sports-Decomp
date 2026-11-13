typedef struct Msg_82FFF5C8 { int a,b,c,d,e; unsigned char f,g,h; char tail[0xc]; } Msg_82FFF5C8;
typedef struct Obj_82FFF5C8 { void (**vt)(struct Obj_82FFF5C8 *,Msg_82FFF5C8 *); } Obj_82FFF5C8;
void fn_82FFF5C8(Obj_82FFF5C8 *self,int b,int c) {
 Msg_82FFF5C8 m;
 m.f=0; m.h=0; m.e=4; m.a=2; m.d=0; m.g=0; m.b=b; m.c=c;
 self->vt[7](self,&m);
}
