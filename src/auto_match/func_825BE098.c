typedef unsigned char bool;
extern int fn_8259BB38();
extern int fn_827D96A0();
extern int fn_82A1E650();
extern unsigned int iStack_1c;
extern unsigned int uStack_20;


bool fn_825BE098(int param_1,unsigned __int64 param_2)

{
  unsigned int uStack_20;
  int iStack_1c;
  
  fn_82A1E650(*(unsigned int *)(param_1 + 0x1d8),0xffffffffffffffff);
  uStack_20 = fn_827D96A0(param_2);
  fn_8259BB38(&iStack_1c,param_1 + 0x5c,&uStack_20);
  return iStack_1c != *(int *)(param_1 + 0x60);
}

