extern int fn_82AA1C90();
extern int fn_82AA2720();
extern int fn_82AA4498();
extern unsigned int lbl_8315FF90;


unsigned __int64
fn_82AA4860(unsigned __int64 param_1,int param_2,unsigned int *param_3,unsigned int param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if (param_4 < 0x24) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    fn_82AA4498(param_5,(&lbl_8315FF90)[param_2]);
    fn_82AA2720(param_5,0xffffffff821ce7a4);
    fn_82AA1C90(param_5,0xffffffff821cc86c);
    uVar1 = *param_3 >> 5 & 1;
    if ((((param_1 & 0xffffffff) >> 7 & 1) != 0) || (uVar1 != 0)) {
      fn_82AA4498(param_5,0xffffffff8202f634);
      if (uVar1 == 0) {
        uVar2 = 0xffffffff82196f10;
      }
      else {
        uVar2 = 0xffffffff82196f18;
      }
      fn_82AA1C90(param_5,0xffffffff820d3a78,uVar2);
      fn_82AA2720(param_5,0xffffffff821ce7a4);
      fn_82AA1C90(param_5,0xffffffff821cc86c);
    }
    uVar2 = 0;
  }
  return uVar2;
}

