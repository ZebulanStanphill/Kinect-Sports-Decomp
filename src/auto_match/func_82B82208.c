extern int fn_82ABDD90();
extern int fn_82B167E0();
extern int fn_82B80F70();
extern int fn_82F6DFB0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


void fn_82B82208(unsigned int param_1,unsigned __int64 param_2,unsigned __int64 *param_3,unsigned __int64 *param_4)

{
  unsigned int uVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 8) >> 7 & 0x7f;
  if (uVar1 == 0x7d) {
    uVar5 = fn_82B167E0();
    iVar2 = fn_82F6DFB0();
    if (iVar2 != 0) {
      *param_3 = uVar5;
      *param_4 = uVar5;
      return;
    }
    *param_3 = 0xfff0000000000000;
  }
  else {
    piVar4 = *(int **)(param_1 + 0x10);
    if (piVar4 != (int *)0x0) {
      do {
        if (*piVar4 == 1) break;
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
      if (piVar4 != (int *)0x0) {
        *param_3 = *(unsigned __int64 *)((int)((param_2 + 1 & 0xffffffff) << 3) + (int)piVar4);
        *param_4 = *(unsigned __int64 *)((int)((param_2 + 5 & 0xffffffff) << 3) + (int)piVar4);
        return;
      }
    }
    if (uVar1 == 0x7c) {
      uVar1 = *(unsigned int *)(param_1 + 8);
      iVar2 = fn_82ABDD90(*(unsigned int *)(*(int *)(param_1 & 0xfffff000) + 0x94),uVar1 >> 7 & 0x7f,
                           uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
      uVar5 = lbl_82005758;
      if ((*(unsigned int *)(iVar2 + (param_1 - 8)) & 0x60000000) == 0x20000000) {
        *param_3 = lbl_82005710;
        *param_4 = uVar5;
        return;
      }
    }
    cVar3 = fn_82B80F70(*(unsigned short *)(param_1 + 0xe) >> ((unsigned int)((param_2 & 0xffffffff) << 2) & 0x3c)
                          & 0xf,param_3,param_4);
    if (cVar3 != '\0') {
      return;
    }
    *param_3 = 0xfff0000000000000;
  }
  *param_4 = 0x7ff0000000000000;
  return;
}

