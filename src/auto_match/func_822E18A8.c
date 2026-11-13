extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_822D01E8();
extern int fn_82365BD8();
extern int fn_82520158();
extern unsigned int lbl_821ADD98;


unsigned int *
fn_822E18A8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
             unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  unsigned char auStack_40 [16];
  
  uVar1 = fn_82365BD8(auStack_40,param_4);
  fn_822D01E8(param_1,param_2,param_3,2,uVar1,param_5);
  param_1[0xd] = 0xffffffff;
  *param_1 = &lbl_821ADD98;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  fn_82520158(0xffffffff821add10,param_1 + 0x19,0);
  fn_82520158(0xffffffff821add30,param_1 + 0x1a,0);
  fn_82520158(0xffffffff821add54,param_1 + 0x1b,0);
  fn_82520158(0xffffffff821add70,param_1 + 0x1c,0);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

