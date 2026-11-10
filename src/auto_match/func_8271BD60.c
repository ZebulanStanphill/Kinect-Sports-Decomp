typedef struct Obj_8271BD60 {int pad;char *state;char *data;} Obj_8271BD60;
extern unsigned char fn_82695468(void *,int);
extern void fn_826954C0(void *,const char *,int,int);
extern void fn_826959C8(void *);
extern void fn_82681898(void *,double);
extern double lbl_82005710;
void fn_8271BD60(Obj_8271BD60 *o) {
 if(!fn_82695468(o,0x1b))fn_826954C0(o,"LoadVars",0,0);
 else {
 char *p=o->data?o->data-16:0;
 if(*(double *)(p+56)<lbl_82005710){char *s=o->state;fn_826959C8(s);*s=0;}
 else fn_82681898(o->state,*(double *)(p+56));
 }
}
