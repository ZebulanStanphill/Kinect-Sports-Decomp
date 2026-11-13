extern unsigned int *auStack_30;
extern int fn_82F68CC0();
extern unsigned int lbl_8318A10C;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;


unsigned __int64
fn_82EE0958(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned int auStack_30 [12];
  
  uVar4 = param_1 & 0xffffffff;
  uVar2 = 0;
  uVar5 = param_1;
  while ((iVar1 = (int)uVar5, uStack00000020 = param_3, uStack00000028 = param_4,
         uStack00000030 = param_5, uVar4 != 0 &&
         ((unsigned __int64)*(unsigned int *)(iVar1 + 4) <= (param_2 & 0xffffffff)))) {
    if ((param_2 & 0xffffffff) < (unsigned __int64)(*(unsigned int *)(iVar1 + 4) + 0x14)) goto LAB_82ee0a04;
    uVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x208);
    uVar2 = uVar5;
    uVar5 = uVar4;
  }
  auStack_30[0] = 0;
  if ((param_1 & 0xffffffff) == 0) {
    uVar3 = 0xffffffff8000ffff;
  }
  else {
    uVar3 = (**(int (***)())*(unsigned int *)param_1)(param_1,auStack_30);
    if (-1 < (int)uVar3) {
      *(int *)(auStack_30[0] + 4) = (int)((param_2 & 0xffffffff) / 0x14) * 0x14;
      if ((uVar2 & 0xffffffff) != 0) {
        *(unsigned int *)((int)uVar2 + 0x208) = auStack_30[0];
      }
      *(int *)(auStack_30[0] + 0x208) = iVar1;
      uVar5 = (unsigned __int64)auStack_30[0];
LAB_82ee0a04:
      param_2 = param_2 - *(unsigned int *)((int)uVar5 + 4);
      iVar1 = (int)((param_2 & 0xffffffff) >> 3) + (int)uVar5;
      *(unsigned char *)(iVar1 + 0x24) = (&lbl_8318A10C)[(unsigned int)param_2 & 7] | *(unsigned char *)(iVar1 + 0x24);
      fn_82F68CC0(param_2 * 0x18 + uVar5 + 0x28,&stack0x00000020,0x18);
      uVar3 = 0;
    }
  }
  return uVar3;
}

