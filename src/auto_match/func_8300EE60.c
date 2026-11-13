extern int fn_8301B2D0();


void fn_8300EE60(unsigned int *param_1,int (**param_2)(),unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  if (param_2 != (int (**)())0x0) {
    RtlEnterCriticalSection(param_1 + 3);
    for (puVar2 = (unsigned int *)*param_1;
        (puVar2 != (unsigned int *)param_1[1] && ((unsigned __int64)*puVar2 != (param_6 & 0xffffffff)));
        puVar2 = puVar2 + 3) {
    }
    puVar2 = (unsigned int *)(-(unsigned int)((unsigned int *)param_1[1] != puVar2) & (unsigned int)(puVar2 + 1));
    if (puVar2 != (unsigned int *)0x0) {
      uVar1 = puVar2[1];
      if (*puVar2 < 2) {
        fn_8301B2D0(param_1,param_6);
      }
      else {
        *puVar2 = *puVar2 - 1;
        if (uVar1 != 0) {
          puVar2[1] = uVar1 - 1;
        }
      }
      if (uVar1 == 0) {
        (*param_2)(param_3,param_4,param_5,param_6);
      }
    }
    RtlLeaveCriticalSection(param_1 + 3);
  }
  return;
}

