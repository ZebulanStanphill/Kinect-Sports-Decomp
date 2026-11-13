extern int fn_82975B00();
extern int fn_82996970();


unsigned __int64 fn_8299BD58(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  
  uVar4 = param_3;
  puVar3 = param_2;
  iVar1 = fn_82996970(*param_2 & 0xfff00000);
  if ((iVar1 != 0) && (puVar3[5] != 0)) {
    if ((uVar4 & 0xffffffff) != 0) {
      fn_82975B00(param_1,puVar3[0xf],0x1194,0xffffffff820512b4);
      return 0;
    }
    param_3 = param_3 + 1;
  }
  uVar5 = 0;
  if (param_2[5] != 0) {
    iVar1 = 0;
    do {
      iVar2 = fn_8299BD58(param_1,*(unsigned int *)
                                     (*(int *)(param_2[6] + iVar1) * 4 + *(int *)(param_1 + 0x18)),
                            param_3);
      if (iVar2 == 0) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      iVar1 = iVar1 + 4;
    } while (uVar5 < param_2[5]);
  }
  return 1;
}

