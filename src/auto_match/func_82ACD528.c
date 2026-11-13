typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ACD310();
extern int fn_82ACD3D8();


unsigned __int64 fn_82ACD528(int param_1,int param_2)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x3c);
  uVar1 = *(unsigned int *)(param_2 + 0x14) & 0x1fff;
  do {
    if ((iVar4 == 0) || (uVar3 = *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x14) & 0x1fff, uVar1 < uVar3)
       ) {
      return 1;
    }
    if (uVar1 == uVar3) {
      uVar3 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
      if ((uVar3 < 0x20) || (bVar2 = true, 0x52 < uVar3)) {
        bVar2 = false;
      }
      if (bVar2) {
        return 1;
      }
    }
    iVar4 = fn_82ACD3D8(param_1);
    if (iVar4 != 0) {
      if (iVar4 == 2) {
        iVar4 = fn_82ACD310(param_1,*(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x1c));
        if (iVar4 != *(int *)(param_1 + 0x3c)) {
          return 0;
        }
        iVar4 = 0;
        *(unsigned char *)(param_1 + 0x48) = 0;
      }
      if (iVar4 != 0) {
        return 0;
      }
    }
    iVar4 = *(int *)(param_1 + 0x3c);
  } while( true );
}

