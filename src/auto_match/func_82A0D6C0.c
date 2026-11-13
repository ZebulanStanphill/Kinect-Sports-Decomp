extern unsigned int lbl_82002AE0;


void fn_82A0D6C0(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  uVar1 = lbl_82002AE0;
  puVar2 = (unsigned int *)(param_2 + 0xdc);
  lVar3 = 3;
  do {
    if (param_1[1] == puVar2[-6]) {
      *puVar2 = param_1[2];
    }
    else {
      *puVar2 = uVar1;
    }
    puVar2 = puVar2 + 1;
    lVar3 = lVar3 + -1;
    param_1 = param_1 + 2;
  } while (lVar3 != 0);
  return;
}

