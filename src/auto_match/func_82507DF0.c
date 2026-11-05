typedef struct State_82507DF0 { unsigned a,b,c; } State_82507DF0;
typedef struct Obj_82507DF0 { unsigned data; State_82507DF0 state; float f10; unsigned p14,p18,p1c;float f20;unsigned p24,p28,p2c,p30,p34,p38,p3c,p40,p44,p48,heap,p50,p54,p58,p5c; } Obj_82507DF0;
extern float lbl_821CC160;extern unsigned fn_8251F720(void *,int);
static __forceinline void Reset_82507DF0(State_82507DF0 *s) {s->a=0;s->c=-1;s->b=0;}
Obj_82507DF0 *fn_82507DF0(Obj_82507DF0 *o,unsigned *heap,unsigned a,unsigned b) {
 State_82507DF0 *s=&o->state;
 o->data=0; s->a=0;s->b=0;s->c=-1;
 o->p14=a;o->p24=1;o->p28=0;o->p2c=0;o->p30=0;o->p34=0;o->p3c=0;o->p40=0;o->p44=0;
 o->p50=b;o->p54=0;o->p58=0;o->p5c=0;
 o->heap=*heap;
 if(o->heap)o->data=fn_8251F720(&o->heap,0);
 Reset_82507DF0(s);
 {float f=lbl_821CC160;float *a=&o->f10,*b=&o->f20;unsigned *c=&o->p18,*d=&o->p1c;*a=f;*c=0;*b=f;*d=0;}
 return o;
}
