typedef unsigned char bool;
#define true 1


void fn_8282F920(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  uVar2 = 0;
  uVar4 = 1;
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  do {
    *param_3 = param_2;
    uVar3 = *param_2;
    if (uVar3 == uVar4) {
      do {
        if (*(unsigned int *)(param_1 + 0xac) <= uVar2) break;
        uVar2 = uVar2 + 1;
        param_2 = param_2 + 5;
        if (uVar2 < *(unsigned int *)(param_1 + 0xac)) {
          uVar3 = *param_2;
        }
      } while (uVar3 == uVar4);
    }
    param_3 = param_3 + 1;
    bVar1 = *(unsigned int *)(param_1 + 0x28) <= uVar4;
    uVar4 = uVar4 + 1;
    if (bVar1) {
      return;
    }
  } while( true );
}

