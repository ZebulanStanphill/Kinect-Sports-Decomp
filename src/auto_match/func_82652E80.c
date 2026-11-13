extern int fn_8263CBB0();


void fn_82652E80(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0;
  puVar2 = (unsigned int *)0x831beb70;
  do {
    iVar1 = (int)((uVar3 & 0xffffffff) >> 2);
    *(unsigned int *)((iVar1 + 0x10) * 4 + param_1) = puVar2[1];
    *(unsigned int *)((iVar1 + 0x89) * 4 + param_1) = *puVar2;
    (**(int (***)())((int)uVar3 + param_1 + 0x40))(param_1,puVar2[2]);
    uVar3 = uVar3 + 4;
    puVar2 = puVar2 + 3;
  } while ((uVar3 & 0xffffffff) < 0x194);
  uVar3 = 0;
  puVar2 = (unsigned int *)0x831bf038;
  do {
    iVar1 = (int)((uVar3 & 0xffffffff) >> 2);
    *(unsigned int *)((iVar1 + 0x75) * 4 + param_1) = puVar2[-1];
    *(unsigned int *)((iVar1 + 0xee) * 4 + param_1) = puVar2[-2];
    (**(int (***)())((int)uVar3 + param_1 + 0x1d4))(param_1,0,*puVar2);
    uVar3 = uVar3 + 4;
    puVar2 = puVar2 + 3;
  } while ((uVar3 & 0xffffffff) < 0x50);
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(param_1,0,0,0x80000000);
}

