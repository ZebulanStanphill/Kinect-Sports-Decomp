extern int fn_82FA5060();
extern int fn_82FAA318();
extern unsigned int lbl_831BC768;


int fn_82FAD1F0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  uVar1 = fn_82FA5060(lbl_831BC768,0x50);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82FAA318(uVar1,param_2,param_3);
    if (iVar2 != 0) {
      *(unsigned int *)(iVar2 + 4) = 0;
      if (*(int *)(param_1 + 8) == 0) {
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        *(int *)(*(int *)(param_1 + 8) + 4) = iVar2;
      }
      *(int *)(param_1 + 8) = iVar2;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      *(int *)(param_1 + 0x14) = iVar2;
    }
  }
  return iVar2;
}

