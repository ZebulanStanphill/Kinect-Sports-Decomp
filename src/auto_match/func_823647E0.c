extern int fn_82359928();
extern int fn_824556F0();
extern int fn_82455D40();
extern int fn_824569A8();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_82508078();
extern int fn_8254EDB0();
extern int fn_8288B760();
extern unsigned int lbl_821BA6EC;
extern unsigned int lbl_821CA460;


void fn_823647E0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  
  (**(int (***)())(**(int **)(param_1 + 0x3ec) + 0x24))();
  uVar4 = (**(int (***)())(**(int **)(param_1 + 0x3ec) + 0xc))();
  fn_82455D40(uVar4,param_2);
  fn_82508078(*(unsigned int *)(param_1 + 0x3f4),lbl_821BA6EC,0);
  fn_824569A8(param_1 + 0x7b0);
  if (*(int *)(param_1 + 0xac) != 1) {
    iVar5 = fn_8249ABC0();
    if (*(int *)(param_1 + 0xb4) != -1) {
      fn_8249D980(*(unsigned int *)(iVar5 + 0x110));
      *(unsigned int *)(param_1 + 0xb4) = 0xffffffff;
    }
    *(unsigned int *)(param_1 + 0xac) = 1;
  }
  fn_82359928(param_1,1);
  if (*(int *)(param_2 + 0x24) != 0) {
    if (*(int *)(param_2 + 0x168) == 0) {
      uVar6 = *(unsigned int *)(param_2 + 0x16c);
    }
    else {
      uVar6 = fn_8288B760();
      uVar6 = uVar6 & 0xff;
    }
    if (uVar6 != 0) {
      fn_824556F0(param_1 + 0x45c,param_1 + 0x468);
      uVar3 = *(unsigned int *)(param_1 + 0x4a8);
      goto LAB_823648e0;
    }
  }
  fn_824556F0(param_1 + 0x45c,param_1 + 0x46c);
  uVar3 = *(unsigned int *)(param_1 + 0x490);
LAB_823648e0:
  fn_8254EDB0((double)*(float *)(param_1 + 0x4bc),(double)*(float *)(param_1 + 0x4c0),
                    *(unsigned int *)(param_1 + 0x4d8),uVar3);
  iVar5 = *(int *)(param_1 + 0x4d8);
  uVar3 = *(unsigned int *)(param_1 + 0x4b4);
  uVar1 = *(unsigned int *)(param_1 + 0x4b8);
  uVar2 = *(unsigned int *)(param_1 + 0x4c8);
  if (*(int *)(iVar5 + 4) != 0) {
    *(unsigned int *)(iVar5 + 0x1cc) = *(unsigned int *)(param_1 + 0x4b0);
    *(unsigned int *)(iVar5 + 0x1dc) = uVar2;
    *(unsigned int *)(iVar5 + 0x1e0) = lbl_821CA460;
    *(unsigned int *)(iVar5 + 0x1d4) = 1;
    *(unsigned int *)(iVar5 + 0x1d8) = uVar1;
    *(unsigned int *)(iVar5 + 0x1d0) = uVar3;
  }
  return;
}

