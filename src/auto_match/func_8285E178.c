extern unsigned int *auStack_b8;
extern unsigned int *auStack_c8;
extern unsigned int fStack_8c;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_82809950();
extern int fn_82810360();
extern int fn_82810558();
extern int fn_828106B8();
extern int fn_8285A808();
extern int fn_8285A830();
extern int fn_8285DA18();
extern int fn_82862A00();
extern int fn_82862A08();
extern int fn_82862A18();
extern int fn_82862A20();
extern int fn_82862A28();
extern int fn_82862B18();
extern int fn_82F68CC0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_8201F840;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83211400;
extern unsigned int lbl_83211404;
extern unsigned int lbl_8321157C;
extern unsigned int lbl_83211580;
extern unsigned int lbl_83211584;
extern unsigned int lbl_8321158C;
extern unsigned int lbl_83211590;
extern unsigned int lbl_83211594;
extern unsigned int lbl_83211598;
extern unsigned int lbl_8321159C;
extern unsigned int lbl_832115A0;
extern unsigned int lbl_832115A4;
extern unsigned int lbl_832115A5;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_90;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_8285E178(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar2;
  int iVar3;
  unsigned __int64 uVar1;
  char cVar4;
  double dVar5;
  double dVar6;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned char auStack_c8 [16];
  unsigned char auStack_b8 [24];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  unsigned int uStack_90;
  float fStack_8c;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  
  iVar2 = fn_8285A808();
  iVar3 = fn_8285A830(param_3,param_4);
  fn_82862A08(0xffffffff832115b0,&uStack_d0);
  fn_82862A00(0xffffffff832115b0,&uStack_cc);
  fn_82810360(param_5,iVar3 + 4);
  fn_82810360(param_5,0xffffffff83211528);
  lbl_8321157C = (unsigned int)param_4;
  lbl_83211580 = *(unsigned int *)(param_3 + 0x2c);
  lbl_83211584 = *(unsigned int *)(param_3 + 0x30);
  lbl_8321158C = *(unsigned int *)(iVar2 + 0x9c);
  lbl_83211590 = *(unsigned int *)(iVar2 + 0xa0);
  lbl_83211594 = *(unsigned int *)(iVar2 + 0xa4);
  lbl_83211598 = *(unsigned int *)(iVar2 + 0xa8);
  lbl_8321159C = *(unsigned int *)(iVar2 + 0xac);
  lbl_832115A0 = *(unsigned int *)(iVar3 + 0x2c);
  lbl_83211400 = 0;
  lbl_83211404 = 0;
  if (*(int *)(iVar2 + 0x94) != 0) {
    lbl_83211404 = iVar2 + 0x10;
    lbl_83211400 = *(int *)(iVar2 + 0x94);
  }
  lbl_832115A5 = 0;
  uVar1 = fn_82862B18(param_1,param_2,&uStack_80,param_5,param_8);
  fn_82F68CC0(0xffffffff832115b0,uVar1,0x20);
  cVar4 = fn_82862A28(0xffffffff832115b0);
  if (cVar4 != '\0') {
    dVar5 = (double)fn_82862A20(0xffffffff832115b0);
    dVar5 = (double)fn_82809950((double)(float)(dVar5 * (double)lbl_82002C5C));
    dVar6 = (double)fn_82862A18(0xffffffff832115b0);
    dVar6 = (double)(float)(dVar5 * dVar6);
    fn_828106B8(uStack_d0,auStack_b8,0);
    fn_82810558((double)lbl_82005344,uStack_d0,uStack_cc);
    dVar5 = (double)fn_82862A18(0xffffffff832115b0);
    fStack_a0 = (float)dVar6;
    fStack_94 = (float)dVar6;
    fStack_9c = (float)-dVar6;
    fStack_8c = (float)(dVar5 + (double)lbl_8201DCB8);
    uStack_90 = lbl_8201F840;
    uStack_80 = lbl_821AAD20;
    uStack_7c = lbl_821AAD20;
    uStack_78 = lbl_82002AE0;
    uStack_74 = lbl_82002AE0;
    uStack_70 = lbl_821AAD20;
    fStack_98 = (float)-dVar6;
    uStack_6c = lbl_82002AE0;
    fn_8285DA18(uStack_cc,auStack_b8,auStack_c8,&fStack_a0,&uStack_80);
    lbl_832115A5 = 1;
  }
  lbl_832115A4 = 1;
  return;
}

