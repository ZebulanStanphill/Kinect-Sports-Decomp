extern unsigned int *auStack_50;
extern int fn_8304D6C8();
extern unsigned int uStack_48;


unsigned __int64 fn_830489C0(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned char auStack_50 [8];
  unsigned int uStack_48;
  
  uVar10 = 0x2d;
  iVar2 = *(int *)(param_1 + 0x44);
  iVar3 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
  uVar8 = (unsigned __int64)(*(unsigned int *)(iVar4 + 0x24) >> 3) & 0x1f;
  uVar7 = (int)uVar8 * *param_2 + iVar2;
  *(unsigned int *)(param_1 + 0x44) = uVar7;
  trapWord(6,uVar8,0);
  if (*(short *)(param_1 + 0x1c) == 1) {
    uVar9 = *(int *)(param_1 + 0x2c) + iVar3;
  }
  else {
    uVar9 = *(unsigned int *)(param_1 + 0x50);
  }
  if (uVar9 <= uVar7) {
    uVar6 = (unsigned __int64)(*(unsigned int *)(iVar4 + 0x24) >> 3) & 0x1f;
    trapWord(6,uVar6,0);
    *param_2 = *param_2 - (int)((uVar7 - uVar9) / uVar6);
    sVar1 = *(short *)(param_1 + 0x1c);
    if (sVar1 == 1) {
      uVar10 = 0x11;
      *(unsigned char *)(param_1 + 0x40) = 1;
    }
    else {
      *(unsigned int *)(param_1 + 0x44) = *(unsigned int *)(param_1 + 0x4c);
      if (sVar1 != 0) {
        *(short *)(param_1 + 0x1c) = sVar1 + -1;
      }
      if (*(short *)(param_1 + 0x1c) == 1) {
        piVar5 = *(int **)(param_1 + 0x28);
        if (piVar5 != (int *)0x0) {
          (**(int (***)())(*piVar5 + 0xc))(piVar5,auStack_50);
          uStack_48 = 0;
          (**(int (***)())(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),auStack_50);
        }
      }
    }
  }
  trapWord(6,uVar8,0);
  fn_8304D6C8(param_1,(unsigned int)(iVar2 - iVar3) / uVar8,*param_2,*(unsigned int *)(param_1 + 0x2c) / uVar8);
  return uVar10;
}

