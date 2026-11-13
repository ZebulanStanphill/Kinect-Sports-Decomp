extern unsigned int *auStack_108;
extern int fn_82F691F0();


void fn_82AEDBE8(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned char auStack_108 [264];
  
  for (uVar1 = *(unsigned int *)(param_2 + 0x14); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
    *(unsigned int *)(uVar1 + 0x10) = *(unsigned int *)(uVar1 + 0x10) | 0x1000000;
    *(unsigned int *)(uVar1 + 0x14) = *(unsigned int *)(uVar1 + 0x14) | 0x1fff;
  }
  for (uVar1 = *(unsigned int *)(param_2 + 0x14); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
    puVar3 = (unsigned int *)(uVar1 + 4);
    for (iVar2 = *(int *)(uVar1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      puVar3 = (unsigned int *)(iVar2 + 8);
    }
    *puVar3 = 0x83223ca8;
    *(unsigned int *)(uVar1 + 0x14) = *(unsigned int *)(uVar1 + 0x14) & 0xfc001fff;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_108,0,0x24);
}

