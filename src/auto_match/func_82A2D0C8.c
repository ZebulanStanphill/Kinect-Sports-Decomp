extern unsigned int lbl_8315D344;
extern unsigned int lbl_83219CE0;
extern unsigned int lbl_83219CE8;
extern unsigned int *lbl_83219CEC;
extern unsigned int lbl_83219D00;


unsigned __int64 fn_82A2D0C8(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int in_r13;
  
  iVar1 = *(int *)(in_r13 + 0x100);
  if (lbl_83219D00 == 0) {
    *(unsigned char *)(*(int *)(param_2 + 0x50) + 3) = *(unsigned char *)(*(int *)(param_2 + 0x50) + 3) | 1;
    if (iVar1 == lbl_83219CE0) {
      (*(int (**)())(&lbl_8315D344)[**(unsigned char **)(param_2 + 0x50)])
                (*(unsigned int *)(param_1 + 0x18),param_2);
    }
    else {
      uVar2 = KfAcquireSpinLock(0xffffffff83219ce4);
      *(unsigned char **)(param_2 + 0x30) = &lbl_83219CE8;
      *(int **)(param_2 + 0x34) = lbl_83219CEC;
      *lbl_83219CEC = param_2 + 0x30;
      lbl_83219CEC = (int *)(param_2 + 0x30);
      KfReleaseSpinLock(0xffffffff83219ce4,uVar2);
      KeSetEvent(0xffffffff83219cf0,1,0);
    }
    uVar2 = 0x103;
  }
  else {
    uVar2 = 0xffffffffc000026e;
  }
  return uVar2;
}

