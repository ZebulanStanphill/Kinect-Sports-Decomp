extern int fn_82F50BD8();
extern int fn_82F526B8();
extern int fn_82F52700();


int fn_82F52850(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  __int64 lVar4;
  
  lVar4 = 9;
  iVar3 = param_1;
  do {
    fn_82F50BD8(iVar3);
    lVar4 = lVar4 + -1;
    iVar3 = iVar3 + 0xd00;
  } while (-1 < lVar4);
  puVar1 = (unsigned int *)fn_82F526B8(0xc);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  piVar2 = (int *)(param_1 + 0x8200);
  *piVar2 = (int)puVar1;
  *puVar1 = 0;
  *(unsigned int *)(*piVar2 + 4) = 0;
  *(unsigned int *)(*piVar2 + 8) = 0;
  fn_82F52700(param_1);
  return param_1;
}

