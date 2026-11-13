extern int fn_82337DE0();
extern int fn_82341560();
extern int fn_82341BF0();
extern int fn_82341CA0();
extern int fn_82342038();
extern int fn_82344FF8();
extern int fn_8234A3D0();
extern int fn_8234A790();
extern int fn_824E17D8();
extern int fn_827F57E8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82344D80(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  double dVar5;
  
  iVar1 = ((int *)param_2[3])[1];
  iVar2 = *(int *)param_2[3];
  if ((iVar1 == 2) || (iVar1 == 0xb)) {
    fn_82341BF0(param_2);
  }
  else if (((0xc < iVar1) && (iVar1 < 0x10)) &&
          (*(int *)(param_2[4] + 0x44) = *(int *)(param_2[4] + 0x44) + 1,
          *(unsigned int *)(param_2[4] + 0x48) < *(unsigned int *)(param_2[4] + 0x44))) {
    *(unsigned char *)(*(int *)(iVar2 + 0x118) + 0x1d4) = 0;
    *(unsigned char *)(*(int *)(iVar2 + 0x118) + 0x254) = 0;
  }
  switch(((int *)param_2[3])[1]) {
  case 2:
  case 3:
  case 4:
    fn_82341BF0(param_2);
    goto LAB_82344e5c;
  case 9:
  case 10:
  case 0xc:
    fn_8234A790(param_1,param_2);
    if (((unsigned int *)param_2[3])[1] != 9) {
      fn_82337DE0(*(unsigned int *)param_2[3]);
      fn_82344FF8(param_2);
    }
    iVar1 = param_2[5];
    uVar4 = fn_824E17D8(param_4);
    fn_82341560(uVar4,param_1,(double)lbl_821CA460,param_2,param_4,iVar1);
    if (*(int *)(param_2[3] + 4) == 9) {
      dVar5 = (double)*(float *)(param_2[7] + 4);
      uVar4 = fn_824E17D8(param_4);
      fn_82342038(uVar4,dVar5,param_1,param_2);
    }
    break;
  case 0xb:
    fn_82341BF0(param_2);
    fn_8234A3D0(param_2,param_4);
    break;
  case 0xe:
    iVar1 = *(int *)(*(int *)param_2[3] + 0x118);
    fn_827F57E8((double)ltcg_pool_0_0f,(double)lbl_8218E8FC,*(unsigned int *)(iVar1 + 0x10));
    iVar1 = *(int *)(iVar1 + 0x10);
    piVar3 = (int *)param_2[3];
    *(unsigned int *)(iVar1 + 0x108) = *(unsigned int *)(iVar1 + 0x10c);
    *(unsigned int *)(*(int *)(*piVar3 + 0x1a0) + 0x188) = 0;
    (**(int (***)())(*param_2 + 0x3c))(param_2);
    iVar1 = param_2[5];
    uVar4 = fn_824E17D8(param_4);
    fn_82341CA0(uVar4,param_1,(double)lbl_82192734,param_2,param_4,iVar1,0);
    fn_82337DE0(*(unsigned int *)param_2[3]);
  case 0xd:
    fn_82344FF8(param_2);
    break;
  case 0xf:
    fn_82344FF8(param_2);
LAB_82344e5c:
    fn_82337DE0(*(unsigned int *)param_2[3]);
  }
  return;
}

