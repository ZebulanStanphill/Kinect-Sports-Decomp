extern int fn_82635FE8();
extern int fn_82636118();
extern int fn_82AA1DC0();


void fn_82AA2778(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar1 = fn_82635FE8(*(unsigned int *)(param_1 + 8));
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = fn_82636118(*(unsigned int *)(param_1 + 8),uVar3);
      fn_82AA1DC0(param_1,uVar2,0,0,0,uVar3);
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (uVar1 & 0xffffffff));
  }
  return;
}

