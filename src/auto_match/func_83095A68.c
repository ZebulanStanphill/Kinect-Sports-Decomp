extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int lbl_831BCF54;


void fn_83095A68(unsigned int *param_1,int param_2,int *param_3)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned short *puVar4;
  unsigned short *puVar5;
  __int64 lVar6;
  int iVar7;
  
  puVar5 = (unsigned short *)*param_1;
  lVar6 = 0;
  if (puVar5 < puVar5 + param_1[1] * 2) {
    puVar4 = puVar5 + -1;
    lVar3 = (unsigned __int64)((unsigned int)((int)(puVar5 + param_1[1] * 2) + (-1 - (int)puVar5)) >> 2) + 1;
    lVar2 = lVar6;
    do {
      iVar1 = *(int *)((unsigned int)puVar5[1] * 4 + *param_3);
      lVar6 = lVar2;
      if (-1 < iVar1) {
        lVar6 = lVar2 + 1;
        *(unsigned int *)(puVar4 + 1) = *(unsigned int *)puVar5;
        puVar4 = puVar4 + 2;
        *puVar4 = (unsigned short)iVar1;
        *(short *)(*(int *)(&lbl_831BCF54 + (*puVar5 & 1) * 4) + iVar1 * 0x10 + param_2) =
             (short)lVar2;
      }
      puVar5 = puVar5 + 2;
      lVar3 = lVar3 + -1;
      lVar2 = lVar6;
    } while (lVar3 != 0);
  }
  iVar1 = fn_82CE5410();
  iVar7 = (int)lVar6;
  if ((int)(param_1[2] & 0x3fffffff) < iVar7) {
    lVar2 = ((unsigned __int64)(unsigned int)param_1[2] & 0x3fffffff) << 1;
    if ((int)lVar2 <= iVar7) {
      lVar2 = lVar6;
    }
    fn_82CE6310(*(unsigned int *)(iVar1 + 0x10),param_1,lVar2,4);
  }
  param_1[1] = iVar7;
  return;
}

