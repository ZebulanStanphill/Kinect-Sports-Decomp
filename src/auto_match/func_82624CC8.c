extern int fn_828EA268();


void fn_82624CC8(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  
  if ((int)param_2 != 0) {
    puVar5 = (unsigned int *)(param_1 + 0x10);
    do {
      uVar1 = puVar5[-4];
      if ((uVar1 == 0) || (uVar1 == 1)) {
        uVar1 = fn_828EA268(puVar5[-1]);
        *puVar5 = uVar1;
      }
      else if (uVar1 < 3) {
        uVar1 = 0;
        uVar2 = 0;
        uVar3 = 1;
        uVar4 = 0;
        if (*puVar5 != 0) {
          do {
            uVar4 = uVar4 + 1;
            uVar2 = uVar3 | uVar1;
            uVar3 = uVar3 << 1;
            uVar1 = uVar2;
          } while (uVar4 < *puVar5);
        }
        puVar5[1] = uVar2;
      }
      param_2 = param_2 + -1;
      puVar5 = puVar5 + 6;
    } while (param_2 != 0);
  }
  return;
}

