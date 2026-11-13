extern int fn_8259BA48();
extern int fn_8259BB38();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_8265CA20();
extern int fn_827D96A0();
extern int fn_82A1BB18();
extern unsigned int uStack_30;


void fn_8259B378(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned int uStack_30;
  int aiStack_2c [11];
  
  lVar1 = fn_82A1BB18();
  fn_8259C5D8(param_1 + 0x60,1,lVar1 + 1);
  uStack_30 = fn_827D96A0(param_2);
  fn_8259BB38(aiStack_2c,param_1 + 0x34,&uStack_30);
  if (aiStack_2c[0] != *(int *)(param_1 + 0x38)) {
    if (*(int *)(aiStack_2c[0] + 0xc) != 0) {
      fn_8265CA20();
    }
    fn_8259BA48(aiStack_2c,param_1 + 0x34,aiStack_2c[0]);
  }
  fn_82A1BB18();
  fn_8259C738(param_1 + 0x60);
  return;
}

