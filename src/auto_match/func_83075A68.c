extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8306E7D8();
extern int fn_8306E888();
extern int fn_8306EC70();
extern int fn_8306ED28();
extern int fn_8306ED30();
extern int fn_8306EE38();
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82015B38;
extern unsigned int lbl_82196080;


void fn_83075A68(unsigned __int64 param_1,unsigned __int64 param_2,double param_3,double param_4,
                  unsigned __int64 param_5,int param_6)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  double dVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs61 [16];
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  iVar2 = fn_82F6A548();
  fn_8306ED30();
  fn_8306EE38();
  dVar3 = (double)fn_8306E888();
  if ((dVar3 <= param_3) && ((double)lbl_82196080 < param_3)) {
    puVar1 = (unsigned int *)(in_r0 + param_6 & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    fn_8306EC70((double)(float)(dVar3 / param_3));
    puVar1 = (unsigned int *)(in_r0 + iVar2 & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  fn_8306E7D8((double)(float)(param_4 * (double)lbl_82015B38),(double)lbl_820145BC);
  altv207_13(in_vs32,in_vs61);
  altv207_13(in_vs32,in_vs43);
  puVar1 = (unsigned int *)(in_r0 + param_6 & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  fn_8306ED28();
  fn_8306ED30();
  altv207_13(in_vs32,in_vs43);
  fn_8306ED28();
  puVar1 = (unsigned int *)(in_r0 + iVar2 & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1 = (unsigned int *)(in_r0 + param_6 + 0x10 & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  altv207_13(in_vs32,in_vs43);
  fn_8306ED28();
  puVar1 = (unsigned int *)(iVar2 + 0x10U & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  fn_82F6A594();
  return;
}

