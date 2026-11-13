extern int fn_829EC0F8();
extern int fn_82A28568();
extern unsigned int lbl_82079AD0;
extern unsigned int lbl_832179FC;


unsigned __int64
fn_829E8C48(int param_1,int param_2,int param_3,int param_4,int param_5,unsigned int param_6,
             unsigned __int64 param_7)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  if (((param_2 < 1) || (param_3 < 1)) || (param_4 < 1)) {
    uVar7 = 0xffffffff80070057;
    goto LAB_829e8c98;
  }
  iVar6 = 3;
  if ((int)param_7 == 2) {
    iVar6 = 0xf;
  }
  else if ((int)param_7 == 4) {
    iVar6 = 0x3f;
  }
  uVar8 = (unsigned __int64)(unsigned int)(param_4 * param_5) * (__int64)param_2 + (__int64)iVar6 &
          ~(__int64)iVar6;
  uVar2 = (__int64)param_3 * uVar8;
  if (uVar2 < 0x100000000) {
    piVar1 = *(int **)(param_1 + 0x2c);
    if ((piVar1 != (int *)0x0) && (1 < piVar1[3])) {
      (**(int (***)())(*piVar1 + 8))();
      *(unsigned int *)(param_1 + 0x2c) = 0;
    }
    puVar3 = *(unsigned int **)(param_1 + 0x2c);
    if (puVar3 == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)fn_82A28568(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,0x14);
      if (puVar3 == (unsigned int *)0x0) {
        puVar3 = (unsigned int *)0x0;
      }
      else {
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[4] = 0;
        puVar3[3] = 1;
        *puVar3 = &lbl_82079AD0;
      }
      *(unsigned int **)(param_1 + 0x2c) = puVar3;
      if (puVar3 == (unsigned int *)0x0) goto LAB_829e8cfc;
    }
    uVar4 = fn_829EC0F8(puVar3,uVar2 & 0xffffffff,param_7,0);
    if (uVar4 != 0) {
      *(unsigned int *)(param_1 + 0x28) = uVar4;
      *(int *)(param_1 + 0x10) = param_2;
      *(int *)(param_1 + 0x14) = param_3;
      *(int *)(param_1 + 0x18) = param_4;
      *(int *)(param_1 + 0x20) = param_5;
      *(int *)(param_1 + 0x1c) = param_4 * param_5;
      uVar5 = (unsigned int)uVar8;
      *(unsigned int *)(param_1 + 0x24) = uVar5;
      if ((uVar4 & 0x3f) == 0) {
        iVar6 = ((unsigned int)LZCOUNT(uVar5 & 0x3f) >> 5) + 3;
      }
      else if ((uVar4 & 0xf) == 0) {
        iVar6 = ((unsigned int)LZCOUNT(uVar5 & 0xf) >> 5) + 1;
      }
      else {
        iVar6 = 0;
      }
      *(int *)(param_1 + 0x30) = iVar6;
      *(unsigned int *)(param_1 + 8) = param_6;
      return 0;
    }
    puVar3 = *(unsigned int **)(param_1 + 0x2c);
    if (puVar3 != (unsigned int *)0x0) {
      (**(int (***)())*puVar3)(puVar3,1);
    }
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
LAB_829e8cfc:
  uVar7 = 0xffffffff8007000e;
LAB_829e8c98:
  *(int *)(param_1 + 4) = (int)uVar7;
  return uVar7;
}

