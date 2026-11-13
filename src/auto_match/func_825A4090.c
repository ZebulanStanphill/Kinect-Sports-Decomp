extern int fn_8253D5A0();
extern int fn_82CEA280();


unsigned __int64 fn_825A4090(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int iVar5;
  int iVar6;
  
  iVar4 = fn_82CEA280(param_1 + 0x10,param_3,0xffffffffffffffff);
  if (iVar4 == -1) {
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)(*(int *)(param_1 + 4) + iVar4 * 0x28);
    iVar6 = 0;
    iVar1 = piVar2[2];
    if (-1 < iVar1) {
      iVar5 = 0;
      do {
        if (*(int *)(iVar5 + *piVar2) != -1) break;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 8;
      } while (iVar6 <= iVar1);
    }
    if (iVar6 <= iVar1) {
      do {
        if (*(int *)(*(int *)(*(int *)(iVar6 * 8 + *piVar2 + 4) * 0x60 +
                              *(int *)(*(int *)(param_1 + 4) + iVar4 * 0x28 + 0x1c) + 0x50) + 8) !=
            0) {
          fn_8253D5A0(param_2 + 0x1f0,param_2);
        }
        iVar1 = piVar2[2];
        iVar6 = iVar6 + 1;
        if (iVar6 <= iVar1) {
          iVar5 = iVar6 * 8;
          do {
            if (*(int *)(iVar5 + *piVar2) != -1) break;
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 8;
          } while (iVar6 <= iVar1);
        }
      } while (iVar6 <= iVar1);
    }
    uVar3 = 1;
  }
  return uVar3;
}

