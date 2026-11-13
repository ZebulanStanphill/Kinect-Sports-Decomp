#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F63108();
extern unsigned int lbl_831C6508;
extern unsigned int lbl_831CEBB4;
extern unsigned int lbl_831CEBBC;
extern unsigned int lbl_831CEE98;
extern unsigned int lbl_831CEE9C;
extern unsigned int lbl_831CEEA8;


void fn_822869F0(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned char **ppuVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  
  uVar6 = 0;
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x11f0) + 0x18b8);
  puVar1 = lbl_831CEE98;
  if (uVar2 == 0) {
    uVar2 = *(unsigned int *)(param_1 + 0x6e8);
    if (uVar2 < 2) {
LAB_82286b54:
      uVar6 = ZEXT48(lbl_831CEBB4);
      goto LAB_82286b58;
    }
    if (uVar2 == 2) {
LAB_82286b38:
      iVar5 = *(int *)(param_1 + 0x704);
      goto LAB_82286b3c;
    }
    if (3 < uVar2) {
      uVar6 = 0xffffffff821a9314;
      goto LAB_82286b58;
    }
  }
  else {
    if (uVar2 == 1) {
      puVar1 = lbl_831CEE9C;
      if (*(int *)(param_1 + 0x6e8) == 4) {
        puVar1 = lbl_831CEE98;
      }
      iVar5 = *(int *)(param_1 + 0x768) + -4;
      if (*(int *)(param_1 + 0x728) == 2) {
        iVar5 = *(int *)(param_1 + 0x744);
LAB_82286b3c:
        iVar5 = iVar5 << 2;
        ppuVar4 = &lbl_831C6508;
      }
      else {
        iVar5 = (iVar5 - (*(int *)(param_1 + 0x768) + -5 + (unsigned int)(iVar5 == 0))) * 4;
        if (*(int *)(param_1 + 0x728) == 3) {
          ppuVar4 = &lbl_831CEEA8;
        }
        else {
          ppuVar4 = &lbl_831CEBB4;
        }
      }
      uVar6 = (unsigned __int64)*(unsigned int *)(iVar5 + (int)ppuVar4);
      goto LAB_82286b58;
    }
    if (2 < uVar2) {
      return;
    }
    uVar2 = *(unsigned int *)(param_1 + 0x6e8);
    if (uVar2 < 2) {
      uVar2 = 0;
      piVar3 = (int *)(param_1 + 0x6a8);
      lVar7 = 4;
      do {
        if (*piVar3 != 4) {
          uVar2 = uVar2 + 1;
        }
        piVar3 = piVar3 + 0x10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      if (2 < uVar2) {
        uVar6 = ZEXT48(lbl_831CEBBC);
        goto LAB_82286b58;
      }
      goto LAB_82286b54;
    }
    if (uVar2 == 2) goto LAB_82286b38;
    if (3 < uVar2) {
      if (uVar2 == 4) {
        uVar6 = 0xffffffff821a9328;
      }
      goto LAB_82286b58;
    }
  }
  uVar6 = ZEXT48(lbl_831CEEA8);
LAB_82286b58:
  if (puVar1 != (unsigned char *)0x0) {
    if (*(int *)(param_1 + 0x690) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(int (***)())(**(int **)(param_1 + 0x690) + 4))
              (*(int **)(param_1 + 0x690),0,puVar1,param_1 + 2000,0x100);
  }
  if ((uVar6 & 0xffffffff) != 0) {
    if (*(int *)(param_1 + 0x690) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(int (***)())(**(int **)(param_1 + 0x690) + 4))
              (*(int **)(param_1 + 0x690),0,uVar6,param_1 + 0x9d0,0x100);
  }
  return;
}

