extern int fn_8251F720();
extern int fn_8255F448();
extern int fn_827F21F0();
extern int fn_827F2220();
extern int fn_827F58A8();
extern int fn_827F6210();
extern int fn_827F62A8();
extern int fn_827F6308();
extern int fn_827F6318();
extern int fn_827F6370();
extern int fn_827F6418();
extern int fn_827F6420();
extern int fn_827F6430();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_825548C0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = (double)*(float *)(param_4 + 0x14);
  uVar2 = *(unsigned int *)(param_4 + 0x18);
  dVar6 = (double)lbl_821CA460;
  if (dVar7 == (double)lbl_82192734) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 400) + (int)((param_2 & 0xffffffff) << 2)) + 0x114) ==
        0) {
      dVar7 = (double)ltcg_pool_0_0f;
    }
    else {
      dVar7 = (double)fn_827F6318();
    }
  }
  else if (dVar7 == (double)lbl_821954E8) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    dVar7 = (double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6);
  }
  fn_827F62A8(dVar7,param_3);
  fn_827F6430(dVar7,param_3);
  fn_827F6308(param_3,uVar2);
  if (*(float *)(param_4 + 8) == ltcg_pool_0_0f) {
    fn_827F6210((double)*(float *)(param_4 + 4),param_3);
  }
  else {
    fn_827F6370();
  }
  iVar3 = (int)((param_2 & 0x3fffffff) << 2);
  *(unsigned int *)(*(int *)(*(int *)(param_1 + 400) + iVar3) + 0x184) =
       *(unsigned int *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x38) == 1) {
    fn_827F6420(param_3,1);
    fn_827F6418(param_3,0);
  }
  if (*(int *)(param_4 + 0x2c) == 0) {
    uVar2 = *(unsigned int *)(param_4 + 0x30);
    iVar4 = *(int *)(*(int *)(param_1 + 400) + iVar3);
    uVar5 = fn_8251F720(param_4 + 0x24,0);
    fn_8255F448(iVar4,param_3,uVar5,uVar2);
    *(unsigned int *)(iVar4 + 0x168) = 0;
    *(unsigned int *)(iVar4 + 0x160) = *(unsigned int *)(param_4 + 0x24);
  }
  else {
    fn_8255F448(*(unsigned int *)(*(int *)(param_1 + 400) + iVar3),param_3,
                      *(int *)(param_4 + 0x2c),*(unsigned int *)(param_4 + 0x30));
  }
  if ((*(unsigned int *)(param_4 + 0x34) & 1) != 0) {
    fn_827F21F0(*(unsigned int *)(*(int *)(param_1 + 400) + iVar3));
  }
  if ((*(unsigned int *)(param_4 + 0x34) & 2) != 0) {
    fn_827F2220(*(unsigned int *)(*(int *)(param_1 + 400) + iVar3));
  }
  if ((param_2 & 0xffffffff) != 0) {
    fVar1 = *(float *)(param_4 + 0x10);
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x198) + iVar3 + -4);
    if (*(int *)(param_4 + 0xc) == 0x20) {
      dVar6 = (double)lbl_8218E8E8;
    }
    if (*(int *)(param_4 + 0x1c) == 0x41) {
      *(unsigned char *)(*(int *)(param_1 + 0x19c) + (int)param_2) = 3;
    }
    iVar3 = *(int *)(param_4 + 0xc);
    uVar5 = 0;
    if (iVar3 == 0x20) {
      uVar5 = 0;
    }
    else if (iVar3 == 0x21) {
      uVar5 = 1;
    }
    else if (iVar3 == 0x22) {
      uVar5 = 4;
    }
    fn_827F58A8(dVar6,(double)fVar1,uVar2,uVar5);
  }
  return;
}

