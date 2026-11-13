extern int fn_82FAE140();
extern int fn_82FAE150();
extern int fn_82FAE168();
extern unsigned int lbl_8216CC20;


unsigned __int64 fn_82FA97D0(int param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  double dVar3;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[4] = 0;
  }
  else {
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x60);
    iVar2 = fn_82FAE140(uVar1);
    dVar3 = lbl_8216CC20;
    param_2[1] = (int)((double)(__int64)iVar2 * lbl_8216CC20);
    iVar2 = fn_82FAE168(uVar1);
    param_2[2] = (int)((double)(__int64)iVar2 * dVar3);
    iVar2 = fn_82FAE150(uVar1);
    param_2[3] = (int)((double)(__int64)iVar2 * dVar3);
    *param_2 = (int)((double)(__int64)(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0xc)) * dVar3)
    ;
    iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x68);
    if (iVar2 < 1) {
      param_2[4] = 0;
    }
    else {
      param_2[4] = (int)((double)(__int64)iVar2 * dVar3);
    }
  }
  return 1;
}

