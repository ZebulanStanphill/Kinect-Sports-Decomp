extern int fn_82AA66A8();
extern int fn_82B52E60();
extern int fn_82B53DA8();


void fn_82B54048(int param_1,int param_2,unsigned int param_3,int param_4,unsigned __int64 param_5,
                  unsigned int param_6)

{
  int iVar1;
  
  param_2 = param_2 * 0x28;
  if ((*(unsigned int *)(param_2 + *(int *)(param_1 + 0xc) + 4) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  if ((*(unsigned int *)(param_4 + 0x2c) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdac,0xffffffff820d8970);
  }
  if (0x3fff < *(unsigned int *)(param_4 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdbf);
  }
  if (*(int *)(param_4 + 0x48) != 0) {
    fn_82B52E60(param_1);
  }
  *(unsigned int *)(param_2 + *(int *)(param_1 + 0xc)) =
       (*(unsigned int *)(param_4 + 0x14) & 0x3fff) << 3 |
       *(unsigned int *)(param_2 + *(int *)(param_1 + 0xc)) & 0xfffe0007;
  *(unsigned int *)(param_2 + *(int *)(param_1 + 0xc) + 0x14) = *(unsigned int *)(param_4 + 0x30);
  *(int *)(param_2 + *(int *)(param_1 + 0xc) + 0x10) = param_4;
  *(unsigned int *)(param_2 + *(int *)(param_1 + 0xc) + 0xc) = param_3;
  *(unsigned int *)(param_2 + *(int *)(param_1 + 0xc) + 0x20) = param_6;
  iVar1 = param_2 + *(int *)(param_1 + 0xc);
  *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(iVar1 + 8) | 0x7ffff;
  iVar1 = param_2 + *(int *)(param_1 + 0xc);
  *(unsigned int *)(iVar1 + 8) =
       (unsigned int)((param_5 & 0xffffffff) << 0x13) & 0x380000 | *(unsigned int *)(iVar1 + 8) & 0xffc7ffff;
  iVar1 = param_2 + *(int *)(param_1 + 0xc);
  *(unsigned int *)(iVar1 + 4) = *(unsigned int *)(iVar1 + 4) | 1;
  iVar1 = param_2 + *(int *)(param_1 + 0xc);
  *(unsigned int *)(iVar1 + 4) = *(unsigned int *)(iVar1 + 4) | 0x70;
  if (*(int *)(param_4 + 0x30) != 0) {
    fn_82B53DA8(param_1,param_2 + *(int *)(param_1 + 0xc),*(unsigned int *)(param_4 + 0x2c),
                  *(int *)(param_4 + 0x30),param_5);
  }
  return;
}

