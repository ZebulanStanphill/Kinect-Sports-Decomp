extern int fn_82FA5060();
extern int fn_82FAA318();
extern int fn_82FAD390();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_82FAD5B0(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar1 = fn_82FA5060(lbl_831BC768,0x50);
  if (((uVar1 & 0xffffffff) != 0) &&
     (iVar2 = fn_82FAA318(uVar1,0xffffffffffffffff,0), iVar2 != 0)) {
    *(unsigned char *)(iVar2 + 0x4c) = 1;
    uVar3 = fn_82FAD390(param_1);
    *(unsigned int *)(*(int *)(param_1 + 4) + 0xc) = uVar3;
    if (*(int *)(param_1 + 4) == 0) {
      *(int *)(param_1 + 8) = iVar2;
      *(int *)(param_1 + 4) = iVar2;
      *(unsigned int *)(iVar2 + 4) = 0;
    }
    else {
      *(int *)(iVar2 + 4) = *(int *)(param_1 + 4);
      *(int *)(param_1 + 4) = iVar2;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0x10) = iVar2;
    return 1;
  }
  return 2;
}

