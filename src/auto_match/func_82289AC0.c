extern unsigned int *auStack_7e;
extern int fn_8225C590();
extern int fn_82F691F0();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82289AC0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char auStack_7e [126];
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 4) == 0) {
    if (((*(int *)(*(int *)(iVar1 + 0x11f0) + 0x18b8) == 1) && (*(int *)(iVar1 + 0x6a0) == 2)) &&
       ((*(int *)(iVar1 + 0x6e8) == 1 || (*(int *)(iVar1 + 0x6e8) == 0)))) {
      uVar2 = 5;
    }
    else {
      uVar2 = 7;
    }
    *(unsigned int *)(iVar1 + 0x604) = uVar2;
  }
  else if (*(int *)(param_1 + 4) == 1) {
    fn_8225C590();
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_7e,0,0x3e);
  }
  return;
}

