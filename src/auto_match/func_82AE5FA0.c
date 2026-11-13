extern int fn_82AA66A8();
extern int fn_82ACA4F0();
extern int fn_82AE58D8();


unsigned int fn_82AE5FA0(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar2 = fn_82AE58D8(param_1,0x1f,param_2,0xffffffff);
  if (uVar2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*param_1,0xdf2);
  }
  uVar3 = fn_82ACA4F0(uVar2 & 0xf,param_2);
  iVar1 = (int)(uVar2 >> 9) + 1;
  param_1[iVar1] = uVar3 << (uVar2 >> 4 & 0x1f) | param_1[iVar1];
  return uVar2 & 0xfffffff0 | uVar3 & 0xffffffff0000000f;
}

