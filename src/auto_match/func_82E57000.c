extern void fn_82E50CB8(void *);
extern void fn_82E50F10(void *);
extern int fn_82E56EC0(void *,unsigned,unsigned *);
int fn_82E57000(char *o,unsigned index,unsigned short *a,unsigned short *b) {
 unsigned value;int result;
 if(a && b) {
  fn_82E50CB8(o+8);
  if(*(unsigned *)(o+0xac)<=index) result=0x80070057;
  else if(fn_82E56EC0(o+0x44,index,&value)==0) result=0x8000ffff;
  else {*a=(unsigned short)value;*b=(unsigned short)(value>>16);result=0;}
  fn_82E50F10(o+8);
  return result;
 }
 return 0x80070057;
}
