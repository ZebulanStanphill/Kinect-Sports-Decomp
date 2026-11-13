extern int fn_82AA66A8();


void fn_82B0FC78(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  uVar1 = *(unsigned int *)(param_2 + 8);
  uVar2 = 0;
  uVar6 = 0;
  if ((uVar1 & 0x380000) != 0) {
    piVar3 = (int *)(param_2 + 0x2c);
    do {
      uVar5 = 0;
      piVar4 = (int *)(param_2 + 0x2c);
      if (uVar6 != 0) {
        do {
          if (*(int *)(*piVar3 + 0xc) == *(int *)(*piVar4 + 0xc)) break;
          uVar5 = uVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (uVar5 < uVar6);
      }
      if (uVar5 == uVar6) {
        uVar2 = (*(unsigned int *)(*(int *)(*piVar3 + 0xc) + 8) >> 0xe & 7) + uVar2;
      }
      uVar6 = uVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar6 < (uVar1 >> 0x13 & 7));
    if (4 < uVar2) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
  }
  *(unsigned int *)(param_2 + 8) =
       (uVar2 & 7) << 0xe | ((1 << (uVar2 & 0x3f)) - 1U & 0xf) << 1 | uVar1 & 0xfffe3fe1;
  return;
}

