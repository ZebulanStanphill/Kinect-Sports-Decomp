extern int fn_82AA66A8();
extern int fn_82B53DA8();


void fn_82B53E88(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x28) != 0) {
    if (*(unsigned int *)(param_1 + 0x10) <= *(unsigned int *)(param_2 + 0x10)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if ((*(unsigned int *)(*(unsigned int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc) + 4) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if (0x3fff < *(unsigned int *)(param_2 + 0x14)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xdbf);
    }
    iVar1 = *(int *)(param_2 + 0x10) * 0x28;
    *(unsigned int *)(iVar1 + *(int *)(param_1 + 0xc)) =
         (*(unsigned int *)(param_2 + 0x14) & 0x3fff) << 3 |
         *(unsigned int *)(iVar1 + *(int *)(param_1 + 0xc)) & 0xfffe0007;
    iVar1 = *(int *)(param_2 + 0x10) * 0x28;
    *(unsigned int *)(iVar1 + *(int *)(param_1 + 0xc)) =
         param_3 & 7 | *(unsigned int *)(iVar1 + *(int *)(param_1 + 0xc)) & 0xfffffff8;
    *(unsigned int *)(*(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc) + 0x14) =
         *(unsigned int *)(param_2 + 0x28);
    *(unsigned int *)(*(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc) + 0x10) = 0;
    *(unsigned int *)(*(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc) + 0xc) = param_4;
    iVar1 = *(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(unsigned int *)(iVar1 + 4) = *(unsigned int *)(iVar1 + 4) | 4;
    iVar1 = *(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(unsigned int *)(iVar1 + 4) = *(unsigned int *)(iVar1 + 4) | 0x8000000;
    iVar1 = *(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(unsigned int *)(iVar1 + 4) = *(unsigned int *)(iVar1 + 4) | 0x70;
    iVar1 = *(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(iVar1 + 8) & 0xffc7ffff | 0x100000;
    iVar1 = *(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(unsigned int *)(iVar1 + 4) = *(unsigned int *)(iVar1 + 4) | 1;
    fn_82B53DA8(param_1,(unsigned __int64)*(unsigned int *)(param_2 + 0x10) * 0x28 +
                          (unsigned __int64)*(unsigned int *)(param_1 + 0xc),0x20,*(unsigned int *)(param_2 + 0x28),2
                 );
  }
  return;
}

