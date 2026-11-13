extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82681728();
extern int fn_826826A8();
extern int fn_82683270();
extern int fn_826944C8();
extern int fn_82695520();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82720748();


void fn_8271F610(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned char *puVar2;
  unsigned int uVar3;
  char cVar6;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar10;
  int aiStack_70 [4];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  uVar9 = 0;
  auStack_60[0] = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0x2a0);
  cVar6 = (**(int (***)())(*(int *)(iVar1 + 0x10) + 0x2c))
                    (iVar1 + 0x10,(unsigned int *)(param_1 + 0x78),*(int *)(param_1 + 0x78) + 0x5c,
                     auStack_60);
  if (cVar6 != '\0') {
    uVar4 = fn_82696958(auStack_60,param_1);
    if ((uVar4 & 0xffffffff) != 0) {
      uVar9 = uVar4 + 0x10;
    }
    if ((uVar9 & 0xffffffff) != 0) {
      if ((param_3 & 0xffffffff) == 0) {
        uVar8 = *(int *)(param_1 + 8) + 0x10;
        *(unsigned int *)(param_1 + 8) = uVar8;
        if (*(unsigned int *)(param_1 + 0x10) <= uVar8) {
          fn_826826A8((unsigned int *)(param_1 + 8));
        }
        puVar2 = *(unsigned char **)(param_1 + 8);
        if (puVar2 != (unsigned char *)0x0) {
          *puVar2 = 1;
        }
      }
      else {
        uVar5 = fn_82695520(auStack_50,param_3);
        uVar8 = *(int *)(param_1 + 8) + 0x10;
        *(unsigned int *)(param_1 + 8) = uVar8;
        if (*(unsigned int *)(param_1 + 0x10) <= uVar8) {
          fn_826826A8((int *)(param_1 + 8));
        }
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 != 0) {
          fn_82695DA0(iVar1,uVar5);
        }
        fn_82696330(auStack_50);
      }
      puVar10 = (unsigned int *)(param_1 + 8);
      if ((param_2 & 0xffffffff) == 0) {
        uVar8 = *puVar10;
        *puVar10 = uVar8 + 0x10;
        if (*(unsigned int *)(param_1 + 0x10) <= uVar8 + 0x10) {
          fn_826826A8(puVar10);
        }
        if ((unsigned char *)*puVar10 != (unsigned char *)0x0) {
          *(unsigned char *)*puVar10 = 1;
        }
      }
      else {
        uVar5 = fn_82695520(auStack_50,param_2);
        uVar8 = *puVar10;
        *puVar10 = uVar8 + 0x10;
        if (*(unsigned int *)(param_1 + 0x10) <= uVar8 + 0x10) {
          fn_826826A8(puVar10);
        }
        if (*puVar10 != 0) {
          fn_82695DA0(*puVar10,uVar5);
        }
        fn_82696330(auStack_50);
      }
      iVar1 = *(int *)(param_1 + 0xc);
      uVar8 = *puVar10;
      uVar3 = *(unsigned int *)(param_1 + 0x1c);
      fn_82681728(aiStack_70,(unsigned __int64)*(unsigned int *)(param_1 + 0x78) + 0x254,0xffffffff8200ec78);
      fn_82720748(param_1,uVar9,aiStack_70,2,
                        (__int64)((int)(uVar8 - iVar1) >> 4) +
                        ((unsigned __int64)uVar3 & 0x7ffffff) * 0x20 + -0x20);
      lVar7 = (unsigned __int64)*(unsigned int *)(aiStack_70[0] + 8) - 1;
      *(int *)(aiStack_70[0] + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(aiStack_70[0]);
      }
      fn_82683270(puVar10,2);
    }
  }
  fn_82696330(auStack_60);
  return;
}

