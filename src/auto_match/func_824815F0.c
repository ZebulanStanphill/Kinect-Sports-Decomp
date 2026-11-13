extern int fn_822315A0();
extern int fn_8225F160();
extern int fn_8229E090();
extern int fn_823AB478();
extern int fn_824C04E0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828B25C8();
extern int fn_828B2BF8();
extern int fn_82F68CC0();
extern unsigned int lbl_83265988;


void fn_824815F0(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar3;
  __int64 lVar6;
  
  if (param_1 == 2) {
    *(unsigned int *)(param_2 + 0xb4) = 0;
  }
  else {
    fn_8229E090(*(unsigned int *)(param_2 + 0xb4),0,1);
    *(unsigned int *)(param_2 + 0xb4) = 0;
    if (param_1 != 0) {
      iVar4 = fn_8225F160();
      uVar1 = *(unsigned int *)(iVar4 + 0x38);
      lVar6 = (unsigned __int64)uVar1 - 1;
      *(unsigned int *)(iVar4 + 0x38) = 1;
      if ((lVar6 - (((unsigned __int64)uVar1 - 2) + (unsigned __int64)(lVar6 == 0)) & 0xff) != 0) {
        fn_828B2BF8();
        fn_828B25C8();
      }
    }
  }
  iVar4 = *(int *)(param_2 + 0xa4);
  uVar5 = fn_823AB478(lbl_83265988);
  *(unsigned int *)(iVar4 + 0x54) = uVar5;
  uVar3 = fn_8265C9E0(0x428);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    fn_82F68CC0(uVar3,param_2 + 0x53c,0x428);
  }
  if ((uVar3 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(iVar4 + 0x5c)) {
    if ((unsigned __int64)*(unsigned int *)(iVar4 + 0x5c) != 0) {
      fn_8265CA20();
    }
    *(int *)(iVar4 + 0x5c) = (int)uVar3;
  }
  *(unsigned __int64 *)(iVar4 + 0x60) = 0;
  iVar2 = *(int *)(iVar4 + 0x6c);
  *(unsigned int *)(iVar4 + 0x6c) = 0;
  *(unsigned int *)(iVar4 + 0x68) = 0;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  fn_824C04E0(iVar4,1);
  return;
}

