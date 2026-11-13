extern int fn_82C44D10();
extern int fn_82C53960();
extern int fn_82C56178();
extern int fn_82CBBD68();
extern int fn_82F691F0();


unsigned __int64 fn_82C563D8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff80000001;
  }
  if ((param_2 & 0xffffffff) == 0) {
    if ((param_3 & 0xffffffff) != 0) goto LAB_82c564c4;
  }
  else if ((param_3 & 0xffffffff) == 0) goto LAB_82c564c4;
  uVar1 = fn_82C53960(0x1c,0);
  if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,0x1c);
  }
  *param_1 = (int)uVar1;
  if (((((uVar1 & 0xffffffff) != 0) && (RtlInitializeCriticalSection(uVar1), *param_1 != 0)) &&
      (iVar2 = fn_82CBBD68(param_1 + 1,0x80), iVar2 != 0)) &&
     (((iVar2 = fn_82CBBD68(param_1 + 4,0x80), iVar2 != 0 &&
       (iVar2 = fn_82CBBD68(param_1 + 7,0x80), iVar2 != 0)) &&
      ((iVar2 = fn_82CBBD68(param_1 + 10,0x80), iVar2 != 0 &&
       (iVar2 = fn_82C44D10(param_1 + 0xd,param_2,param_3,param_1), iVar2 == 0)))))) {
    return 0;
  }
LAB_82c564c4:
  fn_82C56178(param_1);
  return 0xffffffff80000001;
}

