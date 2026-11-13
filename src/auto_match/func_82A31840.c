typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A2C8E0();
extern int fn_82A30780();


unsigned __int64 fn_82A31840(unsigned __int64 param_1,int param_2,__int64 *param_3)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int iVar5;
  __int64 lVar6;
  int aiStack_40 [16];
  
  lVar6 = *param_3;
  bVar2 = false;
  if ((lVar6 != -1) && (lVar6 != 0)) {
    iVar4 = fn_82A2C8E0(lVar6,aiStack_40);
    if (iVar4 != 0) {
      iVar4 = aiStack_40[0];
      if (aiStack_40[0] != *(int *)(param_2 + 0x40)) {
        bVar2 = true;
      }
      goto LAB_82a318ac;
    }
    goto LAB_82a31884;
  }
  iVar4 = *(int *)(param_2 + 0x40);
LAB_82a318ac:
  lVar6 = param_3[2];
  if ((lVar6 == -1) || (lVar6 == 0)) {
    iVar5 = *(int *)(param_2 + 0x44);
  }
  else {
    iVar5 = fn_82A2C8E0(lVar6,aiStack_40);
    if (iVar5 == 0) goto LAB_82a31884;
    iVar5 = aiStack_40[0];
    if (aiStack_40[0] != *(int *)(param_2 + 0x44)) {
      bVar2 = true;
    }
  }
  uVar1 = *(unsigned int *)(param_3 + 4);
  if (uVar1 == 0) {
LAB_82a31920:
    if (bVar2) {
      uVar3 = fn_82A30780(param_1,param_2);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      *(int *)(param_2 + 0x40) = iVar4;
      *(int *)(param_2 + 0x44) = iVar5;
      *(unsigned char *)(param_2 + 0x35) = *(unsigned char *)(param_2 + 0x35) | 0x10;
    }
    uVar3 = 0;
  }
  else {
    if ((*(unsigned char *)(param_2 + 0x35) & 2) == 0) {
      if ((uVar1 & 0x10) == 0) goto LAB_82a31920;
    }
    else if ((uVar1 & 0x10) != 0) goto LAB_82a31920;
LAB_82a31884:
    uVar3 = 0xffffffffc000000d;
  }
  return uVar3;
}

