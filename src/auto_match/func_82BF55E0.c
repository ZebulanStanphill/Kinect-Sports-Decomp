typedef unsigned char bool;
#define false 0
extern int fn_82BA02A8();
extern int fn_82BE5B80();
extern int fn_82BE5C30();
extern int fn_82BE5CC0();
extern int fn_82BE5F40();
extern int fn_82BE68A0();
extern int fn_82BE68F0();


bool fn_82BF55E0(int param_1)

{
  int iVar3;
  char cVar6;
  unsigned int uVar4;
  unsigned __int64 uVar1;
  int iVar5;
  __int64 lVar2;
  char cVar8;
  unsigned int uVar7;
  
  cVar8 = '\0';
  *(unsigned int *)(param_1 + 0x20) = 0;
  iVar3 = fn_82BE68A0();
  if ((iVar3 != 0) && (cVar6 = fn_82BE5C30(param_1), cVar6 == -0x2c)) {
    uVar4 = fn_82BE5CC0(param_1);
    iVar3 = *(int *)(param_1 + 0x20);
    uVar7 = 0;
    while (uVar7 < uVar4) {
      uVar1 = fn_82BE5C30(param_1);
      if ((uVar1 & 0xff) == 0x1e) {
        fn_82BE68F0(param_1,uVar1);
        fn_82BA02A8(param_1,*(unsigned int *)(param_1 + 0x30),0x14);
        uVar4 = uVar4 - 0x16;
        cVar8 = cVar8 + '\x01';
      }
      else {
        iVar5 = fn_82BE5F40();
        if (iVar5 == 0) {
          return false;
        }
      }
      uVar7 = *(int *)(param_1 + 0x20) - iVar3;
    }
    if (cVar8 == '\x01') {
      lVar2 = fn_82BE5B80(param_1);
      return lVar2 != 0;
    }
  }
  return false;
}

