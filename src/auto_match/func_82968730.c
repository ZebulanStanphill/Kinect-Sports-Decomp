typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82968730(int param_1)

{
  int iVar1;
  bool bVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  
  bVar2 = false;
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 + *(int *)(param_1 + 0x14));
      if (*(int *)(iVar6 + 0x38) != -1) {
        iVar1 = *(int *)(*(int *)(iVar6 + 0x38) * 4 + *(int *)(param_1 + 0x14));
        *(unsigned int *)(iVar6 + 4) = *(unsigned int *)(iVar1 + 4);
        *(unsigned int *)(iVar6 + 8) = *(unsigned int *)(iVar1 + 8);
        *(unsigned int *)(iVar6 + 0xc) = *(unsigned int *)(iVar1 + 0xc);
        *(unsigned int *)(iVar6 + 0x10) = *(unsigned int *)(iVar1 + 0x10);
        *(unsigned int *)(iVar6 + 0x48) = *(unsigned int *)(iVar1 + 0x48);
        *(unsigned int *)(iVar6 + 0x4c) = *(unsigned int *)(iVar1 + 0x4c);
        *(unsigned int *)(iVar6 + 0x50) = *(unsigned int *)(iVar1 + 0x50);
        uVar5 = *(unsigned int *)(iVar1 + 0x54);
        if (uVar5 == 0xffffffff) {
          *(unsigned int *)(iVar1 + 0x54) = *(unsigned int *)(iVar6 + 0x54);
          *(unsigned int *)(iVar1 + 0x58) = *(unsigned int *)(iVar6 + 0x58);
          iVar6 = *(int *)(iVar6 + 0x5c);
        }
        else {
          if (*(unsigned int *)(iVar6 + 0x54) <= uVar5) {
            uVar5 = *(unsigned int *)(iVar6 + 0x54);
          }
          *(unsigned int *)(iVar6 + 0x54) = uVar5;
          *(unsigned int *)(iVar1 + 0x54) = uVar5;
          uVar5 = *(unsigned int *)(iVar1 + 0x58);
          if (*(unsigned int *)(iVar1 + 0x58) <= *(unsigned int *)(iVar6 + 0x58)) {
            uVar5 = *(unsigned int *)(iVar6 + 0x58);
          }
          *(unsigned int *)(iVar6 + 0x58) = uVar5;
          *(unsigned int *)(iVar1 + 0x58) = uVar5;
          iVar6 = *(int *)(iVar6 + 0x5c) + *(int *)(iVar1 + 0x5c);
        }
        *(int *)(iVar1 + 0x5c) = iVar6;
        bVar2 = true;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < *(unsigned int *)(param_1 + 8));
    if ((bVar2) && (uVar3 = 0, *(unsigned int *)(param_1 + 8) != 0)) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)(iVar4 + *(int *)(param_1 + 0x14));
        iVar6 = *(int *)(iVar1 + 0x38);
        if (iVar6 != -1) {
          *(unsigned int *)(iVar1 + 0x54) =
               *(unsigned int *)(*(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x54);
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar3 < *(unsigned int *)(param_1 + 8));
    }
  }
  return 0;
}

