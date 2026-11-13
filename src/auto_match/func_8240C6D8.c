extern unsigned int *auStack_20;
extern int fn_822BEA00();
extern int fn_824556F0();
extern int fn_82508078();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_8254EDB0();
extern unsigned int lbl_821B80B4;
extern unsigned int lbl_821BA6C0;
extern unsigned int lbl_821CA460;


void fn_8240C6D8(int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned int auStack_20 [2];
  
  *(unsigned int *)(*(int *)(param_1[0xd] + 0xf4) + 0x510) = 0;
  if ((param_1[0x10] == 0) || (param_1[0x10] == 1)) {
    uVar7 = (((unsigned __int64)(unsigned int)param_1[0x38] - 1 & 0xffffffff) >> 0x1f) - 1 &
            (unsigned __int64)(unsigned int)param_1[0x38] - 1;
    if (1 < (int)uVar7) {
      uVar7 = 2;
    }
    fn_82508078(*(unsigned int *)param_1[9],
                      (&lbl_821BA6C0)
                      [*(int *)(&lbl_821B80B4 + (int)((uVar7 & 0xffffffff) << 2))],0);
    if ((param_1[0x38] != param_1[0x39]) && (param_1[0x10] == 0)) {
      auStack_20[0] = *(unsigned int *)(param_1[0xc] + 4);
      auStack_20[0] =
           fn_82535298(auStack_20,**(unsigned int **)(param_1[0xc] + 0xc),0xffffffff83296bc0,
                             0xffffffff83296bd0);
      fn_82536288(auStack_20);
    }
    iVar3 = param_1[0xb];
    fn_824556F0(iVar3,iVar3 + 8);
    fn_8254EDB0((double)*(float *)(iVar3 + 0x68),(double)*(float *)(iVar3 + 0x6c),
                      *(unsigned int *)(iVar3 + 0x7c),*(unsigned int *)(iVar3 + 0x2c));
    iVar4 = *(int *)(iVar3 + 0x7c);
    uVar1 = *(unsigned int *)(iVar3 + 0x5c);
    uVar5 = *(unsigned int *)(iVar3 + 0x54);
    uVar2 = *(unsigned int *)(iVar3 + 0x58);
    if (*(int *)(iVar4 + 4) != 0) {
      *(unsigned int *)(iVar4 + 0x1dc) = *(unsigned int *)(iVar3 + 0x6c);
      *(unsigned int *)(iVar4 + 0x1d0) = uVar2;
      *(unsigned int *)(iVar4 + 0x1d8) = uVar1;
      *(unsigned int *)(iVar4 + 0x1cc) = uVar5;
      *(unsigned int *)(iVar4 + 0x1d4) = 1;
      *(unsigned int *)(iVar4 + 0x1e0) = lbl_821CA460;
    }
  }
  piVar6 = (int *)(**(int (***)())(*param_1 + 8))(param_1);
  (**(int (***)())(*piVar6 + 4))();
  fn_822BEA00();
  piVar6 = (int *)(**(int (***)())(*param_1 + 8))(param_1);
  (**(int (***)())(*piVar6 + 8))();
  fn_822BEA00();
  return;
}

