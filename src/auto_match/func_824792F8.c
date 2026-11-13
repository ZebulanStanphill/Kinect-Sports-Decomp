extern unsigned int *auStack_7e;
extern int fn_82280850();
extern int fn_82281530();
extern int fn_822815C8();
extern int fn_822848B8();
extern int fn_82284B08();
extern int fn_822A5480();
extern int fn_82F691F0();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824792F8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned char auStack_7e [126];
  
  if (*(int *)(param_2 + 0x14) != 0) {
    fn_822815C8();
    if (*(int *)(param_2 + 0x54) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_7e,0,0x3e);
    }
  }
  if (((*(int *)(param_2 + 0x58) != 0) && (param_4 != 0)) &&
     (iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x14) + 0x10) + 0x84), iVar1 != 0)) {
    if (*(int *)(*(int *)(param_2 + 0x58) + 0x100) < 0x33) {
      *(unsigned char *)(iVar1 + 0xb0) = 0;
    }
    else {
      *(unsigned char *)(iVar1 + 0xb0) = 1;
    }
  }
  if ((*(int *)(param_2 + 0x2c) != 0) &&
     (iVar1 = fn_82281530(*(unsigned int *)(param_2 + 0x14)), iVar1 == 0)) {
    if (*(int *)(param_2 + 0x28) != 0) {
      iVar1 = *(int *)(param_2 + 0x14);
      fn_82280850(*(unsigned int *)(iVar1 + 0x10));
      if (*(int *)(iVar1 + 0x24) != 0) {
        fn_822A5480(*(int *)(iVar1 + 0x24),0xffffffff820e975c);
      }
      if (*(int *)(iVar1 + 0x28) != 0) {
        fn_822A5480(*(int *)(iVar1 + 0x28),0xffffffff820e975c);
      }
      if (*(int *)(param_2 + 0x54) != 0) {
        fn_822848B8();
        *(unsigned int *)(param_2 + 0x54) = 0;
      }
    }
    *(unsigned int *)(param_2 + 0x28) = 0;
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    fn_82284B08(param_1);
  }
  return;
}

