unsigned __int64
fn_82C2ECD8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
             unsigned __int64 param_6,__int64 param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char *pbVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  int iVar7;
  
  uVar2 = *(unsigned int *)(param_1 + 0x100);
  uVar4 = 0;
  uVar1 = (int)uVar2 / (int)param_3;
  trapWord(6,param_3,0);
  trapWord(5,param_3 & ~((((unsigned __int64)uVar2 & 0x7fffffff) << 1 | (unsigned __int64)(uVar2 >> 0x1f)) - 1),
           0xffff);
  uVar5 = uVar1;
  while (1 < uVar5) {
    uVar4 = uVar4 + 1;
    uVar5 = uVar1 >> (uVar4 & 0x3f);
  }
  uVar1 = (int)uVar2 / (int)param_6;
  trapWord(6,param_6,0);
  uVar5 = 0;
  trapWord(5,param_6 & ~((((unsigned __int64)uVar2 & 0x7fffffff) << 1 | (unsigned __int64)(uVar2 >> 0x1f)) - 1),
           0xffff);
  uVar2 = uVar1;
  while (1 < uVar2) {
    uVar5 = uVar5 + 1;
    uVar2 = uVar1 >> (uVar5 & 0x3f);
  }
  iVar7 = 0;
  if (0 < (int)param_7) {
    puVar6 = (unsigned int *)(param_5 + -4);
    do {
      pbVar3 = (unsigned char *)(*(int *)(*(int *)(*(int *)(param_1 + 0x15c) + uVar5 * 4) + uVar4 * 4) +
                       iVar7);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *(unsigned int *)((unsigned int)*pbVar3 * 4 + param_2);
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  return 0;
}

