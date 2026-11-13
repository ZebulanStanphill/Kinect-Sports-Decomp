extern unsigned int *auStack_50;
extern unsigned int fStack_4c;
extern int fn_822315A0();
extern int fn_822CEC20();
extern int fn_8236FB68();
extern int fn_8236FDE0();
extern int fn_82370BB8();
extern int fn_823807F0();
extern int fn_824BD858();
extern int fn_824CD030();
extern int fn_82508078();
extern unsigned int lbl_831CD648;


void fn_822DFB90(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar5;
  __int64 lVar4;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_50 [4];
  float fStack_4c;
  
  uVar6 = 0;
  if ((param_3 & 1) != 0) {
    uVar6 = 1;
    puVar2 = (unsigned int *)(*param_2 + 0x20U & 0xfffffff0);
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    puVar3[3] = uVar10;
    if (fStack_4c < lbl_831CD648) {
      uVar6 = 0;
    }
  }
  fn_822CEC20(*(unsigned int *)(param_1 + 0x14),param_3,param_4,uVar6);
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x24);
  if (iVar7 != 0) {
    iVar5 = fn_824CD030(iVar7);
    if (iVar5 != 0) {
      fn_824BD858((double)*(float *)(*(int *)(param_1 + 0x10) + 0x6f4),
                        (double)*(float *)(*(int *)(param_1 + 0x10) + 0x6f8));
    }
  }
  uVar8 = *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x664);
  iVar5 = fn_8236FDE0(*(unsigned int *)(param_1 + 0x14));
  if ((unsigned char)((iVar5 == 0) + 0x10U) < 0x1e) {
    fn_823807F0(uVar8);
  }
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x2c);
  uVar8 = *(unsigned int *)(iVar1 * 4 + **(int **)(iVar5 + 8));
  fn_82370BB8(iVar5,*(unsigned int *)
                           (((unsigned int)((unsigned __int64)LZCOUNT(iVar1) >> 3) & 4) + **(int **)(iVar5 + 8)),
                    iVar5 + 0x948);
  fn_82370BB8(iVar5,uVar8,iVar5 + 0x974);
  if (iVar7 != 0) {
    iVar7 = *(int *)(param_1 + 0x10);
    lVar4 = fn_8236FB68(4);
    if (lVar4 != 0) {
      fn_82508078(*(unsigned int *)(iVar7 + 0xa4),lVar4,0);
    }
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

