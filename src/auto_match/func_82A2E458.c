typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F68B6C();


void fn_82A2E458(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  bool bVar2;
  unsigned int *puVar3;
  
  bVar2 = false;
  puVar3 = param_1;
  while( true ) {
    for (puVar1 = (unsigned int *)*puVar3; puVar1 != puVar3; puVar1 = (unsigned int *)*puVar1) {
      if ((unsigned int)*(unsigned short *)((int)puVar1 + -0x12) == *(unsigned int *)(param_2 + 0x40) >> 6) {
        fn_82F68B6C(puVar1 + -0x12,0,param_2);
        return;
      }
    }
    if (bVar2) break;
    if ((*(unsigned char *)((int)param_1 + 0x35) & 4) == 0) {
      puVar3 = (unsigned int *)param_1[3];
      if (puVar3 == (unsigned int *)0x0) {
        return;
      }
    }
    else {
      puVar3 = param_1 + 0x10;
    }
    bVar2 = true;
  }
  return;
}

