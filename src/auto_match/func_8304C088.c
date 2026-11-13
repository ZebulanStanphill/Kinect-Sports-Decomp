extern unsigned int *auStack_40;
extern int fn_8304D6C8();
extern unsigned int uStack_38;


unsigned __int64 fn_8304C088(int param_1,unsigned int *param_2)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned char auStack_40 [8];
  unsigned int uStack_38;
  
  uVar8 = *param_2;
  uVar2 = *(unsigned int *)(param_1 + 0x44);
  uVar3 = *(unsigned int *)(param_1 + 0x30);
  uVar4 = *(unsigned int *)(param_1 + 0x5c);
  uVar9 = 0x2d;
  *param_2 = (uVar8 >> 6) << 6;
  trapWord(6,(unsigned __int64)uVar4,0);
  if (*(short *)(param_1 + 0x1c) == 1) {
    uVar7 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30);
  }
  else {
    uVar7 = *(unsigned int *)(param_1 + 0x50);
  }
  uVar5 = *(unsigned int *)(param_1 + 0x5c);
  uVar8 = uVar5 * (uVar8 >> 6) + *(int *)(param_1 + 0x44);
  *(unsigned int *)(param_1 + 0x44) = uVar8;
  if (uVar7 <= uVar8) {
    trapWord(6,(unsigned __int64)uVar5,0);
    *param_2 = *param_2 - (int)((unsigned __int64)(uVar8 - uVar7) / (unsigned __int64)uVar5 << 6);
    sVar1 = *(short *)(param_1 + 0x1c);
    if (sVar1 == 1) {
      uVar9 = 0x11;
      *(unsigned char *)(param_1 + 0x40) = 1;
    }
    else {
      *(unsigned int *)(param_1 + 0x44) = *(unsigned int *)(param_1 + 0x4c);
      if (sVar1 != 0) {
        *(short *)(param_1 + 0x1c) = sVar1 + -1;
      }
      if (*(short *)(param_1 + 0x1c) == 1) {
        piVar6 = *(int **)(param_1 + 0x28);
        if (piVar6 != (int *)0x0) {
          (**(int (***)())(*piVar6 + 0xc))(piVar6,auStack_40);
          uStack_38 = 0;
          (**(int (***)())(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),auStack_40);
        }
      }
    }
  }
  trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x5c),0);
  fn_8304D6C8(param_1,(((unsigned __int64)uVar2 - (unsigned __int64)uVar3 & 0x3ffffff) << 6) /
                          (unsigned __int64)uVar4,*param_2,
                  (((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) & 0x3ffffff) << 6) /
                  (unsigned __int64)*(unsigned int *)(param_1 + 0x5c));
  return uVar9;
}

