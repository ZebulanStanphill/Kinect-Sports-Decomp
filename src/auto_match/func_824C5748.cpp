extern "C" {void fn_822315A0(unsigned); unsigned char fn_8223AAC0(unsigned); void fn_826728E8(int,const char *,int);}
struct View_824C5748 {virtual void f00();virtual void f04();virtual void f08();virtual void f0c();virtual int f10();virtual int f14();virtual void f18();virtual void f1c();};
struct Owner_824C5748 {virtual void f00();virtual void f04();virtual void f08(int);int x;char pad[0x30];int view;unsigned rep;};
struct Shared_824C5748 {View_824C5748 *p;unsigned rep;};
extern "C" void fn_824C5748(Owner_824C5748 *self,Shared_824C5748 *src) {
 if(self->view) ((View_824C5748*)self->view)->f1c();
 src->p->f18();self->f08(src->p->f10());
 int val=src->p->f14();if(val)fn_826728E8(self->x,"cameraview",val);
 unsigned rep=src->rep;View_824C5748 *p=src->p;View_824C5748 *newp=0;unsigned newrep=0;
 if(rep && fn_8223AAC0(rep)){newrep=rep;newp=p;}
 unsigned old=self->rep;self->rep=newrep;self->view=(int)newp;if(old)fn_822315A0(old);
}
