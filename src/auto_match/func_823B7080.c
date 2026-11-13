#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_20;
extern int fn_82250928();
extern int fn_823831D8();
extern int fn_823B8DA0();
extern int fn_823B9060();
extern int fn_823BAFF8();
extern int fn_825AD4B8();
extern int fn_8288B760();
extern int fn_828AAF70();
extern unsigned int ltcg_pool_0_0f;


void fn_823B7080(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  char cVar5;
  int *piVar4;
  __int64 lVar3;
  unsigned int auStack_20 [2];
  
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x50) = 1;
  uVar2 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x14) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x18) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x28) = uVar2;
  *(unsigned __int64 *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned __int64 *)(param_1 + 0x30) = 0;
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    cVar5 = fn_8288B760((unsigned __int64)*(unsigned int *)(param_1 + 0xc) - 0x68);
    if (cVar5 != '\0') {
      piVar4 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
      if (*(int *)(param_1 + 0xc) == 0) {
        piVar4 = (int *)0x0;
      }
      lVar3 = (**(int (***)())(*piVar4 + 8))();
      fn_823BAFF8(lVar3 + 0x9c);
      piVar4 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
      if (*(int *)(param_1 + 0xc) == 0) {
        piVar4 = (int *)0x0;
      }
      lVar3 = (**(int (***)())(*piVar4 + 8))();
      fn_823BAFF8(lVar3 + 0xf0);
      piVar4 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
      if (*(int *)(param_1 + 0xc) == 0) {
        piVar4 = (int *)0x0;
      }
      lVar3 = (**(int (***)())(*piVar4 + 0x44))();
      fn_823831D8(lVar3 + 0xa8);
    }
    piVar4 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
    if (*(int *)(param_1 + 0xc) == 0) {
      piVar4 = (int *)0x0;
    }
    lVar3 = (**(int (***)())(*piVar4 + 8))();
    fn_828AAF70(lVar3 + 0x144,0);
    piVar4 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
    if (*(int *)(param_1 + 0xc) == 0) {
      piVar4 = (int *)0x0;
    }
    lVar3 = (**(int (***)())(*piVar4 + 8))();
    fn_828AAF70(lVar3 + 0x198,0);
  }
  fn_825AD4B8(param_1 + 0x6c);
  fn_823B8DA0(param_1 + 0x94);
  puVar1 = *(unsigned int **)(param_1 + 0x60);
  auStack_20[0] = *puVar1;
  while( true ) {
    if ((unsigned __int64)auStack_20[0] == ZEXT48(puVar1)) break;
    fn_823B9060((unsigned __int64)auStack_20[0] + 0x18);
    fn_82250928(auStack_20);
    puVar1 = *(unsigned int **)(param_1 + 0x60);
  }
  return;
}

