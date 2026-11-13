extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_826828D8();
extern int fn_82683270();
extern int fn_826944C8();
extern int fn_82695520();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696B20();
extern int fn_8269DFA0();
extern unsigned int iStack_a4;


void fn_8269F918(int *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned char *puVar2;
  int iVar3;
  int iVar5;
  char cVar7;
  unsigned __int64 uVar4;
  int *piVar6;
  __int64 lVar8;
  unsigned int uVar9;
  int aiStack_b0 [2];
  int *piStack_a8;
  int iStack_a4;
  unsigned char bStack_a0;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [96];
  
  auStack_90[0] = 0;
  iVar5 = (**(int (***)())(*param_1 + 0x5c))();
  if (iVar5 != 0) {
    aiStack_b0[0] = *(int *)(((param_2 == 1 ^ 1) + 0x57) * 4 + *(int *)(iVar5 + 0x78));
    *(int *)(aiStack_b0[0] + 8) = *(int *)(aiStack_b0[0] + 8) + 1;
    cVar7 = (**(int (***)())(param_1[0x1a] + 0x2c))(param_1 + 0x1a,iVar5 + 0x78,aiStack_b0,auStack_90);
    if (cVar7 != '\0') {
      fn_82696B20(&piStack_a8,auStack_90,0);
      piVar6 = (int *)0x0;
      if (piStack_a8 != (int *)0x0) {
        if ((param_3 & 0xffffffff) == 0) {
          uVar9 = *(int *)(iVar5 + 8) + 0x10;
          *(unsigned int *)(iVar5 + 8) = uVar9;
          if (*(unsigned int *)(iVar5 + 0x10) <= uVar9) {
            fn_826826A8((unsigned int *)(iVar5 + 8));
          }
          puVar2 = *(unsigned char **)(iVar5 + 8);
          if (puVar2 != (unsigned char *)0x0) {
            *puVar2 = 1;
          }
        }
        else {
          uVar4 = fn_82695520(auStack_70,param_3);
          uVar9 = *(int *)(iVar5 + 8) + 0x10;
          *(unsigned int *)(iVar5 + 8) = uVar9;
          if (*(unsigned int *)(iVar5 + 0x10) <= uVar9) {
            fn_826826A8((int *)(iVar5 + 8));
          }
          iVar1 = *(int *)(iVar5 + 8);
          if (iVar1 != 0) {
            fn_82695DA0(iVar1,uVar4);
          }
          fn_82696330(auStack_70);
        }
        auStack_80[0] = 0;
        uVar9 = *(unsigned int *)(iVar5 + 0x1c);
        iVar1 = *(int *)(iVar5 + 8);
        iVar3 = *(int *)(iVar5 + 0xc);
        uVar4 = fn_82695520(auStack_70,param_1);
        uVar4 = fn_8269DFA0(auStack_60,auStack_80,uVar4,iVar5,1,
                              (__int64)(iVar1 - iVar3 >> 4) + ((unsigned __int64)uVar9 & 0x7ffffff) * 0x20
                              + -0x20);
        (**(int (***)())(*piStack_a8 + 0x28))(piStack_a8,uVar4,iStack_a4,0);
        fn_826828D8(auStack_60);
        fn_82696330(auStack_70);
        fn_82683270((int *)(iVar5 + 8),1);
        fn_82696330(auStack_80);
        piVar6 = piStack_a8;
      }
      if (((bStack_a0 & 2) == 0) && (piVar6 != (int *)0x0)) {
        fn_826824B0();
      }
      piStack_a8 = (int *)0x0;
      if (((bStack_a0 & 1) == 0) && (iStack_a4 != 0)) {
        fn_826824B0();
      }
      iStack_a4 = 0;
    }
    lVar8 = (unsigned __int64)*(unsigned int *)(aiStack_b0[0] + 8) - 1;
    *(int *)(aiStack_b0[0] + 8) = (int)lVar8;
    if (lVar8 == 0) {
      fn_826944C8(aiStack_b0[0]);
    }
  }
  fn_82696330(auStack_90);
  return;
}

