extern unsigned int *auStack_40;
extern int fn_82CE5410();
extern int fn_82CE7870();
extern int fn_82CE8158();
extern int fn_82CE8160();
extern int fn_82CE8318();
extern int fn_82CE8338();
extern int fn_82CE8350();
extern int fn_82CE96B0();
extern int fn_82CE9E40();
extern int fn_82CEFBD0();
extern unsigned int lbl_8323B220;


int fn_82CE93F8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned int auStack_40;
  
  fn_82CEFBD0(param_1,0);
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x68) = 0;
  *(unsigned int *)(param_1 + 0x6c) = 0x80000000;
  *(unsigned int *)(param_1 + 0x5c) = 1;
  fn_82CE7870(&auStack_40);
  *(unsigned int *)(param_1 + 0x60) = auStack_40;
  *(unsigned int *)(param_1 + 0x188) = 0;
  *(unsigned int *)(param_1 + 0x18c) = 0;
  *(unsigned int *)(param_1 + 400) = 0x80000000;
  KeTlsSetValue(lbl_8323B220,0);
  iVar3 = fn_82CE5410();
  iVar3 = (**(int (***)())(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x160);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    puVar5 = (unsigned int *)(iVar3 + 0x28);
    lVar6 = 0xf;
    do {
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5 = puVar5 + 5;
      *puVar5 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(int *)(param_1 + 0x1c) = iVar3;
  *(unsigned char *)(param_1 + 0x74) = 0;
  *(unsigned char *)(*(int *)(param_1 + 0x1c) + 0x20) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x1c) = 0;
  fn_82CE9E40(param_1 + 0x5c,param_2);
  uVar1 = *(unsigned int *)(param_2 + 0x14);
  lVar6 = 0;
  *(unsigned int *)(param_1 + 0x70) = 0;
  *(unsigned int *)(param_1 + 0x28) = uVar1;
  do {
    fn_82CE96B0((unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + lVar6 + 0x2c,0x80);
    lVar6 = lVar6 + 0x14;
  } while ((int)lVar6 < 300);
  uVar4 = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x18) = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar3 = 0;
    puVar5 = (unsigned int *)(param_1 + 0xd4);
    do {
      puVar5[2] = 0;
      puVar5[1] = 0;
      puVar5[3] = fn_82CE8158;
      uVar2 = uVar4 & 0x3f;
      puVar5 = puVar5 + 4;
      *puVar5 = fn_82CE8160;
      uVar4 = uVar4 + 1;
      *(unsigned short *)(*(int *)(param_1 + 0x1c) + iVar3) = 0;
      iVar3 = iVar3 + 2;
      *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x18) =
           1 << uVar2 | *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x18);
    } while ((int)uVar4 < *(int *)(param_1 + 0x28));
  }
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(int (***)())(param_1 + 0x20) = fn_82CE8318;
  *(int (***)())(param_1 + 0x24) = fn_82CE8338;
  fn_82CE8350(param_1);
  return param_1;
}

