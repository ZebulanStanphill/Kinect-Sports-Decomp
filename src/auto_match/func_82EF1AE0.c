extern unsigned int *auStack_30;
extern unsigned int lbl_8318A754;
extern unsigned int stack0x00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;


unsigned __int64
fn_82EF1AE0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned int auStack_30 [12];
  
  uVar6 = param_1 & 0xffffffff;
  uVar2 = 0;
  uVar7 = param_1;
  while ((iVar1 = (int)uVar7, uVar6 != 0 &&
         ((unsigned __int64)*(unsigned int *)(iVar1 + 8) <= (param_2 & 0xffffffff)))) {
    if ((param_2 & 0xffffffff) < (unsigned __int64)(*(unsigned int *)(iVar1 + 8) + 0x14)) goto LAB_82ef1b94;
    uVar6 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x360);
    uVar2 = uVar7;
    uVar7 = uVar6;
  }
  auStack_30[0] = 0;
  if ((param_1 & 0xffffffff) == 0) {
    uVar3 = 0xffffffff8000ffff;
  }
  else {
    uStack00000020 = param_3;
    uStack00000028 = param_4;
    uStack00000030 = param_5;
    uStack00000038 = param_6;
    uStack00000040 = param_7;
    uVar3 = (**(int (***)())*(unsigned int *)param_1)(param_1,auStack_30);
    if (-1 < (int)uVar3) {
      *(int *)(auStack_30[0] + 8) = (int)((param_2 & 0xffffffff) / 0x14) * 0x14;
      if ((uVar2 & 0xffffffff) != 0) {
        *(unsigned int *)((int)uVar2 + 0x360) = auStack_30[0];
      }
      *(int *)(auStack_30[0] + 0x360) = iVar1;
      uVar7 = (unsigned __int64)auStack_30[0];
LAB_82ef1b94:
      param_2 = param_2 - *(unsigned int *)((int)uVar7 + 8);
      iVar1 = (int)((param_2 & 0xffffffff) >> 3) + (int)uVar7;
      lVar8 = 5;
      *(unsigned char *)(iVar1 + 0x38) = (&lbl_8318A754)[(unsigned int)param_2 & 7] | *(unsigned char *)(iVar1 + 0x38);
      lVar4 = param_2 * 0x28 + uVar7 + 0x38;
      puVar5 = (unsigned __int64 *)&stack0x00000018;
      do {
        puVar5 = puVar5 + 1;
        lVar4 = lVar4 + 8;
        *(unsigned __int64 *)lVar4 = *puVar5;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      uVar3 = 0;
    }
  }
  return uVar3;
}

