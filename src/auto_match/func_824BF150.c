extern int fn_8225F160();
extern int fn_82471140();
extern int fn_824BF690();


void fn_824BF150(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  
  iVar1 = fn_8225F160();
  iVar2 = param_1 + 0x34;
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0xac) / (unsigned __int64)*(unsigned int *)(iVar1 + 0x68);
  fn_824BF690(iVar2);
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28)) {
    if (*(int *)(param_1 + 0xbc) == 0) {
      uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x24);
      uVar3 = *(unsigned int *)(param_1 + 0x28);
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        fn_82471140(iVar2,uVar5);
        uVar5 = uVar5 + 0x28;
        if ((uVar5 & 0xffffffff) == (unsigned __int64)uVar3) {
          uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x24);
        }
      }
    }
    else {
      uVar3 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x24);
        uVar5 = 0;
        iVar1 = *(int *)(param_1 + 0x28);
        if (uVar4 != 0) {
          do {
            if (iVar6 == iVar1) {
              if ((uVar5 & 0xffffffff) == 0) break;
              iVar6 = *(int *)(param_1 + 0x24);
            }
            if (*(unsigned int *)(iVar6 + 0x20) == uVar3) {
              fn_82471140(iVar2,iVar6);
              uVar5 = uVar5 + 1;
            }
            iVar6 = iVar6 + 0x28;
          } while ((uVar5 & 0xffffffff) < uVar4);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 4);
    }
  }
  return;
}

