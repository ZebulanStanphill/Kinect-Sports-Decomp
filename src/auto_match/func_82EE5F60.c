extern unsigned int *auStack_40;
extern int fn_82F68CC0();


unsigned __int64 fn_82EE5F60(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int auStack_40 [16];
  
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    uVar2 = 0xffffffff80070057;
  }
  else if ((unsigned __int64)*(unsigned int *)(param_1 + 0x18) < (param_3 & 0xffffffff)) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    puVar3 = (unsigned int *)(-(unsigned int)(param_1 + 4U != *(unsigned int *)(param_1 + 4)) & *(unsigned int *)(param_1 + 4));
    for (; (puVar3 != (unsigned int *)0x0 && ((param_3 & 0xffffffff) != 0)); param_3 = param_3 - uVar4) {
      uVar1 = *puVar3;
      (**(int (***)())(*(int *)puVar3[2] + 0x14))((int *)puVar3[2],auStack_40,0);
      uVar4 = (unsigned __int64)puVar3[4];
      if ((param_3 & 0xffffffff) <= (unsigned __int64)puVar3[4]) {
        uVar4 = param_3;
      }
      fn_82F68CC0(param_2,(unsigned __int64)puVar3[3] + (unsigned __int64)auStack_40[0],uVar4);
      param_2 = uVar4 + param_2;
      puVar3 = (unsigned int *)(-(unsigned int)(param_1 + 4U != uVar1) & uVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

