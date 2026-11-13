#define true 1
extern int fn_82AB15D0();


unsigned __int64 fn_82BC2FA8(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  char cVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  piVar1 = *(int **)((param_2 + 0x3a) * 4 + param_1);
  while( true ) {
    if ((param_3 == (int *)0x0) || (uVar4 != 0)) {
      return 0;
    }
    puVar2 = (unsigned int *)(param_3 + 0x39);
    if (((*puVar2 & 1) != 0) && (piVar1 == param_3)) break;
    param_3 = (int *)param_3[2];
    uVar4 = (~(unsigned __int64)*puVar2 & 0xffffffff) >> 2 & 1;
  }
  if (((param_2 != *(int *)(param_1 + 0x14)) || ((*(unsigned int *)(param_1 + 0xe4) >> 9 & 1) == 0)) &&
     (cVar3 = (**(int (***)())(*piVar1 + 0x34))(), cVar3 == '\0')) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3c28,0xffffffff820e3b18,0x287);
  }
  return 1;
}

