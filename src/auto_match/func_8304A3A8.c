extern int fn_82FA5100();
extern int fn_8307DBA0();
extern int fn_8307E7A8();
extern unsigned int lbl_831BC770;


unsigned __int64 fn_8304A3A8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar1 = fn_8307DBA0(1,param_1 + 0x48);
  uVar2 = fn_82FA5100(lbl_831BC770,uVar1,0x100);
  *(int *)(param_1 + 0x70) = (int)uVar2;
  if (((uVar2 & 0xffffffff) != 0) &&
     (iVar3 = fn_8307E7A8(1,param_1 + 0x48,2,param_1 + 0x28,uVar2,uVar1), iVar3 == 0)) {
    return 1;
  }
  return 2;
}

