extern int fn_82691248();
extern int fn_8270AC48();
extern unsigned int lbl_831F129C;


void fn_826913D8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  
  iVar3 = *(int *)(((unsigned int)param_2 >> 0x11 & 0x7ff8) + lbl_831F129C + 4);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(((unsigned int)param_2 >> 10 & 0x3fc) + iVar3);
  }
  uVar1 = 0x10;
  if (0xf < (param_3 & 0xffffffff)) {
    uVar1 = param_3;
  }
  fn_8270AC48(param_1 + 0x10,iVar3,param_2,
                    *(unsigned int *)(param_1 + 0x14) + uVar1 & ~(unsigned __int64)*(unsigned int *)(param_1 + 0x14));
  lVar2 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x10) - 1;
  *(int *)(iVar3 + 0x10) = (int)lVar2;
  if (lVar2 == 0) {
    fn_82691248(param_1,iVar3);
  }
  return;
}

