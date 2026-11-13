typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82B17248();
extern int fn_82B82D28();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_82B17848(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  bool bVar1;
  unsigned int uVar2;
  char cVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uStack_30;
  int iStack_2c;
  int aiStack_28;
  
  if ((*(unsigned int *)(param_2 + 8) & 0x3f80) == 0x3b00) {
    param_2 = *(int *)(*(int *)(param_2 + 0x30) + 0xc);
  }
  uVar5 = 0;
  uVar6 = 0;
  uVar2 = **(unsigned int **)(param_2 + 0x2c) >> 0x19 & 7;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      uVar6 = uVar6 + 1;
      uVar5 = 1 << ((**(unsigned int **)(param_2 + 0x2c) >> 5 & 0xff) >> (uVar4 & 0x3f) & 3) | uVar5;
      uVar4 = uVar4 + 2;
    } while (uVar6 < uVar2);
    if ((uVar5 != 0) && (bVar1 = true, uVar5 == (uVar5 & ~(uVar5 - 1)))) goto LAB_82b178d8;
  }
  bVar1 = false;
LAB_82b178d8:
  if (bVar1) {
    uStack_30 = 0;
    iStack_2c = param_2;
    do {
      fn_82B82D28(*(unsigned int *)(param_2 + 0x2c),uStack_30,&iStack_2c,&uStack_30,&aiStack_28,0
                        ,0,0);
      param_2 = iStack_2c;
      if ((*(unsigned int *)(iStack_2c + 8) & 0x3f80) != 0x3380) break;
      cVar3 = fn_82B17248(iStack_2c,param_1);
    } while (cVar3 != '\0');
    if ((param_2 == *(int *)(param_4 + 0x30)) && (aiStack_28 == 0)) {
      return 1;
    }
  }
  return 0;
}

