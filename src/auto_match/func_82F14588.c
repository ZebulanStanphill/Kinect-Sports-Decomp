extern int fn_82F02410();
extern int fn_82F44C18();


void fn_82F14588(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char *pbVar5;
  int iVar6;
  
  if ((int)param_1[4] < 2) goto code_r0x82f14604;
  if (*(int *)(param_1[0x12] + 8) == 0) {
    if (param_1[10] != param_1[0xb]) {
      fn_82F02410(param_2,1,1);
      goto code_r0x82f145f4;
    }
    uVar3 = 1;
    uVar2 = 0;
  }
  else {
code_r0x82f145f4:
    uVar3 = param_1[5];
    uVar2 = param_1[10];
  }
  fn_82F02410(param_2,uVar2,uVar3);
code_r0x82f14604:
  iVar6 = 0;
  param_1[0x11] = param_1[10];
  pbVar5 = (unsigned char *)(((int)(*param_1 + 1) >> 1) * param_1[10] + param_1[6]);
  if (0 < (__int64)((unsigned __int64)*param_1 - 1)) {
    iVar4 = 0;
    do {
      bVar1 = *pbVar5;
      iVar6 = iVar6 + 2;
      pbVar5 = pbVar5 + 1;
      *(unsigned int *)(iVar4 + param_1[0xe]) = (bVar1 & 0xf) + 1;
      *(int *)(iVar4 + 4 + param_1[0xe]) = ((int)(unsigned int)bVar1 >> 4) + 1;
      iVar4 = iVar4 + 8;
    } while (iVar6 < (int)(*param_1 - 1));
  }
  if (iVar6 < (int)*param_1) {
    *(unsigned int *)(param_1[0xe] + iVar6 * 4) = (*pbVar5 & 0xf) + 1;
  }
  fn_82F44C18(param_1[0xe],1,*param_1,param_1[0xf],1);
  return;
}

