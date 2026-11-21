extern unsigned int fn_82625420;
extern unsigned int fn_82B6A388;
extern unsigned int fn_82B6A390;
extern unsigned int fn_82B6A3E8;
extern unsigned int fn_82B6A5A8;
extern unsigned int fn_82B6A768;

/* WARNING: Inlined function: __savegprlr_23 */

unsigned int *
fn_82B6AB18(unsigned __int64 param_1,int (**param_2)(),int param_3,unsigned __int64 param_4,unsigned int param_5,
           unsigned __int64 param_6,int param_7)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  int (**pcVar3)();
  int (**pcVar4)();
  
  if (param_2 == (int (**)())0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820d95d8,0x481);
  }
  if (param_3 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820d95d8,0x481);
  }
  puVar2 = (unsigned int *)(*param_2)(param_1,0x1c);
  if (puVar2 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d96b0,0xffffffff820d95d8,0x487);
  }
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = (int)param_4;
  *puVar2 = (int)param_1;
  puVar2[4] = param_5;
  uVar1 = fn_82B69A00(param_4,0);
  if ((uVar1 & 0xffc) == 0) {
    if (param_7 == 1) {
      pcVar4 = fn_82625420;
      pcVar3 = fn_82B6A5A8;
    }
    else {
      pcVar4 = fn_82B6A388;
      pcVar3 = fn_82B6A3E8;
    }
  }
  else {
    pcVar4 = fn_82B6A390;
    pcVar3 = fn_82B6A768;
  }
  puVar2[6] = pcVar4;
  puVar2[5] = pcVar3;
  return puVar2;
}
