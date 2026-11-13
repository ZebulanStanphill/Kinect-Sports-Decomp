typedef unsigned char bool;
#define false 0
extern int fn_8259BB38();
extern int fn_827D96A0();
extern int fn_82A1E650();
extern unsigned int iStack_1c;
extern unsigned int uStack_20;


bool fn_825BF0F0(int param_1,unsigned __int64 param_2)

{
  unsigned int iVar1;
  bool bVar2;
  unsigned int uStack_20;
  int iStack_1c;
  
  iVar1 = fn_82A1E650(*(unsigned int *)(param_1 + 0x1b4),0);
  if (iVar1 == 0x102) {
    bVar2 = false;
  }
  else {
    uStack_20 = fn_827D96A0(param_2);
    fn_8259BB38(&iStack_1c,param_1 + 0x1c4,&uStack_20);
    bVar2 = iStack_1c != *(int *)(param_1 + 0x1c8);
  }
  return bVar2;
}

