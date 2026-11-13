typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_8251E4D0();
extern int fn_82599808();
extern int fn_825D0598();
extern int fn_825D2CA8();
extern int fn_82A1DD38();
extern unsigned int uStack_3c;
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8261C680(int param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar5;
  __int64 lVar3;
  unsigned int *puVar6;
  unsigned __int64 uVar4;
  unsigned __int64 uVar7;
  int *piVar8;
  unsigned int *puVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar10 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int *puStack_40;
  unsigned int uStack_3c;
  
  fn_82599808(param_1 + 0x40);
  if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x1c))();
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 0x24);
  if (iVar5 != 0) {
    fn_825D0598(param_2 + 0xcec,iVar5,param_1);
  }
  piVar8 = (int *)(*(int *)(param_1 + 0x8c0) + 0x98);
  if ((piVar8 != (int *)0x0) &&
     (uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x8c0) + 0x9c), uVar7 = (unsigned __int64)uVar1, 0 < (int)uVar1)
     ) {
    iVar5 = 0;
    do {
      piVar2 = *(int **)(*piVar8 + iVar5);
      if (piVar2 != (int *)0x0) {
        lVar3 = (**(int (***)())(*piVar2 + 0x2c))();
        if (lVar3 != 0) {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs42,in_vs38,in_vs43); memcpy(auVar10, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs41,auVar10); memcpy(in_vs43, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs40,in_vs45,in_vs43); memcpy(in_vs45, &_vt2, 16); }
          vectorConditionalSelect(in_vs45,in_vs32,in_vs44);
          fn_825D0598(param_2 + 0xcec,lVar3,param_1);
        }
      }
      uVar7 = uVar7 - 1;
      iVar5 = iVar5 + 0x1a0;
    } while (uVar7 != 0);
  }
  puVar6 = (unsigned int *)(**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x44))();
  if (puVar6 != (unsigned int *)0x0) {
    uVar7 = (unsigned __int64)*puVar6;
    puVar9 = puVar6 + 1;
    if (0 < (int)*puVar6) {
      do {
        uStack_3c = 0;
        puStack_40 = puVar9;
        uVar4 = fn_8251E4D0(param_2 + 0xd24);
        fn_82A1DD38(uVar4,&puStack_40,*(unsigned short *)(param_2 + 0xd30));
        uVar7 = uVar7 - 1;
        puVar9 = (unsigned int *)((unsigned int)*(unsigned char *)(puVar9 + 1) + (int)puVar9);
      } while (uVar7 != 0);
    }
  }
  fn_825D2CA8(param_2 + 0xd18,(unsigned __int64)*(unsigned int *)(param_1 + 0x8c0) + 0x98);
  return;
}

