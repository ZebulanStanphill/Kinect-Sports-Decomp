extern int fn_82D7C038();


void fn_82DB0380(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  iVar2 = 0;
  if (0 < *(int *)(param_3 + 0x60)) {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      uVar4 = *(unsigned int *)(iVar1 + *(int *)(param_3 + 0x5c));
      iVar1 = iVar1 + 4;
      if (iVar2 == *(int *)(param_3 + 0x60)) {
        uVar3 = *(int *)(param_3 + 0x58) + uVar4;
      }
      else {
        uVar3 = uVar4 + 0x200;
      }
      for (; uVar4 < uVar3; uVar4 = *(unsigned char *)(uVar4 + 3) + uVar4) {
        fn_82D7C038(param_1,param_2,uVar4,param_4,param_5,param_6);
      }
    } while (iVar2 < *(int *)(param_3 + 0x60));
  }
  return;
}

