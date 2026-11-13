extern int fn_8306BD90();


void fn_8306BEB8(unsigned int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  
  if (*(char *)(param_2 + 0xfe) != '\0') {
    RtlEnterCriticalSection(0xffffffff83265098);
  }
  param_2[1] = param_1;
  param_2[2] = 0;
  lVar7 = 0xf9;
  param_2[3] = 0x67;
  puVar4 = param_2 + 0xfe;
  do {
    uVar3 = fn_8306BD90(param_2);
    lVar7 = lVar7 + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = uVar3;
  } while (-1 < lVar7);
  uVar5 = 0xffffffffffffffff;
  uVar6 = 0xffffffff80000000;
  puVar4 = param_2;
  do {
    puVar1 = puVar4 + 7;
    uVar2 = (unsigned int)uVar5;
    uVar5 = (uVar5 & 0xffffffff) >> 1;
    uVar3 = (unsigned int)uVar6;
    uVar6 = (uVar6 & 0xffffffff) >> 1;
    puVar4 = puVar4 + 7;
    *puVar4 = *puVar1 & uVar2 | uVar3;
  } while (uVar6 != 0);
  if (*(char *)(param_2 + 0xfe) != '\0') {
    RtlLeaveCriticalSection(0xffffffff83265098);
  }
  return;
}

