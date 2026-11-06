typedef struct { unsigned char kind,pad[3],value; } Result_827379C0;
typedef struct { unsigned pad; Result_827379C0 *result; unsigned buffer; unsigned padc[3]; unsigned context; int count; } Obj_827379C0;
extern unsigned char fn_82695468(Obj_827379C0 *,unsigned);
extern void fn_826954C0(Obj_827379C0 *,const char *,unsigned,unsigned);
extern unsigned fn_826957D0(Obj_827379C0 *,unsigned);
extern unsigned fn_82697700(unsigned,unsigned);
extern unsigned fn_827558B0(void *);
extern unsigned char fn_82755AE0(void *,unsigned,unsigned);
extern void fn_826959C8(Result_827379C0 *);
void fn_827379C0(Obj_827379C0 *o) {
 if(!fn_82695468(o,0x29)) fn_826954C0(o,"TextSnapshot",0,0);
 else {
  unsigned base=o->buffer ? o->buffer-16:0;
  if(base && o->count>=1) {
   unsigned context=o->context;
   unsigned a=fn_82697700(fn_826957D0(o,0),context);
   unsigned b;
   unsigned char result;
   Result_827379C0 *out;
   if(o->count>1) {
    context=o->context;
    b=fn_82697700(fn_826957D0(o,1),context);
   } else b=fn_827558B0((void *)(base+0x30));
   if(b<=a) b=a+1;
   result=fn_82755AE0((void *)(base+0x30),a,b);
   out=o->result;
   fn_826959C8(out);
   out->value=result;
   out->kind=2;
  }
 }
}
