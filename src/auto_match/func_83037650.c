static __forceinline unsigned char active_test(unsigned a,unsigned b) { unsigned char x=0; if(a==0xa000003) x=b!=0; return x; }
extern int fn_83009F28();
extern int fn_83009FC0();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


void fn_83037650(int param_1)

{
  int iVar1;
  unsigned int iStack_20;
  unsigned int iStack_1c;
  
  iStack_20 = 0;
  iStack_1c = 0;
  iVar1 = XNotifyGetNext(*(unsigned int *)(param_1 + 4),0xa000003,&iStack_20,&iStack_1c);
  if (iVar1 != 0) {
    unsigned char active = active_test(iStack_20,iStack_1c);
    if (active) {
      fn_83009FC0();
    }
    else {
      fn_83009F28();
    }
  }
  return;
}

