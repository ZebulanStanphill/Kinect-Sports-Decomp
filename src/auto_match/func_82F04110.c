extern unsigned int *auStack_10f0;
extern int fn_82F65350();
extern int fn_82F691F0();
extern int fn_82F6A530();
extern int fn_82F6A57C();


void fn_82F04110(void)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char auStack_10f0 [4336];
  
  iVar1 = fn_82F6A530();
  if (*(int *)(iVar1 + 0x1a74) != 0) {
    uVar2 = fn_82F65350();
    uVar2 = (unsigned int)((uVar2 & 0xf) == 0xf);
    *(unsigned int *)(iVar1 + 0x8a0) = uVar2;
    if (uVar2 != 0) {
      uVar2 = fn_82F65350();
      *(unsigned int *)(iVar1 + 0x8ac) = uVar2 & 0x3f;
      uVar2 = fn_82F65350();
      *(unsigned int *)(iVar1 + 0x8b0) = (uVar2 & 0x3f) - 0x20;
    }
    fn_82F6A57C(*(unsigned int *)(iVar1 + 0x8a0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_10f0,0,0x400,0xd,10,
               (__int64)*(int *)(iVar1 + 0x6de4) * (__int64)(*(int *)(iVar1 + 0x2d0) << 2),
               *(unsigned int *)(iVar1 + 0x1a90));
}

