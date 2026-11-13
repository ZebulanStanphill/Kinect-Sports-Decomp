extern int fn_82250A18();
extern int fn_82366AE8();
extern int fn_828AD740();
extern unsigned int lbl_832975B0;


void fn_82358A60(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  char cVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x30);
  if (piVar5 != *(int **)(param_1 + 0x34)) {
    do {
      uVar4 = 1;
      uVar1 = *(unsigned int *)(*(int *)(*piVar5 + 0x10) + 0x2c);
      iVar2 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar2 = fn_82250A18();
      }
      if (*(char *)(iVar2 + 4) != '\0') {
        cVar3 = fn_828AD740(*(unsigned int *)(param_1 + 4));
        if (cVar3 == '\0') {
          uVar4 = (-(unsigned __int64)uVar1 & ~(unsigned __int64)uVar1 & 0xffffffff) >> 0x1f;
        }
        else {
          uVar4 = (unsigned __int64)(uVar1 == 0);
        }
      }
      fn_82366AE8(*piVar5,uVar4);
      piVar5 = piVar5 + 2;
    } while (piVar5 != *(int **)(param_1 + 0x34));
  }
  return;
}

