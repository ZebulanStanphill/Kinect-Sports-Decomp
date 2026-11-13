extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_ce;
extern unsigned int *auStack_f0;
extern int fn_8267B890();
extern int fn_82681728();
extern int fn_82681898();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_826959C8();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_8269A1F0();
extern int fn_826A2F80();
extern int fn_826C0B08();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int iStack_6c;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int lbl_82005718;
extern unsigned int uStack_cf;
extern unsigned int uStack_d0;
extern unsigned int uStack_d1;
extern unsigned int uStack_d2;
extern unsigned int uStack_d3;
extern unsigned int uStack_d4;
extern unsigned int uStack_d5;
extern unsigned int uStack_d6;
extern unsigned int uStack_d7;
extern unsigned int uStack_d8;
extern unsigned int uStack_d9;
extern unsigned int uStack_da;
extern unsigned int uStack_db;
extern unsigned int uStack_dc;
extern unsigned int uStack_dd;
extern unsigned int uStack_de;
extern unsigned int uStack_df;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;


void fn_82738240(void)

{
  unsigned char uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  int iVar5;
  unsigned __int64 uVar3;
  int iVar6;
  __int64 lVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  unsigned char auStack_f0;
  unsigned char uStack_ec;
  unsigned char uStack_e0;
  unsigned char uStack_df;
  unsigned char uStack_de;
  unsigned char uStack_dd;
  unsigned char uStack_dc;
  unsigned char uStack_db;
  unsigned char uStack_da;
  unsigned char uStack_d9;
  unsigned char uStack_d8;
  unsigned char uStack_d7;
  unsigned char uStack_d6;
  unsigned char uStack_d5;
  unsigned char uStack_d4;
  unsigned char uStack_d3;
  unsigned char uStack_d2;
  unsigned char uStack_d1;
  unsigned char uStack_d0;
  unsigned char uStack_cf;
  unsigned char auStack_ce [2];
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  struct { int first; int second; } stack_pair_98;

  int iStack_90;
  int iStack_8c;
  int aiStack_88 [2];
  unsigned __int64 auStack_80 [2];
  unsigned char auStack_70 [4];
  int iStack_6c;
  
  iVar4 = fn_82F6A544();
  uVar2 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x288),0x30,0)
  ;
  if ((uVar2 & 0xffffffff) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = fn_826C0B08(uVar2,*(unsigned int *)(iVar4 + 0x44));
  }
  auStack_f0 = 0;
  fn_8269A1F0(&auStack_f0,*(unsigned int *)(iVar4 + 0x34));
  auStack_ce[0] = 0;
  piVar8 = (int *)(iVar5 + 0x10);
  fn_82681728(&iStack_cc,(unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                    0xffffffff82011ac4);
  (**(int (***)())(*(int *)(iVar5 + 0x10) + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_cc,&auStack_f0,auStack_ce);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_cc + 8) - 1;
  *(int *)(iStack_cc + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_cc);
  }
  uVar3 = (**(int (***)())(**(int **)(iVar4 + 0x30) + 0x3c))();
  iVar6 = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,uVar3);
  *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
  auStack_70[0] = 5;
  *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
  uStack_d7 = 0;
  iStack_6c = iVar6;
  fn_82681728(&iStack_8c,(unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                    0xffffffff82001394);
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_8c,auStack_70,&uStack_d7);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_8c + 8) - 1;
  *(int *)(iStack_8c + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_8c);
  }
  fn_82696330(auStack_70);
  lVar7 = (unsigned __int64)*(unsigned int *)(iVar6 + 8) - 1;
  *(int *)(iVar6 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iVar6);
  }
  auStack_80[0] = (unsigned __int64)*(unsigned int *)(iVar4 + 0x3c);
  fn_82681898((double)auStack_80[0],&auStack_f0);
  uStack_cf = 0;
  fn_82681728(&iStack_c4,(unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                    0xffffffff821cdae4);
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_c4,&auStack_f0,&uStack_cf);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_c4 + 8) - 1;
  *(int *)(iStack_c4 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_c4);
  }
  fn_82681898((double)*(float *)(iVar4 + 0x38),&auStack_f0);
  uStack_dd = 0;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(int *)(iVar4 + 0x44),
             (unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x1e4,&auStack_f0,&uStack_dd);
  uVar1 = *(unsigned char *)(iVar4 + 0x40);
  fn_826959C8(&auStack_f0);
  uStack_d5 = 0;
  auStack_f0 = 2;
  uStack_ec = uVar1;
  fn_82681728(&iStack_90,(unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                    0xffffffff82011ab8);
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_90,&auStack_f0,&uStack_d5);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_90 + 8) - 1;
  *(int *)(iStack_90 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_90);
  }
  dVar13 = (double)lbl_82005718;
  fn_82681898((double)(float)((double)*(float *)(iVar4 + 4) * dVar13),&auStack_f0);
  uStack_db = 0;
  iStack_bc = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                           0xffffffff82011aac);
  *(int *)(iStack_bc + 8) = *(int *)(iStack_bc + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_bc,&auStack_f0,&uStack_db);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_bc + 8) - 1;
  *(int *)(iStack_bc + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_bc);
  }
  fn_82681898((double)(float)((double)*(float *)(iVar4 + 0x10) * dVar13),&auStack_f0);
  uStack_d1 = 0;
  iStack_9c = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                           0xffffffff82011aa0);
  *(int *)(iStack_9c + 8) = *(int *)(iStack_9c + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_9c,&auStack_f0,&uStack_d1);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_9c + 8) - 1;
  *(int *)(iStack_9c + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_9c);
  }
  fn_82681898((double)(float)((double)*(float *)(iVar4 + 8) * dVar13),&auStack_f0);
  uStack_d9 = 0;
  iStack_b4 = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                           0xffffffff82011a94);
  *(int *)(iStack_b4 + 8) = *(int *)(iStack_b4 + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_b4,&auStack_f0,&uStack_d9);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_b4 + 8) - 1;
  *(int *)(iStack_b4 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_b4);
  }
  fn_82681898((double)(float)((double)*(float *)(iVar4 + 0x14) * dVar13),&auStack_f0);
  uStack_d3 = 0;
  aiStack_88[0] =
       fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,0xffffffff82011a88);
  *(int *)(aiStack_88[0] + 8) = *(int *)(aiStack_88[0] + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),aiStack_88,&auStack_f0,&uStack_d3);
  lVar7 = (unsigned __int64)*(unsigned int *)(aiStack_88[0] + 8) - 1;
  *(int *)(aiStack_88[0] + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(aiStack_88[0]);
  }
  fn_82681898((double)(float)((double)*(float *)(iVar4 + 0xc) * dVar13),&auStack_f0);
  uStack_e0 = 0;
  iStack_ac = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                           0xffffffff82011a7c);
  *(int *)(iStack_ac + 8) = *(int *)(iStack_ac + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_ac,&auStack_f0,&uStack_e0);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_ac + 8) - 1;
  *(int *)(iStack_ac + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_ac);
  }
  fn_82681898((double)(float)((double)*(float *)(iVar4 + 0x18) * dVar13),&auStack_f0);
  uStack_df = 0;
  stack_pair_98.second = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                           0xffffffff82011a70);
  *(int *)(stack_pair_98.second + 8) = *(int *)(stack_pair_98.second + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&stack_pair_98.second,&auStack_f0,&uStack_df);
  lVar7 = (unsigned __int64)*(unsigned int *)(stack_pair_98.second + 8) - 1;
  *(int *)(stack_pair_98.second + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(stack_pair_98.second);
  }
  dVar10 = (double)*(float *)(iVar4 + 0x1c);
  dVar12 = (double)*(float *)(iVar4 + 0x28);
  dVar11 = (double)*(float *)(iVar4 + 0x24);
  dVar9 = (double)*(float *)(iVar4 + 0x20);
  fn_82681898((double)(float)(dVar10 * dVar13),&auStack_f0);
  uStack_de = 0;
  iStack_a4 = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                           0xffffffff82011a64);
  *(int *)(iStack_a4 + 8) = *(int *)(iStack_a4 + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_a4,&auStack_f0,&uStack_de);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_a4 + 8) - 1;
  *(int *)(iStack_a4 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_a4);
  }
  fn_82681898((double)(float)(dVar12 * dVar13),&auStack_f0);
  uStack_dc = 0;
  iStack_c8 = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                           0xffffffff82011a58);
  *(int *)(iStack_c8 + 8) = *(int *)(iStack_c8 + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_c8,&auStack_f0,&uStack_dc);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_c8 + 8) - 1;
  *(int *)(iStack_c8 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_c8);
  }
  fn_82681898((double)(float)(dVar11 * dVar13),&auStack_f0);
  uStack_da = 0;
  iStack_c0 = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                           0xffffffff82011a4c);
  *(int *)(iStack_c0 + 8) = *(int *)(iStack_c0 + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_c0,&auStack_f0,&uStack_da);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_c0 + 8) - 1;
  *(int *)(iStack_c0 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_c0);
  }
  fn_82681898((double)(float)(dVar12 * dVar13),&auStack_f0);
  uStack_d8 = 0;
  iStack_b8 = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                           0xffffffff82011a40);
  *(int *)(iStack_b8 + 8) = *(int *)(iStack_b8 + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_b8,&auStack_f0,&uStack_d8);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_b8 + 8) - 1;
  *(int *)(iStack_b8 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_b8);
  }
  fn_82681898((double)(float)(dVar11 * dVar13),&auStack_f0);
  uStack_d6 = 0;
  iStack_b0 = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                           0xffffffff82011a34);
  *(int *)(iStack_b0 + 8) = *(int *)(iStack_b0 + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_b0,&auStack_f0,&uStack_d6);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_b0 + 8) - 1;
  *(int *)(iStack_b0 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_b0);
  }
  fn_82681898((double)(float)(dVar9 * dVar13),&auStack_f0);
  uStack_d4 = 0;
  iStack_a8 = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                           0xffffffff82011a28);
  *(int *)(iStack_a8 + 8) = *(int *)(iStack_a8 + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_a8,&auStack_f0,&uStack_d4);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_a8 + 8) - 1;
  *(int *)(iStack_a8 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_a8);
  }
  fn_82681898((double)(float)(dVar10 * dVar13),&auStack_f0);
  uStack_d2 = 0;
  iStack_a0 = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                           0xffffffff82011a1c);
  *(int *)(iStack_a0 + 8) = *(int *)(iStack_a0 + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&iStack_a0,&auStack_f0,&uStack_d2);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_a0 + 8) - 1;
  *(int *)(iStack_a0 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_a0);
  }
  fn_82681898((double)(float)(dVar9 * dVar13),&auStack_f0);
  uStack_d0 = 0;
  stack_pair_98.first = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x44) + 0x78) + 0x254,
                           0xffffffff82011a10);
  *(int *)(stack_pair_98.first + 8) = *(int *)(stack_pair_98.first + 8) + 1;
  (**(int (***)())(*piVar8 + 0xc))
            (piVar8,*(unsigned int *)(iVar4 + 0x44),&stack_pair_98.first,&auStack_f0,&uStack_d0);
  lVar7 = (unsigned __int64)*(unsigned int *)(stack_pair_98.first + 8) - 1;
  *(int *)(stack_pair_98.first + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(stack_pair_98.first);
  }
  uVar3 = fn_826961B0(auStack_80,iVar5);
  fn_826A2F80(*(unsigned int *)(iVar4 + 0x48),uVar3);
  fn_82696330(auStack_80);
  fn_82696330(&auStack_f0);
  fn_826824B0(iVar5);
  fn_82F6A590();
  return;
}

