extern int fn_82AA66A8();
extern int fn_82ABDCF8();
extern int fn_82AE4D28();
extern int fn_82AE6CC0();


void fn_82AE6D50(int param_1,int param_2,unsigned int *param_3,int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  puVar4 = (unsigned int *)(param_2 * 0x28 + *(int *)(param_1 + 0xc));
  uVar3 = puVar4[1];
  uVar1 = uVar3 >> 4 & 7;
  if (uVar1 == 0) {
    uVar3 = -(unsigned int)(((unsigned __int64)*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffffffffffff0000) &
            0x80;
    iVar2 = uVar3 + 0x80;
  }
  else if (uVar1 == 1) {
    uVar3 = -(unsigned int)(((unsigned __int64)*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffffffffffff0000) &
            0x10;
    iVar2 = uVar3 + 0x10;
  }
  else {
    if (2 < uVar1) {
      if (uVar1 == 3) {
        uVar3 = fn_82ABDCF8(param_1);
        iVar2 = fn_82AE4D28(param_1);
        iVar2 = iVar2 + uVar3;
        *param_3 = uVar3;
      }
      else {
        if ((*puVar4 & 0x1ff00000) < 0xff00001) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        if ((uVar3 & 0xff80) != 0) {
          iVar2 = fn_82AE6CC0(param_1);
          if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x119d,*(unsigned int *)(iVar2 + 0x18));
          }
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        iVar2 = 0;
        *param_3 = 0;
      }
      *param_4 = iVar2;
      return;
    }
    uVar3 = 0;
    iVar2 = 0x100;
  }
  *param_3 = uVar3;
  *param_4 = iVar2;
  return;
}

