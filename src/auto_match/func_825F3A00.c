extern int fn_825443D8();
extern int fn_8263CBB0();
extern unsigned int lbl_8320A898;


void fn_825F3A00(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = lbl_8320A898;
  if (*(int *)(param_1 + 0xd14) != 0) {
    *(unsigned int *)(param_1 + 0xd14) = 0;
    uVar2 = fn_825443D8(param_2);
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(uVar1,0,uVar2,0x80000000);
  }
  return;
}

