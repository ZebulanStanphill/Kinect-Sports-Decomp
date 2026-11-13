extern int fn_822B6858();
extern int fn_822B8700();
extern int fn_822C8C08();
extern int fn_823377B0();
extern int fn_82338740();
extern int fn_82338F48();
extern int fn_82338F98();
extern int fn_8234B0C8();
extern int fn_8242E560();
extern int fn_824CD030();
extern int fn_827F5708();
extern int fn_827F57E8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_823378D0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)ltcg_pool_0_0f;
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0xc) + 0x174);
  dVar5 = dVar4;
  if ((*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) != -1) &&
     (*(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
              *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4)) != 0)) {
    if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                      *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
    }
    dVar5 = (double)*(float *)(*(int *)(iVar2 + 0x40) + 0x16c);
  }
  fn_82338740(dVar5,param_1);
  fn_82338F98(param_1);
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 != 0) {
    iVar1 = fn_824CD030(iVar2);
    if (iVar1 != 0) {
      (**(int (***)())(*(int *)**(unsigned int **)(iVar2 + 0xfc) + 0x24))();
      *(unsigned int *)(*(int *)(**(int **)(iVar2 + 0xfc) + 0x3c) + 0x78) = 0;
    }
    *(unsigned int *)(*(int *)(iVar2 + 0xfc) + 100) = 2;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0x18) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0x40) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0x180) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0x184) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0x188) = 1;
  *(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0x18c) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0x1c) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0x20) = 0;
  fn_822B6858(param_1);
  dVar5 = (double)lbl_821CA460;
  *(unsigned int *)(param_1 + 0x10c) = *(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0x48);
  if (*(int *)(*(int *)(param_1 + 0x118) + 0x2e4) != 0) {
    fn_827F5708(dVar5);
  }
  fn_8234B0C8(dVar4,(unsigned __int64)*(unsigned int *)(param_1 + 0x118) + 0x2c0,0xffffffff821b0c44);
  iVar2 = *(int *)(param_1 + 0x24);
  if ((iVar2 != 0) && (iVar1 = fn_824CD030(iVar2), iVar1 != 0)) {
    *(unsigned int *)(*(int *)(**(int **)(iVar2 + 0xfc) + 0x3c) + 0x20) = 0;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0x20) = 0;
  if ((*(int *)(param_1 + 0x24) == 0) ||
     (iVar2 = fn_8242E560(*(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0xc)), iVar2 != 0)) {
    iVar2 = *(int *)(param_1 + 0x118);
    fn_827F57E8(dVar4,(double)lbl_8218E8FC,*(unsigned int *)(iVar2 + 0x10));
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x118);
    fn_827F57E8(dVar5,(double)lbl_8218E8FC,*(unsigned int *)(iVar2 + 0x10));
    uVar3 = 1;
  }
  *(unsigned int *)(*(int *)(iVar2 + 0x10) + 0x108) = *(unsigned int *)(*(int *)(iVar2 + 0x10) + 0x10c);
  fn_822B8700(*(unsigned int *)(param_1 + 0x118),uVar3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  if (*(int *)(iVar2 + 0x28) == 0) {
    if (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0xc) + 0x174) + 0x5c) + 0x2b4) == 0) {
      return;
    }
    if (*(int *)(iVar2 + 0x3c) < 1) {
      return;
    }
    if (3 < *(int *)(iVar2 + 0x3c)) {
      return;
    }
    fn_823377B0(param_1);
    if (*(int *)(param_1 + 0x24) != 0) {
      fn_82338F48(param_1,1);
      return;
    }
    uVar3 = 0xffffffff821b0c5c;
  }
  else {
    uVar3 = 0xffffffff821b0c4c;
  }
  fn_822C8C08(*(unsigned int *)(param_1 + 0x114),uVar3);
  return;
}

