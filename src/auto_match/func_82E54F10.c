extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82F63CA0();


unsigned __int64 fn_82E54F10(int param_1,unsigned int param_2,short param_3)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  fn_82E50CB8(param_1 + 8);
  if (param_2 < *(unsigned int *)(param_1 + 0x58)) {
    if (*(unsigned int *)(param_1 + 0x58) <= param_2) {
      uVar4 = 0xffffffff8000ffff;
      goto LAB_82e54fa0;
    }
    piVar1 = *(int **)(param_2 * 4 + *(int *)(param_1 + 0x54));
    uVar3 = 0;
    if (piVar1[1] != 0) {
      iVar2 = 0;
      do {
        if (*(short *)(iVar2 + *piVar1) == param_3) {
          if (uVar3 < piVar1[2] - 1U) {
            iVar2 = uVar3 * 2 + *piVar1;
            fn_82F63CA0(iVar2,iVar2 + 2,(piVar1[2] - uVar3) - 1 & 0x7fffffff);
          }
          iVar2 = piVar1[1];
          piVar1[1] = iVar2 + -1;
          *(unsigned short *)((iVar2 + -1) * 2 + *piVar1) = 0;
          goto LAB_82e54fa0;
        }
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 2;
      } while (uVar3 < (unsigned int)piVar1[1]);
    }
  }
  uVar4 = 0xffffffff80070057;
LAB_82e54fa0:
  fn_82E50F10(param_1 + 8);
  return uVar4;
}

