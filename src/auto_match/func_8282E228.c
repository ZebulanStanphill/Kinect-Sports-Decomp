extern int fn_828252D8();
extern int fn_8282DDD8();


void fn_8282E228(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int lVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 0x2e4);
  puVar3 = (unsigned int *)(param_1 + 0x2dc);
  puVar4 = (unsigned int *)(param_1 + 0x5c);
  lVar2 = 2;
  do {
    uVar5 = *puVar3;
    if ((*(unsigned int *)(param_1 + 0x3dc) == 0) || (uVar5 == 0)) {
      ((int (*)())param_2[2])(*param_2,uVar5,uVar1);
      fn_8282DDD8(param_2,(uVar5 + 3 & 0xfffffffc) - uVar5);
      uVar1 = uVar5 + uVar1;
    }
    else {
      ((int (*)())param_2[2])(*param_2,uVar5,*puVar4);
      fn_828252D8(*puVar4);
      *puVar4 = 0;
    }
    lVar2 = lVar2 + -1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 5;
  } while (lVar2 != 0);
  return;
}

