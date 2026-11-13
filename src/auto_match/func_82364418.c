typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_50;
extern int fn_82321D30();
extern int fn_82364DF0();
extern int fn_824556F0();
extern int fn_82455B60();
extern int fn_82456BC0();
extern int fn_824BD858();
extern int fn_824C97F0();
extern int fn_82508078();
extern int fn_8254EDB0();
extern int fn_8288B760();
extern unsigned int lbl_821BA6F4;
extern unsigned int lbl_821CA460;
extern V16 vectorConditionalSelect();


void fn_82364418(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar5;
  unsigned int uVar8;
  int *piVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned char auStack_50 [80];
  
  uVar5 = param_2;
  iVar6 = fn_82364DF0();
  vectorConditionalSelect(in_vs32,in_vs45,in_vs44);
  iVar6 = *(int *)(iVar6 * 0x44 + param_1 + 0x18c);
  iVar7 = fn_82321D30(auStack_50,*(unsigned int *)((int)uVar5 + 0x5b0),param_2);
  puVar3 = (unsigned int *)(in_r0 + iVar7 & 0xfffffff0);
  uVar10 = puVar3[1];
  uVar11 = puVar3[2];
  uVar12 = puVar3[3];
  iVar7 = (int)param_2;
  uVar1 = *(unsigned int *)(iVar7 + 0x2c);
  puVar4 = (unsigned int *)(iVar7 + 0x730U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar10;
  puVar4[2] = uVar11;
  puVar4[3] = uVar12;
  uVar5 = (**(int (***)())(**(int **)(param_1 + 0x3ec) + 0xc))();
  fn_82455B60(uVar5,param_2);
  if (*(int *)(iVar6 + 0x24) != 0) {
    if (*(int *)(iVar6 + 0x168) == 0) {
      uVar8 = *(unsigned int *)(iVar6 + 0x16c);
    }
    else {
      uVar8 = fn_8288B760();
      uVar8 = uVar8 & 0xff;
    }
    if (uVar8 != 0) {
      fn_824BD858((double)*(float *)(param_1 + 0x2b0),(double)*(float *)(param_1 + 0x2b4));
      fn_824556F0(param_1 + 0x45c,param_1 + 0x470);
      uVar10 = *(unsigned int *)(param_1 + 0x494);
      goto LAB_82364510;
    }
  }
  fn_824556F0(param_1 + 0x45c,param_1 + 0x470);
  uVar10 = *(unsigned int *)(param_1 + 0x498);
LAB_82364510:
  fn_8254EDB0((double)*(float *)(param_1 + 0x4bc),(double)*(float *)(param_1 + 0x4c0),
                    *(unsigned int *)(param_1 + 0x4d8),uVar10);
  iVar6 = *(int *)(param_1 + 0x4d8);
  uVar10 = *(unsigned int *)(param_1 + 0x4b4);
  uVar12 = *(unsigned int *)(param_1 + 0x4b0);
  uVar11 = *(unsigned int *)(param_1 + 0x4b8);
  if (*(int *)(iVar6 + 4) != 0) {
    *(unsigned int *)(iVar6 + 0x1dc) = *(unsigned int *)(param_1 + 0x4c8);
    *(unsigned int *)(iVar6 + 0x1e0) = lbl_821CA460;
    *(unsigned int *)(iVar6 + 0x1d4) = 1;
    *(unsigned int *)(iVar6 + 0x1cc) = uVar12;
    *(unsigned int *)(iVar6 + 0x1d8) = uVar11;
    *(unsigned int *)(iVar6 + 0x1d0) = uVar10;
  }
  if (*(int *)(iVar7 + 0x2c) == 0) {
    uVar5 = 0xffffffff821b2a78;
  }
  else {
    uVar5 = 0xffffffff821b2a88;
  }
  piVar2 = (int *)(*(unsigned int **)(param_1 + 0xa8))[1];
  for (piVar9 = (int *)**(unsigned int **)(param_1 + 0xa8); piVar9 != piVar2; piVar9 = piVar9 + 2) {
    fn_824C97F0(*(unsigned int *)(*piVar9 + 0x28),uVar5);
  }
  fn_82508078(*(unsigned int *)(param_1 + 0x3f4),lbl_821BA6F4,0);
  (**(int (***)())(**(int **)(param_1 + 0x3ec) + 0x14))(*(int **)(param_1 + 0x3ec),param_2);
  fn_82456BC0(param_1 + 0x718,1,uVar1);
  return;
}

