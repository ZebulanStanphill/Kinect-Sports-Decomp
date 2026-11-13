#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82687270();
extern int fn_826C8C70();
extern int fn_826D6290();
extern int fn_826DC448();
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_826E8488();
extern int fn_826E8FF0();
extern int fn_826E9188();
extern int fn_826E9530();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int uStack_60;


void fn_82724BE0(int param_1,int param_2)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char bVar3;
  __int64 lVar4;
  int iVar9;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned short uVar12;
  unsigned __int64 uVar10;
  unsigned char *puVar11;
  int iVar13;
  unsigned __int64 uStack_60;
  struct { int first; int second; } stack_pair_58;

  
  iVar13 = *(int *)(param_2 + 0x314);
  if (iVar13 == 0) {
    iVar13 = param_2 + 0x28;
  }
  fn_826E8FF0(iVar13,param_1 + 0x1c);
  fn_826C8C70(iVar13,0xffffffff82010e48,(double)*(float *)(param_1 + 0x1c),
                    (double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                    (double)*(float *)(param_1 + 0x28));
  *(unsigned char *)(iVar13 + 0x15) = 0;
  lVar4 = fn_826E8488(iVar13,1);
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(unsigned short *)(param_1 + 0x50) & 0xfffe;
  }
  else {
    uVar12 = *(unsigned short *)(param_1 + 0x50) | 1;
  }
  *(unsigned short *)(param_1 + 0x50) = uVar12;
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(unsigned short *)(param_1 + 0x50) & 0xfffd;
  }
  else {
    uVar12 = *(unsigned short *)(param_1 + 0x50) | 2;
  }
  *(unsigned short *)(param_1 + 0x50) = uVar12;
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(unsigned short *)(param_1 + 0x50) & 0xfffb;
  }
  else {
    uVar12 = *(unsigned short *)(param_1 + 0x50) | 4;
  }
  *(unsigned short *)(param_1 + 0x50) = uVar12;
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar10 = (unsigned __int64)*(unsigned short *)(param_1 + 0x50) & 0xfff7;
  }
  else {
    uVar10 = (unsigned __int64)*(unsigned short *)(param_1 + 0x50) | 8;
  }
  *(short *)(param_1 + 0x50) = (short)uVar10;
  fn_826C8C70(iVar13,0xffffffff82010e08,uVar10 & 1,uVar10 >> 1 & 1,uVar10 >> 2 & 1,
                    uVar10 >> 3 & 1);
  lVar5 = fn_826E8488(iVar13,1);
  lVar6 = fn_826E8488(iVar13,1);
  lVar7 = fn_826E8488(iVar13,1);
  fn_826E8488(iVar13,1);
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(unsigned short *)(param_1 + 0x50) & 0xffef;
  }
  else {
    uVar12 = *(unsigned short *)(param_1 + 0x50) | 0x10;
  }
  *(unsigned short *)(param_1 + 0x50) = uVar12;
  lVar8 = fn_826E8488(iVar13,1);
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(unsigned short *)(param_1 + 0x50) | 0x20;
  }
  else {
    uVar12 = *(unsigned short *)(param_1 + 0x50) & 0xffdf;
  }
  *(unsigned short *)(param_1 + 0x50) = uVar12;
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(unsigned short *)(param_1 + 0x50) & 0xffbf;
  }
  else {
    uVar12 = *(unsigned short *)(param_1 + 0x50) | 0x40;
  }
  *(unsigned short *)(param_1 + 0x50) = uVar12;
  fn_826E8488(iVar13,1);
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(unsigned short *)(param_1 + 0x50) & 0xff7f;
  }
  else {
    uVar12 = *(unsigned short *)(param_1 + 0x50) | 0x80;
  }
  *(unsigned short *)(param_1 + 0x50) = uVar12;
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar10 = (unsigned __int64)*(unsigned short *)(param_1 + 0x50) | 0x100;
  }
  else {
    uVar10 = (unsigned __int64)*(unsigned short *)(param_1 + 0x50) & 0xfeff;
  }
  *(short *)(param_1 + 0x50) = (short)uVar10;
  fn_826C8C70(iVar13,0xffffffff82010db8,uVar10 >> 4 & 1,uVar10 >> 5 & 1,uVar10 >> 6 & 1,
                    uVar10 >> 7 & 1,uVar10 >> 8 & 1);
  if (lVar7 != 0) {
    *(unsigned char *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (unsigned char *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    *(unsigned int *)(param_1 + 0x18) = (unsigned int)CONCAT11(uVar1,uVar2);
    *(unsigned char *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (unsigned char *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    uStack_60 = (unsigned __int64)CONCAT11(uVar1,uVar2);
    *(float *)(param_1 + 0x2c) = (float)uStack_60;
    fn_826C8C70(iVar13,0xffffffff82010d98,*(unsigned short *)(param_1 + 0x1a));
    stack_pair_58.first = 0;
    stack_pair_58.second = 0;
    uStack_60 = CONCAT44(*(unsigned int *)(param_1 + 0x18),(((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF));
    fn_826DC448(*(unsigned int *)(param_2 + 0x20),&stack_pair_58.first,&uStack_60);
    fn_826D6290(param_1 + 0x10,&stack_pair_58.first);
    if ((stack_pair_58.first == 0) && (stack_pair_58.second != 0)) {
      fn_82687270();
    }
  }
  if (lVar5 != 0) {
    fn_826E9188(iVar13,param_1 + 0x30);
    fn_826C8C70(iVar13,0xffffffff82010d8c);
  }
  if (lVar6 != 0) {
    *(unsigned char *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (unsigned char *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    *(unsigned int *)(param_1 + 0x34) = (unsigned int)CONCAT11(uVar1,uVar2);
    fn_826C8C70(iVar13,0xffffffff82010d70);
  }
  if (lVar8 != 0) {
    *(unsigned short *)(param_1 + 0x50) = *(unsigned short *)(param_1 + 0x50) | 0x200;
    *(unsigned char *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 1) {
      fn_826E7990(iVar13);
    }
    bVar3 = *(unsigned char *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 1;
    *(unsigned int *)(param_1 + 0x54) = (unsigned int)bVar3;
    *(unsigned char *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (unsigned char *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    uStack_60 = (unsigned __int64)CONCAT11(uVar1,uVar2);
    *(float *)(param_1 + 0x38) = (float)uStack_60;
    *(unsigned char *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (unsigned char *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    uStack_60 = (unsigned __int64)CONCAT11(uVar1,uVar2);
    *(float *)(param_1 + 0x3c) = (float)uStack_60;
    *(unsigned char *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (unsigned char *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    uStack_60 = (unsigned __int64)CONCAT11(uVar1,uVar2);
    *(float *)(param_1 + 0x40) = (float)(__int64)uStack_60;
    *(unsigned char *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (unsigned char *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    uStack_60 = (unsigned __int64)CONCAT11(uVar1,uVar2);
    *(float *)(param_1 + 0x44) = (float)(__int64)uStack_60;
    fn_826C8C70(iVar13,0xffffffff82010d18,*(unsigned int *)(param_1 + 0x54),
                      (double)*(float *)(param_1 + 0x38),(double)*(float *)(param_1 + 0x3c),
                      (double)*(float *)(param_1 + 0x40),(double)(__int64)uStack_60);
  }
  fn_826E9530(iVar13,(unsigned int *)(param_1 + 0x4c));
  if (lVar4 != 0) {
    fn_826E9530(iVar13,param_1 + 0x48);
  }
  fn_826C8C70(iVar13,0xffffffff82010cf0,
                    ((unsigned __int64)*(unsigned int *)(param_1 + 0x4c) & 0xfffffffc) + 8,
                    ((unsigned __int64)*(unsigned int *)(param_1 + 0x48) & 0xfffffffc) + 8);
  return;
}

