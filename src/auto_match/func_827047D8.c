extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_826828D8();
extern int fn_82683270();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696B20();
extern int fn_8269DFA0();
extern int fn_82720CE0();
extern unsigned int iStack_b4;


void fn_827047D8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char *puVar1;
  int iVar3;
  char cVar6;
  int iVar4;
  unsigned __int64 uVar2;
  int *piVar5;
  unsigned int uVar7;
  unsigned int *puVar8;
  double dVar9;
  int *piStack_b8;
  int iStack_b4;
  unsigned char bStack_b0;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [112];
  
  iVar3 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x5c))();
  if (((*(unsigned int *)(param_1 + 0xb00) >> 0xc & 1) == 0) ||
     (puVar8 = (unsigned int *)(iVar3 + 0x78), *(char *)(*(int *)(iVar3 + 0x78) + 0x2a4) != '\x01')) {
    if ((param_3 & 0xffffffff) != (unsigned __int64)*(unsigned int *)((int)param_2 * 0x24 + param_1 + 0x960)) {
      fn_82720CE0(param_1,param_2,param_3);
    }
  }
  else {
    auStack_a0[0] = 0;
    iVar4 = *(int *)(*puVar8 + 0x2a0);
    cVar6 = (**(int (***)())(*(int *)(iVar4 + 0x10) + 0x2c))
                      (iVar4 + 0x10,puVar8,*puVar8 + 0x74,auStack_a0);
    if (cVar6 != '\0') {
      iVar4 = fn_82696958(auStack_a0,iVar3);
      if (iVar4 != 0) {
        auStack_90[0] = 0;
        cVar6 = (**(int (***)())(*(int *)(iVar4 + 0x10) + 0x10))
                          (iVar4 + 0x10,iVar3,(unsigned __int64)*puVar8 + 0x208,auStack_90);
        if (cVar6 != '\0') {
          fn_82696B20(&piStack_b8,auStack_90,iVar3);
          piVar5 = (int *)0x0;
          if (piStack_b8 != (int *)0x0) {
            auStack_80[0] = 0;
            puVar8 = (unsigned int *)(iVar3 + 8);
            uVar7 = *(int *)(iVar3 + 8) + 0x10;
            dVar9 = (double)(param_2 & 0xffffffff);
            *(unsigned int *)(iVar3 + 8) = uVar7;
            if (*(unsigned int *)(iVar3 + 0x10) <= uVar7) {
              fn_826826A8(puVar8);
            }
            puVar1 = (unsigned char *)*puVar8;
            if (puVar1 != (unsigned char *)0x0) {
              *(double *)(puVar1 + 8) = dVar9;
              *puVar1 = 3;
            }
            uVar7 = *puVar8;
            *puVar8 = uVar7 + 0x10;
            dVar9 = (double)(param_3 & 0xffffffff);
            if (*(unsigned int *)(iVar3 + 0x10) <= uVar7 + 0x10) {
              fn_826826A8(puVar8);
            }
            puVar1 = (unsigned char *)*puVar8;
            if (puVar1 != (unsigned char *)0x0) {
              *(double *)(puVar1 + 8) = dVar9;
              *puVar1 = 3;
            }
            uVar2 = fn_8269DFA0(auStack_70,auStack_80,auStack_a0,iVar3,2,
                                      (__int64)((int)(*puVar8 - *(int *)(iVar3 + 0xc)) >> 4) +
                                      ((unsigned __int64)*(unsigned int *)(iVar3 + 0x1c) & 0x7ffffff) * 0x20 +
                                      -0x20);
            (**(int (***)())(*piStack_b8 + 0x28))(piStack_b8,uVar2,iStack_b4,0);
            fn_826828D8(auStack_70);
            if (*puVar8 - 0x20 < *(unsigned int *)(iVar3 + 0xc)) {
              fn_82683270(puVar8,2);
            }
            else {
              fn_82696330();
              *puVar8 = *puVar8 - 0x10;
              fn_82696330();
              *puVar8 = *puVar8 - 0x10;
            }
            fn_82696330(auStack_80);
            piVar5 = piStack_b8;
          }
          if (((bStack_b0 & 2) == 0) && (piVar5 != (int *)0x0)) {
            fn_826824B0();
          }
          piStack_b8 = (int *)0x0;
          if (((bStack_b0 & 1) == 0) && (iStack_b4 != 0)) {
            fn_826824B0();
          }
          iStack_b4 = 0;
        }
        fn_82696330(auStack_90);
      }
    }
    fn_82696330(auStack_a0);
  }
  *(int *)((int)param_2 * 0x24 + param_1 + 0x960) = (int)param_3;
  return;
}

