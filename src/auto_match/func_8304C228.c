extern unsigned int *auStack_70;
extern unsigned int fStack_50;
extern int fn_8304D8A0();
extern unsigned int lbl_8217DB8C;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_79;


unsigned __int64 fn_8304C228(int param_1,short param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned char uStack_79;
  unsigned char auStack_70 [4];
  unsigned int uStack_6c;
  unsigned short uStack_64;
  struct { float first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned char uStack_40;
  
  puVar8 = (unsigned int *)(param_1 + 0x24);
  uVar4 = fn_8304D8A0(*(unsigned int *)(param_1 + 0x34),*(unsigned int *)(param_1 + 0x3c),auStack_70
                          ,0x12,param_1 + 0x10,(unsigned int *)(param_1 + 0x20),puVar8,
                          (int *)(param_1 + 0x2c));
  if ((int)uVar4 == 1) {
    iVar1 = *(int *)(param_1 + 0x30);
    uVar5 = iVar1 + *(int *)(param_1 + 0x2c);
    *(unsigned int *)(param_1 + 0x5c) = (unsigned int)uStack_64;
    if ((param_2 == 1) || (uVar2 = *puVar8, uVar2 == 0)) {
      *(int *)(param_1 + 0x4c) = iVar1;
      *(unsigned int *)(param_1 + 0x50) = uVar5;
      trapWord(6,(unsigned __int64)uStack_64,0);
      *puVar8 = (unsigned int)((unsigned __int64)(uVar5 - iVar1) / (unsigned __int64)(unsigned int)uStack_64 << 6);
    }
    else {
      uVar3 = *(unsigned int *)(param_1 + 0x20);
      uVar6 = (uVar3 >> 6) * (unsigned int)uStack_64 + iVar1;
      uVar7 = (uVar2 + 1 >> 6) * (unsigned int)uStack_64 + iVar1;
      *(unsigned int *)(param_1 + 0x4c) = uVar6;
      *(unsigned int *)(param_1 + 0x50) = uVar7;
      if (((uVar2 < uVar3) || (uVar5 < uVar6)) || (uVar5 < uVar7)) {
        return 7;
      }
    }
    (**(int (***)())(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),&stack_pair_50.first);
    stack_pair_50.first = (float)uStack_6c * (float)uStack_64 * lbl_8217DB8C;
    if ((param_2 == 0) || (1 < param_2)) {
      stack_pair_50.second = *(unsigned int *)(param_1 + 0x4c);
      uStack_48 = *(unsigned int *)(param_1 + 0x50);
    }
    uStack_79 = (unsigned char)(int)*(float *)(*(int *)(param_1 + 8) + 0xdc);
    uStack_40 = uStack_79;
    (**(int (***)())(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),&stack_pair_50.first);
    uVar4 = 1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x30);
  }
  return uVar4;
}

