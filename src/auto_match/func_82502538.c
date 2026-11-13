extern unsigned int *auStack_50;
extern int fn_82522D98();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F04B0();
extern int fn_827F0FB8();
extern int fn_827F1148();
extern int fn_827F2DD0();
extern int fn_827F46E8();
extern int fn_827F5708();
extern int fn_827F59C0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82502538(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int uVar6;
  __int64 lVar2;
  unsigned short uVar7;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_50 [80];
  
  fn_8255F880(auStack_50);
  uVar6 = fn_8255F8D0((double)ltcg_pool_0_0f,(double)lbl_821CA460,auStack_50);
  *(unsigned int *)(param_1 + 0xc88) = uVar6;
  fn_8255F880(auStack_50,param_3);
  uVar6 = fn_8255F8D0((double)ltcg_pool_0_0f,(double)lbl_821CA460,auStack_50);
  *(unsigned int *)(param_1 + 0xc8c) = uVar6;
  if (*(int *)(param_1 + 0xc64) == 0) {
    if (*(int *)(param_1 + 0x8c0) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(int (***)())**(unsigned int **)(*(int *)(param_1 + 0x8c0) + 0x1b4))();
    }
                    /* WARNING: Subroutine does not return */
    fn_82522D98((lVar2 + 1U & 0x7fffffff) << 1);
  }
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502614:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502614;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,0xe);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502664:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502664;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,0x10);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_825026b4:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_825026b4;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,0x12);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502704:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502704;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,0xf);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502754:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502754;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,0x11);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_825027a4:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_825027a4;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,0x13);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_825027f4:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_825027f4;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,0);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(char *)(param_1 + 0xb77) == '\0') goto LAB_82502aa0;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502850:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502850;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,1);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_825028a0:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_825028a0;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,2);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_825028f0:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_825028f0;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,3);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502940:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502940;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,4);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502990:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502990;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,9);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_825029e0:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_825029e0;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,0xb);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502a30:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502a30;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,8);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502a80:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502a80;
    uVar7 = (**(int (***)())(*piVar1 + 0x14))(piVar1,10);
  }
  *(unsigned short *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
LAB_82502aa0:
  if (*(int *)(param_1 + 0xc90) == 0) {
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc8c);
  }
  else {
    uVar3 = fn_827F46E8(0xe8);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_827F59C0((double)ltcg_pool_0_0f,(double)lbl_821CA460,(double)lbl_8218E8E8,uVar3,0
                              ,*(unsigned int *)(param_1 + 0xc8c),*(unsigned int *)(param_1 + 0xc90),0);
    }
    *(int *)(param_1 + 0xc7c) = (int)uVar3;
  }
  uVar4 = fn_827F46E8(0xe8);
  if ((uVar4 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_827F59C0((double)lbl_821CA460,(double)lbl_821CA460,(double)ltcg_pool_0_0f,uVar4,0,
                            *(unsigned int *)(param_1 + 0xb68),uVar3,0);
  }
  *(unsigned int *)(param_1 + 0xc78) = uVar6;
  uVar3 = fn_827F46E8(0xe8);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_827F59C0((double)ltcg_pool_0_0f,(double)lbl_821CA460,(double)lbl_8218E8E8,uVar3,0,
                            *(unsigned int *)(param_1 + 0xb68),*(unsigned int *)(param_1 + 0xc88),0);
  }
  *(unsigned int *)(param_1 + 0xc80) = uVar6;
  uVar3 = fn_827F46E8(0xe8);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_827F59C0((double)ltcg_pool_0_0f,(double)lbl_821CA460,(double)lbl_8218E8E8,uVar3,0,
                            *(unsigned int *)(param_1 + 0xc80),*(unsigned int *)(param_1 + 0xc78),0);
  }
  *(unsigned int *)(param_1 + 0xc84) = uVar6;
  uVar3 = fn_827F04B0(0x18c);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_827F1148(uVar3,*(unsigned int *)(param_1 + 0xc68),0);
  }
  *(int *)(param_1 + 0xc6c) = (int)uVar5;
  fn_827F0FB8(uVar5,*(unsigned int *)(param_1 + 0xc8c),0);
  fn_827F0FB8(*(unsigned int *)(param_1 + 0xc6c),*(unsigned int *)(param_1 + 0xc88),0);
  if (*(int *)(param_1 + 0xc90) != 0) {
    fn_827F0FB8(*(unsigned int *)(param_1 + 0xc6c),*(int *)(param_1 + 0xc90),0);
  }
  fn_827F0FB8(*(unsigned int *)(param_1 + 0xc6c),*(unsigned int *)(param_1 + 0xb68),0);
  fn_827F0FB8(*(unsigned int *)(param_1 + 0xc6c),*(unsigned int *)(param_1 + 0xc80),0);
  fn_827F0FB8(*(unsigned int *)(param_1 + 0xc6c),*(unsigned int *)(param_1 + 0xc78),0);
  if (*(int *)(param_1 + 0xc7c) != 0) {
    fn_827F0FB8(*(unsigned int *)(param_1 + 0xc6c),*(int *)(param_1 + 0xc7c),0);
  }
  fn_827F0FB8(*(unsigned int *)(param_1 + 0xc6c),*(unsigned int *)(param_1 + 0xc84),1);
  fn_827F2DD0((double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xc68),
                    *(unsigned int *)(param_1 + 0xc6c));
  fn_827F5708((double)lbl_821CA460,*(unsigned int *)(param_1 + 0xc80));
  fn_827F5708((double)ltcg_pool_0_0f,*(unsigned int *)(param_1 + 0xc84));
  fn_827F5708((double)ltcg_pool_0_0f,*(unsigned int *)(param_1 + 0xc78));
  if (*(int *)(param_1 + 0xc7c) != 0) {
    fn_827F5708((double)ltcg_pool_0_0f);
  }
  *(unsigned int *)(param_1 + 0xd48) = 1;
  return;
}

