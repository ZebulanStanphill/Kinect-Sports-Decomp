typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int iStack00000020;
extern unsigned int uStack00000024;


void fn_82FF2248(int *param_1,int *param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iStack00000020;
  unsigned int uStack00000024;
  
  piVar1 = (int *)*param_2;
  piVar2 = (int *)param_2[1];
  *param_1 = (int)piVar1;
  if (piVar1 == piVar2) {
    return;
  }
  uStack00000024 = (unsigned int)param_3;
  iStack00000020 = (int)((unsigned __int64)param_3 >> 0x20);
  while( true ) {
    piVar1 = (int *)*param_1;
    if ((*piVar1 != iStack00000020) ||
       (bVar3 = true, ((piVar1[1] ^ uStack00000024) & 0x80000000) != 0)) {
      bVar3 = false;
    }
    if (bVar3) break;
    *param_1 = (int)(piVar1 + 3);
    if (piVar1 + 3 == piVar2) {
      return;
    }
  }
  return;
}

