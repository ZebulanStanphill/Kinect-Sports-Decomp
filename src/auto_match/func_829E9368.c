typedef unsigned char bool;
#define false 0
extern int fn_829E92B8();


bool fn_829E9368(unsigned char *param_1,unsigned __int64 param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned char *pbVar6;
  unsigned int *puVar7;
  unsigned char *pbVar9;
  unsigned __int64 uVar8;
  unsigned char abStack_30 [16];
  
  if (((param_1 != (unsigned char *)0x0) && (0x57 < (param_2 & 0xffffffff))) &&
     (iVar4 = fn_829E92B8(param_1,param_2,abStack_30,0x10), -1 < iVar4)) {
    pbVar6 = abStack_30;
    pbVar9 = param_1;
    do {
      bVar1 = *pbVar9;
      bVar2 = *pbVar6;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar9 = pbVar9 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar9 != param_1 + 0x10);
    if ((((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) &&
        ((param_2 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_1 + 0x14))) &&
       ((*(int *)(param_1 + 0x10) == 100 && (uVar3 = *(unsigned int *)(param_1 + 0x24), uVar3 != 0)))) {
      uVar5 = 0;
      uVar8 = ((unsigned __int64)(uVar3 - 1) & 0xfffffff) * 0x10 + 0x58;
      if (uVar3 != 0) {
        puVar7 = (unsigned int *)(param_1 + 0x54);
        do {
          uVar8 = *puVar7 + uVar8;
          if ((param_2 & 0xffffffff) < (uVar8 & 0xffffffff)) {
            return false;
          }
          uVar5 = uVar5 + 1;
          puVar7 = puVar7 + 4;
        } while (uVar5 < uVar3);
      }
      return (uVar8 & 0xffffffff) == (param_2 & 0xffffffff);
    }
  }
  return false;
}

