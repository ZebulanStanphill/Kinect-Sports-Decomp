extern int fn_825FCE80();
extern int fn_82624F40();


unsigned int
fn_825FC178(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  iVar2 = fn_825FCE80(param_2,0x1f4f,param_4);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  else {
    lVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x14) - 1;
    iVar2 = (int)lVar4 - ((*(unsigned int *)(iVar2 + 0x14) - 2) + (unsigned int)(lVar4 == 0));
  }
  uVar5 = (unsigned __int64)*(unsigned char *)(param_2 + 8);
  if (iVar2 != 0) {
    uVar5 = uVar5 + 3;
  }
  uVar6 = 0;
  piVar1 = *(int **)((int)(uVar5 << 2) + param_1);
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + piVar1[1]) == 0) goto LAB_825fc218;
      uVar6 = uVar6 + 1;
      iVar2 = iVar2 + 4;
    } while ((int)uVar6 < *piVar1);
  }
  uVar6 = 0xffffffffffffffff;
LAB_825fc218:
  if ((int)uVar6 == -1) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar3 = fn_82624F40(param_1,param_3,param_2 + 0xc,*(unsigned short *)(param_2 + 10),param_4,
                              param_5);
    *(unsigned int *)((int)((uVar6 & 0xffffffff) << 2) + piVar1[1]) = uVar3;
    uVar5 = (uVar5 & 0xff) << 8 | uVar6 & 0xff;
  }
  iVar2 = (int)uVar5;
  *(int *)(param_1 + 0x18) = iVar2;
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(unsigned int *)
             (*(int *)(*(int *)((iVar2 >> 8 & 0xffU) * 4 + param_1) + 4) +
             ((unsigned int)((uVar5 & 0xffffffff) << 2) & 0x3fc));
  }
  return uVar3;
}

