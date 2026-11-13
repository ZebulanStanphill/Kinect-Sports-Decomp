extern unsigned int *auStack_f0;
extern int fn_82273C88();
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_82682D30();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_82696D38();
extern int fn_826A7398();
extern int fn_8274C458();
extern unsigned int stack0x00000000;


void fn_8274C4D0(int param_1)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  unsigned int *apuStack_100 [4];
  unsigned int auStack_f0 [60];
  
  iVar5 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
  if (*(int *)(iVar5 + 0x114) == 0) {
    fn_8274C458(param_1,0xffffffff82013444);
    puVar2 = *(unsigned char **)(param_1 + 4);
    fn_826959C8(puVar2);
    *puVar2 = 0;
    return;
  }
  uVar11 = 0;
  puVar10 = *(unsigned int **)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 8);
  puVar10[2] = puVar10[2] + 1;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar7 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    fn_82696D38(&stack0x00000000 + -0x100,uVar4,uVar7,0xffffffffffffffff,0);
    apuStack_100[0][2] = apuStack_100[0][2] + 1;
    uVar1 = puVar10[2];
    puVar10[2] = (int)((unsigned __int64)uVar1 - 1);
    if ((unsigned __int64)uVar1 - 1 == 0) {
      fn_826944C8(puVar10);
    }
    uVar1 = apuStack_100[0][2];
    apuStack_100[0][2] = (int)((unsigned __int64)uVar1 - 1);
    if ((unsigned __int64)uVar1 - 1 == 0) {
      fn_826944C8(apuStack_100[0]);
    }
    uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) - 1;
    puVar10 = apuStack_100[0];
    if (10 < (uVar11 & 0xffffffff)) {
      puVar6 = (unsigned int *)
               fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                                 (uVar11 & 0xfffffff) << 4,0);
      goto LAB_8274c5cc;
    }
  }
  puVar6 = (unsigned int *)(&stack0x00000000 + -0xf0);
LAB_8274c5cc:
  uVar9 = 0;
  puVar12 = puVar6;
  if ((uVar11 & 0xffffffff) != 0) {
    do {
      uVar9 = uVar9 + 1;
      uVar4 = fn_826957D0(param_1,uVar9);
      if (puVar12 == (unsigned int *)0x0) {
        puVar8 = (unsigned int *)0x0;
      }
      else {
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar8 = puVar12;
      }
      fn_82682D30(iVar5,*(unsigned int *)(param_1 + 0x18),uVar4,puVar8);
      puVar12 = puVar12 + 4;
    } while ((uVar9 & 0xffffffff) < (uVar11 & 0xffffffff));
  }
  fn_826959C8(iVar5 + 0x9f0);
  *(unsigned char *)(iVar5 + 0x9f0) = 0;
  uVar7 = 0;
  if (puVar10[4] != 0) {
    uVar7 = *puVar10;
  }
  (**(int (***)())(**(int **)(iVar5 + 0x114) + 4))(*(int **)(iVar5 + 0x114),iVar5,uVar7,puVar6,uVar11);
  fn_82695FA0(*(unsigned int *)(param_1 + 4),iVar5 + 0x9f0);
  uVar9 = uVar11;
  puVar12 = puVar6;
  uVar3 = uVar11 & 0xffffffff;
  while (uVar3 != 0) {
    fn_82273C88(puVar12);
    puVar12 = puVar12 + 4;
    uVar9 = uVar9 - 1;
    uVar3 = uVar9;
  }
  if (0x28 < (uVar11 & 0xffffffff)) {
    fn_8267BE38(puVar6);
  }
  uVar1 = puVar10[2];
  puVar10[2] = (int)((unsigned __int64)uVar1 - 1);
  if ((unsigned __int64)uVar1 - 1 == 0) {
    fn_826944C8(puVar10);
  }
  return;
}

