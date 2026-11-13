extern unsigned int *auStack_170;
extern unsigned int *auStack_178;
extern int fn_8259BA48();
extern int fn_8259BB38();
extern int fn_8259C5D8();
extern int fn_8265CA20();
extern int fn_827D96A0();
extern int fn_82A1BB18();
extern int fn_82A1EFC0();


void fn_8259B240(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  int aiStack_180 [2];
  unsigned int auStack_178 [2];
  unsigned char auStack_170 [368];
  
  lVar1 = fn_82A1BB18();
  fn_8259C5D8(param_1 + 0x60,1,lVar1 + 1);
  auStack_178[0] = fn_827D96A0(param_2);
  fn_8259BB38(aiStack_180,param_1 + 0x34,auStack_178);
  if (aiStack_180[0] != *(int *)(param_1 + 0x38)) {
    if (*(int *)(aiStack_180[0] + 0xc) != 0) {
      fn_8265CA20();
    }
    fn_8259BA48(aiStack_180,param_1 + 0x34,aiStack_180[0]);
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_170,0,0x134);
}

