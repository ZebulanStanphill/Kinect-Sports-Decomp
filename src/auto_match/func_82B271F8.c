typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA6648();
extern int fn_82AF04D0();
extern int fn_82B1A538();
extern int fn_82B207C8();
extern int fn_82B25248();
extern unsigned int iStack_38;
extern unsigned int uStack_3c;


void fn_82B271F8(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  bool bVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int *puStack_40;
  unsigned int uStack_3c;
  int iStack_38;
  
  while (((param_2[1] & 1) == 0 && (param_2[1] != 0))) {
    puVar2 = (unsigned int *)(*param_2 & 0xfffffffe);
    puVar5 = puVar2 + -1;
    uVar6 = puVar2[1] - 1;
    puVar1 = (unsigned int *)puVar5[puVar2[1] + 3];
    puVar2[1] = uVar6;
    if (uVar6 == 0) {
      *(unsigned int *)(*puVar2 & 0xfffffffe) = *puVar5;
      *(unsigned int *)(*puVar5 & 0xfffffffe) = *puVar2;
      fn_82AA6648(param_2,puVar5,((unsigned __int64)puVar2[2] + 4 & 0x3fffffff) << 2);
    }
    iStack_38 = 0;
    uStack_3c = -(unsigned int)((puVar1[1] & 1) == 0) & puVar1[1];
    puStack_40 = puVar1;
    while( true ) {
      if ((uStack_3c == 0) || (bVar3 = false, iStack_38 == *(int *)(uStack_3c + 8))) {
        bVar3 = true;
      }
      if (bVar3) break;
      puVar4 = (unsigned int *)fn_82B1A538(&puStack_40);
      fn_82AF04D0(*puVar4,param_1);
      if ((param_3 & 0xffffffff) != 0) {
        fn_82B25248(param_1,*puVar4,param_3);
      }
    }
    fn_82B207C8(puVar1);
    *puVar1 = *(unsigned int *)(param_1 + 0x3d0);
    *(unsigned int **)(param_1 + 0x3d0) = puVar1;
  }
  *param_2 = *(unsigned int *)(param_1 + 0x3d0);
  *(unsigned int **)(param_1 + 0x3d0) = param_2;
  return;
}

