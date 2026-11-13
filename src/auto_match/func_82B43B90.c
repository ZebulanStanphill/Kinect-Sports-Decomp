extern int fn_82ABE5F8();
extern int fn_82AE60E8();
extern int fn_82F691F0();


void fn_82B43B90(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0((unsigned __int64)
                 *(unsigned int *)((-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4)) +
                          0x28) + 4,0,(unsigned __int64)(param_2 + 0x20U >> 5) << 2);
  }
  puVar3 = *(unsigned int **)(uVar1 + 0x28);
  lVar4 = (((unsigned __int64)(param_2 + 0x20U >> 3) & 0x1ffffffc) + 2) * 2 +
          ((((unsigned __int64)(param_2 + 1U) & 0x7fffffff) * 2 + 0x1f & 0xffffffff) >> 3 & 0x1ffffffc);
  if (puVar3 != (unsigned int *)0x0) {
    uVar2 = (unsigned __int64)*puVar3 & 0x7ffff;
    if (param_2 + 1U <= uVar2) goto LAB_82b43c5c;
    fn_82ABE5F8(param_1,puVar3,
                 ((uVar2 + 0x1f >> 3 & 0x1ffffffc) + 2) * 2 +
                 (((unsigned __int64)*puVar3 & 0x7ffff) * 2 + 0x1f >> 3 & 0x1ffffffc),0);
  }
  puVar3 = (unsigned int *)fn_82AE60E8(param_1,lVar4,0);
  *(unsigned int **)(uVar1 + 0x28) = puVar3;
LAB_82b43c5c:
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar3,0,lVar4);
}

