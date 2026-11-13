typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_825737F0();
extern int fn_82CE4118();
extern int fn_82D89B48();
extern int fn_82D8B6C8();


void fn_825A8768(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  unsigned int uVar5;
  unsigned __int64 uVar4;
  
  uVar1 = *(unsigned int *)(param_1 + 0x748);
  for (uVar5 = *(unsigned int *)(param_1 + 0x744); uVar5 < uVar1; uVar5 = uVar5 + 0x10) {
    iVar2 = *(int *)(uVar5 + 4);
    if (iVar2 != 0) {
      if ((*(char *)(iVar2 + 0xe8) == '\x05') || (bVar3 = false, *(char *)(iVar2 + 0xe8) == '\x04'))
      {
        bVar3 = true;
      }
      if (!bVar3) {
        fn_82D8B6C8(iVar2,5,1,0);
        *(unsigned char *)(*(int *)(uVar5 + 4) + 0x2a) = 0;
      }
      iVar2 = *(int *)(uVar5 + 4);
      uVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x98);
      if (uVar4 != 0) {
        fn_82D89B48(iVar2,uVar4 + 8);
        *(unsigned int *)(iVar2 + 0x98) = 0;
        fn_82CE4118(uVar4);
        fn_825737F0(iVar2 + 0x200);
      }
      *(unsigned int *)(*(int *)(uVar5 + 4) + 0x2c) = 1;
    }
  }
  uVar1 = *(unsigned int *)(param_1 + 0x75c);
  for (uVar5 = *(unsigned int *)(param_1 + 0x758); uVar5 < uVar1; uVar5 = uVar5 + 0x3f0) {
    iVar2 = *(int *)(uVar5 + 0xd4);
    if (iVar2 != 0) {
      if ((*(char *)(iVar2 + 0xe8) == '\x05') || (bVar3 = false, *(char *)(iVar2 + 0xe8) == '\x04'))
      {
        bVar3 = true;
      }
      if (!bVar3) {
        fn_82D8B6C8(iVar2,5,1,0);
        *(unsigned char *)(*(int *)(uVar5 + 0xd4) + 0x2a) = 0;
      }
      iVar2 = *(int *)(uVar5 + 0xd4);
      uVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x98);
      if (uVar4 != 0) {
        fn_82D89B48(iVar2,uVar4 + 8);
        *(unsigned int *)(iVar2 + 0x98) = 0;
        fn_82CE4118(uVar4);
        fn_825737F0(iVar2 + 0x200);
      }
      *(unsigned int *)(*(int *)(uVar5 + 0xd4) + 0x2c) = 1;
    }
  }
  return;
}

