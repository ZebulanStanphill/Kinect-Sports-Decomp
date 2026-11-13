extern int fn_829EC230();
extern int fn_82A28568();
extern unsigned int lbl_82079AD0;
extern unsigned int lbl_832179FC;


unsigned __int64
fn_829E8E50(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,int param_5,
             unsigned int param_6,int param_7,unsigned int param_8)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  
  if ((param_2 & 0xffffffff) != 0) {
    piVar1 = *(int **)(param_1 + 0x2c);
    if ((piVar1 != (int *)0x0) && (1 < piVar1[3])) {
      (**(int (***)())(*piVar1 + 8))();
      *(unsigned int *)(param_1 + 0x2c) = 0;
    }
    puVar2 = *(unsigned int **)(param_1 + 0x2c);
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)fn_82A28568(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,0x14);
      if (puVar2 == (unsigned int *)0x0) {
        puVar2 = (unsigned int *)0x0;
      }
      else {
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[4] = 0;
        puVar2[3] = 1;
        *puVar2 = &lbl_82079AD0;
      }
      *(unsigned int **)(param_1 + 0x2c) = puVar2;
      if (puVar2 == (unsigned int *)0x0) {
        *(unsigned int *)(param_1 + 4) = 0x8007000e;
        return 0xffffffff8007000e;
      }
    }
    uVar3 = fn_829EC230(puVar2,param_2);
    *(unsigned int *)(param_1 + 0x28) = uVar3;
    *(int *)(param_1 + 0x1c) = param_5 * param_7;
    *(unsigned int *)(param_1 + 0x10) = param_3;
    *(unsigned int *)(param_1 + 0x14) = param_4;
    *(int *)(param_1 + 0x18) = param_5;
    *(int *)(param_1 + 0x20) = param_7;
    *(unsigned int *)(param_1 + 0x24) = param_6;
    if ((param_2 & 0x3f) == 0) {
      iVar4 = ((unsigned int)LZCOUNT(param_6 & 0x3f) >> 5) + 3;
    }
    else if ((param_2 & 0xf) == 0) {
      iVar4 = ((unsigned int)LZCOUNT(param_6 & 0xf) >> 5) + 1;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x30) = iVar4;
    *(unsigned int *)(param_1 + 8) = param_8;
  }
  return 0;
}

