typedef struct Buffer_82713B90 { int values[6]; } Buffer_82713B90;
extern unsigned char fn_82695468(int,int);
extern void fn_826954C0(int,const char *,int,int);
extern int fn_82696D38(int *,int,int,int,int);
extern void fn_82681838(int,int *);
extern void fn_826944C8(int);
extern void fn_82696330(Buffer_82713B90 *);
void fn_82713B90(int self) {
 int *obj; int context, result;
 int ref[4]; unsigned int base, object; Buffer_82713B90 buffer;
 if(!fn_82695468(self,10)) fn_826954C0(self,"Boolean",0,0);
 else {
  base=*(unsigned int *)(self+8);
  if(base) object=base-0x10; else object=0;
  obj=(int *)object;
  context=*(int *)(self+0x18);
  result=(*(int (**)(Buffer_82713B90 *,int *))(*obj+0x10))(&buffer,obj);
  fn_82696D38(ref,result,context,-1,0);
  fn_82681838(*(int *)(self+4),ref);
  obj=(int *)ref[0];
  if(--obj[2]==0) fn_826944C8((int)obj);
  fn_82696330(&buffer);
 }
}
