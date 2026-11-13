typedef unsigned char bool;
extern int fn_8259BB38();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_827D96A0();
extern int fn_82A1BB18();
extern unsigned int uStack_30;


bool fn_8259B1C0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  __int64 lVar2;
  unsigned int uStack_30;
  int aiStack_2c [11];
  
  lVar2 = fn_82A1BB18();
  fn_8259C5D8(param_1 + 0x60,1,lVar2 + 1);
  uStack_30 = fn_827D96A0(param_2);
  fn_8259BB38(aiStack_2c,param_1 + 0x34,&uStack_30);
  iVar1 = *(int *)(param_1 + 0x38);
  fn_82A1BB18();
  fn_8259C738(param_1 + 0x60);
  return aiStack_2c[0] != iVar1;
}

