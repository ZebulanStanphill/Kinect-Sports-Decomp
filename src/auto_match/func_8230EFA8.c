extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_822C8C08();
extern int fn_8230E260();
extern int fn_82356F98();
extern int fn_823CC298();
extern int fn_823DB6B8();
extern unsigned int ltcg_pool_0_0f;


void fn_8230EFA8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned char auStack_50 [56];
  
  uVar4 = 1;
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x200) = 1;
  if (*(int *)(param_1 + 0x158) == 0) {
    piVar1 = *(int **)(((unsigned int)LZCOUNT(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x2c)) >> 3 & 4) +
                      **(int **)(*(int *)(param_1 + 0x10) + 8));
    iVar2 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),0);
    *(unsigned int *)(iVar2 + 0x200) = uVar4;
  }
  if (*(int *)(param_1 + 0x490) != 0) {
    iVar3 = fn_82356F98(auStack_50);
    iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x4b0);
    if (iVar2 != 0) {
      fn_823DB6B8((double)ltcg_pool_0_0f,iVar2,iVar3,0);
    }
    if (*(int *)(iVar3 + 4) != 0) {
      fn_822315A0();
    }
  }
  if (*(char *)(param_1 + 0x441) == '\0') {
    fn_823CC298(*(unsigned int *)(*(int *)(param_1 + 0x10) + 0x4b8),1);
  }
  iVar2 = fn_8230E260(param_1);
  if ((iVar2 != 0) && (iVar2 = fn_8230E260(param_1), iVar2 != 0)) {
    fn_822C8C08(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x114),0xffffffff821aca8c);
  }
  return;
}

