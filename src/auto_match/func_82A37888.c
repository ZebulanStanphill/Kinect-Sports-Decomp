extern unsigned int *auStack_30;


void fn_82A37888(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 auStack_30 [6];
  
  RtlEnterCriticalSection(param_1 + 3);
  uVar6 = param_1[0xc];
  uVar4 = (unsigned __int64)param_1[2];
  iVar3 = 0;
  if (-1 < (int)uVar6) {
    uVar1 = param_1[0xb];
    uVar5 = (unsigned __int64)uVar1;
    do {
      trapWord(6,uVar5,0);
      uVar2 = ((__int64)((int)((int)uVar4 - *param_1) / 0x60) + uVar5) - 1;
      uVar4 = (uVar2 - (__int64)((int)uVar2 / (int)uVar1) * (__int64)(int)uVar1) * 0x60 +
              (unsigned __int64)*param_1;
      trapWord(5,uVar5 & ~(((uVar2 & 0x7fffffff) << 1 | (uVar2 & 0xffffffff) >> 0x1f) - 1),0xffff);
      if (*(int *)((int)uVar4 + 0x14) == param_2) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)uVar6);
    if (iVar3 <= (int)uVar6) {
      uVar6 = param_1[0xe] - iVar3;
      goto LAB_82a37948;
    }
  }
  if (param_1[0xb] == uVar6) {
    uVar6 = param_1[0xe] - uVar6;
  }
  else {
    uVar6 = param_1[0x10];
  }
LAB_82a37948:
  RtlLeaveCriticalSection(param_1 + 3);
  while ((uVar6 - param_1[0x10]) - 1 <= param_1[0xb]) {
    auStack_30[0] = 0xfffffffffffe7960;
    KeDelayExecutionThread(1,0,auStack_30);
  }
  return;
}

