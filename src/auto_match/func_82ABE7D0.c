extern int fn_82ABE190();


unsigned int fn_82ABE7D0(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  char cVar4;
  unsigned int uVar5;
  
  uVar5 = 0;
  for (uVar1 = *(unsigned int *)(param_2 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
    for (puVar2 = *(unsigned int **)(uVar1 + 4); puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[2]) {
      if ((((puVar2[4] != 0) && (uVar3 = *puVar2, (uVar3 & 0xe000000) != 0)) &&
          (cVar4 = fn_82ABE190(puVar2), cVar4 != '\0')) &&
         (uVar3 = uVar3 >> 0x11 & 0xff, uVar5 < uVar3)) {
        uVar5 = uVar3;
      }
    }
  }
  return uVar5;
}

