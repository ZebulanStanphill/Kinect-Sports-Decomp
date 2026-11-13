extern int fn_82AA6648();


unsigned int fn_82B4DF70(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  
  if (param_1[1] & 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*param_1 & 0xfffffffe) - 4;
  }
  uVar1 = *(unsigned int *)(*(int *)(iVar4 + 8) * 8 + iVar4 + 0xc);
  if (param_1[1] & 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*param_1 & 0xfffffffe) - 4;
  }
  *param_2 = *(unsigned int *)((*(int *)(iVar4 + 8) + 1) * 8 + iVar4);
  if (param_1[1] & 1) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3 = (unsigned int *)((*param_1 & 0xfffffffe) - 4);
  }
  uVar2 = puVar3[2];
  puVar3[2] = uVar2 - 1;
  if (uVar2 - 1 == 0) {
    unsigned int *p = (unsigned int *)((unsigned int)puVar3 & ~1u);
    *(unsigned int *)(p[1] & ~1u) = p[0];
    *(unsigned int *)(p[0] & ~1u) = p[1];
    fn_82AA6648(param_1,puVar3,(puVar3[3] + 2) * 8);
  }
  return uVar1;
}

