typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AE7110();
extern int fn_82B50AA8();
extern int fn_82B50B00();


unsigned __int64 fn_82B524E8(int param_1,unsigned __int64 param_2)

{
  bool bVar1;
  unsigned int *puVar2;
  char cVar4;
  int iVar3;
  
  puVar2 = (unsigned int *)fn_82AE7110(param_1,param_2,0,0);
  do {
    if (puVar2[1] == 0) {
      cVar4 = fn_82B50AA8(puVar2);
      bVar1 = true;
      if (cVar4 != '\0') goto LAB_82b52530;
    }
    else {
LAB_82b52530:
      bVar1 = false;
    }
    if (bVar1) {
      *puVar2 = *(unsigned int *)(param_1 + 0x3ec);
      *(unsigned int **)(param_1 + 0x3ec) = puVar2;
      return 0;
    }
    iVar3 = fn_82B50B00(puVar2);
    if (iVar3 < 0x27) {
      if (iVar3 < 0x21) {
        if (iVar3 < 0x16) {
          return 1;
        }
        if ((0x19 < iVar3) && (iVar3 != 0x1b)) {
          if (iVar3 < 0x1d) {
            return 1;
          }
          if (0x1e < iVar3) {
            return 1;
          }
        }
      }
    }
    else if ((iVar3 < 0x2a) ||
            ((0x2b < iVar3 && ((iVar3 < 0x2d || ((0x2f < iVar3 && (iVar3 != 0x37)))))))) {
      return 1;
    }
    puVar2[1] = 0;
  } while( true );
}

