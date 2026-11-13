extern int fn_830514A8();
extern int fn_83051D60();


unsigned int fn_830525B0(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 *plVar4;
  
  uVar2 = (unsigned int)*(unsigned char *)(param_1 + 0xa8);
  if (uVar2 < *(unsigned int *)(param_1 + 0xa4)) {
    plVar4 = *(__int64 **)(param_1 + 0x9c);
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        uVar3 = uVar3 + 1;
        plVar4 = *(__int64 **)(plVar4 + 2);
      } while (uVar3 < uVar2);
    }
    if (*plVar4 == *(__int64 *)(param_1 + 0x80)) {
      *(unsigned char *)(param_1 + 0xa8) = *(unsigned char *)(param_1 + 0xa8) + 1;
      *(unsigned __int64 *)(param_1 + 0x80) = (unsigned __int64)*(unsigned int *)((int)plVar4 + 0xc) + *plVar4;
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) - *(int *)((int)plVar4 + 0xc);
      fn_830514A8();
      *param_2 = *(unsigned int *)((int)plVar4 + 0xc);
      uVar1 = *(unsigned int *)(plVar4 + 1);
    }
    else {
      *(unsigned int *)(param_1 + 0x90) = 0;
      fn_83051D60();
      *param_2 = 0;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
    *param_2 = 0;
  }
  return uVar1;
}

