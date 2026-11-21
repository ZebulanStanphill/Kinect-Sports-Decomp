/* WARNING: Inlined function: __savegprlr_25 */

void fn_82D7D230(unsigned char *param_1,int *param_2,unsigned __int64 param_3)

{
  int (**pcVar1)();
  unsigned char *pbVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned char auStack_650 [16];
  unsigned char auStack_640 [64];
  unsigned char auStack_600 [64];
  unsigned char auStack_5c0 [704];
  unsigned char auStack_300 [704];
  
  uVar6 = (unsigned int)*param_1;
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
  uVar3 = uVar6 - 2;
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
  if (0xc < uVar3) {
__restgprlr_25:
    return;
  }
LAB_82d7d264:
  switch(*(unsigned int *)(uVar3 * 4 + -0x7d282d84)) {
  case 0x82d7d2b0:
    goto switchD_82d7d278_caseD_82d7d2b0;
  case 0x82d7d308:
    pbVar2 = param_1 + 0x20;
    break;
  case 0x82d7d310:
    pbVar2 = param_1 + 0x30;
    break;
  case 0x82d7d358:
    goto __restgprlr_25;
  }
  pcVar1 = *(int (***)())((unsigned int)param_1[1] * 0x50 + *param_2 + 0x16c8);
  if (pcVar1 == (int (**)())0x0) {
    return;
  }
  (*pcVar1)(param_1,pbVar2,uVar5,uVar4,param_2,*(unsigned int *)(param_1 + 8),param_3);
  return;
switchD_82d7d278_caseD_82d7d2b0:
  auStack_650[0] = 0;
  uVar5 = fn_82D7C6F8(uVar5,auStack_600,auStack_5c0,4,auStack_650);
  uVar4 = fn_82D7C6F8(uVar4,auStack_640,auStack_300,4,auStack_650);
  uVar6 = uVar6 & 0xf7;
  uVar3 = uVar6 - 2;
  if (0xc < uVar3) {
    return;
  }
  goto LAB_82d7d264;
}
