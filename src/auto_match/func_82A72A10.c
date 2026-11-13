#define true 1
extern int fn_82A756E8();


unsigned __int64 fn_82A72A10(int *param_1,int *param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  short sVar5;
  unsigned int uVar6;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  uVar4 = 0;
  uVar6 = 0;
  sVar5 = 0;
  uVar3 = param_4 - 1U;
  while (1 < uVar3) {
    uVar6 = uVar6 + 1;
    sVar5 = (short)uVar6;
    uVar3 = param_4 - 1U >> (uVar6 & 0x3f);
  }
  *(short *)(param_1 + 0x4e) = sVar5 + 1;
  sVar5 = *(short *)(iVar1 + 0xca);
  while( true ) {
    if (param_4 <= sVar5) {
      if (*(int *)(iVar1 + 0x14) == 0) {
        *(short *)((int)param_2 + 0x1ea) =
             (*(short *)(iVar1 + 0xca) - (short)*(unsigned int *)(iVar1 + 0x10)) + -1;
      }
      else {
        *(short *)((int)param_2 + 0x1ea) = (short)param_4;
      }
      return uVar4;
    }
    uVar4 = fn_82A756E8(param_1,param_2);
    if ((int)uVar4 < 0) break;
    *(unsigned int *)(iVar1 + 0x14) =
         (*(unsigned int *)(iVar1 + 0x14) ^ *(unsigned int *)(iVar1 + 0x18)) - *(unsigned int *)(iVar1 + 0x18);
    if (param_4 <= (int)*(short *)(iVar1 + 0xca) + *(int *)(iVar1 + 0x10)) {
      return 0xffffffff80040002;
    }
    sVar5 = *(short *)(iVar1 + 0xca) + (short)*(int *)(iVar1 + 0x10);
    *(short *)(iVar1 + 0xca) = sVar5;
    *(unsigned int *)(sVar5 * 4 + iVar2) = *(unsigned int *)(iVar1 + 0x14);
    *(short *)(iVar1 + 0xca) = *(short *)(iVar1 + 0xca) + 1;
    param_1[0xe] = 0;
    sVar5 = *(short *)(iVar1 + 0xca);
  }
  return uVar4;
}

