typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_2c;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_82696D38();
extern int fn_827274C0();
extern int fn_82727738();
extern int fn_8272AAE8();
extern int fn_82760448();
extern int fn_82761DE8();
extern int fn_82765CA0();
extern int fn_82765D90();
extern int fn_8279C8A8();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8272AB60(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  int iVar6;
  unsigned __int64 uVar5;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  __int64 lVar11;
  unsigned int *puVar12;
  unsigned __int64 uVar13;
  int *piVar14;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int *puStack_30;
  unsigned int auStack_2c [11];
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 2;
  puVar1[4] = 0;
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    return;
  }
  iVar6 = (**(int (***)())(**(int **)(param_1 + 8) + 8))();
  if (iVar6 != 4) {
    return;
  }
  piVar14 = (int *)(*(int *)(param_1 + 8) + -0x68);
  if (*(int *)(param_1 + 8) == 0) {
    piVar14 = (int *)0x0;
  }
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x18);
  uVar5 = fn_826957D0(param_1,0);
  fn_82696D38(&puStack_30,uVar5,uVar2,0xffffffffffffffff,0);
  if (piVar14[0x3b] != 0) {
    fn_8268C510(auStack_2c,*puStack_30);
    piVar7 = (int *)fn_827274C0(piVar14[0x3b],auStack_2c);
    lVar11 = ((unsigned __int64)auStack_2c[0] & 0xfffffffc) + 4;
    do {
      puVar12 = (unsigned int *)lVar11;
      uVar13 = (unsigned __int64)*puVar12;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar13 - 1,0,lVar11);
        *puVar12 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar13 == 1) {
      fn_8267BE38();
    }
    if ((piVar7 != (int *)0x0) && (iVar6 = *piVar7, 1 < *(int *)(param_1 + 0x1c))) {
      pcVar8 = (char *)fn_826957D0(param_1,1);
      if (*pcVar8 != '\x01') {
        pcVar8 = (char *)fn_826957D0(param_1,1);
        if ((*pcVar8 == '\0') || (bVar4 = false, *pcVar8 == '\n')) {
          bVar4 = true;
        }
        if (!bVar4) {
          uVar2 = *(unsigned int *)(param_1 + 0x18);
          uVar5 = fn_826957D0(param_1,1);
          iVar9 = fn_82696958(uVar5,uVar2);
          if ((iVar9 != 0) &&
             (iVar10 = (**(int (***)())(*(int *)(iVar9 + 0x10) + 8))(iVar9 + 0x10), iVar10 == 0x1a)) {
            uVar2 = *(unsigned int *)(iVar9 + 0x30);
            uVar13 = fn_8267B890(*(unsigned int *)
                                        (*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x7c,0);
            if ((uVar13 & 0xffffffff) == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = fn_82765CA0(uVar13,0x1ff8);
            }
            fn_82765D90(uVar13,uVar2,1);
            if ((uVar13 & 0xffffffff) != 0) {
              fn_82760448(uVar13);
            }
            if (*(int *)(iVar6 + 8) != 0) {
              fn_82761DE8();
            }
            *(int *)(iVar6 + 8) = (int)uVar13;
            iVar6 = (**(int (***)())(*piVar14 + 0x40))(piVar14);
            if (iVar6 != 0) {
              *(unsigned int *)(iVar6 + 0xb00) = *(unsigned int *)(iVar6 + 0xb00) | 0x400;
            }
            if ((uVar13 & 0xffffffff) != 0) {
              fn_82761DE8(uVar13);
            }
          }
          goto LAB_8272ae08;
        }
      }
      uVar13 = fn_8272AAE8(piVar14[0x28]);
      if ((uVar13 & 0xffffffff) != 0) {
        fn_8279C8A8(uVar13,iVar6);
        *(unsigned char *)(piVar14[0x28] + 0x13f) = *(unsigned char *)(piVar14[0x28] + 0x13f) | 2;
        fn_82727738(piVar14,*puStack_30);
        iVar6 = (**(int (***)())(*piVar14 + 0x40))(piVar14);
        if (iVar6 != 0) {
          *(unsigned int *)(iVar6 + 0xb00) = *(unsigned int *)(iVar6 + 0xb00) | 0x400;
        }
      }
    }
  }
LAB_8272ae08:
  uVar3 = puStack_30[2];
  puStack_30[2] = (int)((unsigned __int64)uVar3 - 1);
  if ((unsigned __int64)uVar3 - 1 == 0) {
    fn_826944C8(puStack_30);
  }
  return;
}

