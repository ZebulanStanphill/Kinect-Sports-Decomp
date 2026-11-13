typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AE7110();
extern int fn_82B50AA8();
extern int fn_82B50B00();
extern int fn_82B52E60();


void fn_82B53DA8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  bool bVar1;
  unsigned int *puVar2;
  char cVar4;
  int iVar3;
  
  puVar2 = (unsigned int *)fn_82AE7110(param_1,param_4,0,0);
  do {
    if (puVar2[1] == 0) {
      cVar4 = fn_82B50AA8(puVar2);
      bVar1 = true;
      if (cVar4 != '\0') goto LAB_82b53df8;
    }
    else {
LAB_82b53df8:
      bVar1 = false;
    }
    if (bVar1) {
      *puVar2 = *(unsigned int *)(param_1 + 0x3ec);
      *(unsigned int **)(param_1 + 0x3ec) = puVar2;
      return;
    }
    iVar3 = fn_82B50B00(puVar2);
    if (iVar3 == 0x21) {
      *(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_2 + 4) | 8;
LAB_82b53e54:
      *(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_2 + 4) & 0xffffff8f | 0x30;
    }
    else {
      if ((0x21 < iVar3) && (iVar3 < 0x26)) goto LAB_82b53e54;
      if (puVar2[4] != 0) {
        fn_82B52E60(param_1,param_2,param_3,puVar2[4],param_5,1);
      }
    }
    puVar2[1] = 0;
  } while( true );
}

