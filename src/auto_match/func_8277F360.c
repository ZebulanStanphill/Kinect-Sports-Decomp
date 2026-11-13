#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8277E590();
extern int fn_8277F2F0();


__int64 fn_8277F360(double param_1,int param_2,int *param_3,unsigned __int64 param_4,char param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  float fVar4;
  __int64 lVar5;
  float *pfVar6;
  
  if (((param_5 == '\0') && (param_3[7] == param_3[8])) && (param_3[9] == param_3[10])) {
    if ((param_3[0xb] & 8U) != 0) {
      uVar1 = *(unsigned int *)*param_3;
      if ((double)*(float *)(*(int *)((uVar1 >> 8 & 0xfffffc) + *(int *)(param_2 + 0x3c)) +
                             (uVar1 & 0x3ff) * 8 + 4) == param_1) {
        lVar5 = (unsigned __int64)*(unsigned int *)((uVar1 >> 8 & 0xfffffc) + *(int *)(param_2 + 0x3c)) +
                ((unsigned __int64)uVar1 & 0x3ff) * 8;
        goto LAB_8277f3e0;
      }
    }
    return -1;
  }
  puVar2 = (unsigned int *)*param_3;
  iVar3 = *(int *)(param_2 + 0x3c);
  uVar1 = *puVar2;
  if (((double)*(float *)(*(int *)((uVar1 >> 8 & 0xfffffc) + iVar3) + (uVar1 & 0x3ff) * 8 + 4) ==
       param_1) ||
     (((param_3[0xb] & 2U) != 0 &&
      (uVar1 = puVar2[1],
      (double)*(float *)(*(int *)((uVar1 >> 8 & 0xfffffc) + iVar3) + (uVar1 & 0x3ff) * 8 + 4) ==
      param_1)))) {
    lVar5 = (unsigned __int64)*(unsigned int *)((uVar1 >> 8 & 0xfffffc) + iVar3) + ((unsigned __int64)uVar1 & 0x3ff) * 8;
LAB_8277f3e0:
    lVar5 = fn_8277F2F0(param_2,lVar5);
    return lVar5;
  }
  pfVar6 = (float *)(*(int *)((*puVar2 >> 8 & 0xfffffc) + iVar3) + (*puVar2 & 0x3ff) * 8);
  fVar4 = (float)(param_1 - (double)pfVar6[1]) * (float)puVar2[2] + *pfVar6;
  if (param_1 <= (double)*(float *)(param_2 + 0x118)) {
    if (fVar4 - *(float *)(param_2 + 0x114) <= *(float *)(param_2 + 0xf0)) goto LAB_8277f4d4;
    *(unsigned __int64 *)(param_2 + 0x114) = CONCAT44(fVar4,(float)param_1);
  }
  else {
    *(unsigned __int64 *)(param_2 + 0x114) = CONCAT44(fVar4,(float)param_1);
  }
  fn_8277E590(param_2 + 0x104);
LAB_8277f4d4:
  return (unsigned __int64)*(unsigned int *)(param_2 + 0x104) - 1;
}

