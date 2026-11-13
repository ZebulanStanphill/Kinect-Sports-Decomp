extern int fn_827C9958();
extern int fn_82F691F0();


void fn_827C9BB0(int param_1)

{
  int iVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  
  puVar3 = (unsigned int *)(*(int (**)())**(unsigned int **)(param_1 + 4))(param_1,1,0x54);
  *(unsigned int **)(param_1 + 0x19c) = puVar3;
  *puVar3 = fn_827C9958;
  iVar1 = *(int *)(param_1 + 0xc4);
  if (0 < *(int *)(param_1 + 0x24)) {
    uVar2 = (*(int (**)())**(unsigned int **)(param_1 + 4))(param_1,1,0x100);
    *(int *)(iVar1 + 0x50) = (int)uVar2;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar2,0,0x100);
  }
  return;
}

