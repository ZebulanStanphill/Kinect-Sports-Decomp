extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_158;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_826A7398();
extern int fn_826A79D8();
extern int fn_826C0B08();
extern int fn_826C6368();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82705498();
extern int fn_82726AB8();
extern int fn_827553F0();
extern int fn_8278B290();
extern int fn_8278BC18();
extern int fn_8278BD68();
extern int fn_8278C028();
extern int fn_8278C528();
extern int fn_8278D3F0();
extern int fn_8278DAD0();
extern int fn_82794C90();
extern int fn_82794D68();
extern int fn_82799B80();
extern int fn_82799BA8();
extern int fn_82799BD0();
extern int fn_82799D18();
extern int fn_8279B2C8();
extern int fn_8279FB38();
extern int fn_827A0AA8();
extern int fn_827A0B18();
extern int fn_827A22A8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005718;
extern unsigned int lbl_8200571C;
extern float lbl_82005720;
extern unsigned int lbl_82010C6C;
extern float lbl_82011890;
extern unsigned int lbl_82011898;
extern unsigned int lbl_820118A0;
extern unsigned int lbl_820118C8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_154;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_16a;
extern unsigned int uStack_16c;
extern unsigned int uStack_16e;
extern unsigned int uStack_170;
extern unsigned int uStack_172;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_ca;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_827368E0(int param_1)

{
  unsigned char *puVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  char cVar12;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned int *puVar11;
  __int64 lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  unsigned int *apuStack_188 [2];
  unsigned char **ppuStack_180;
  unsigned int uStack_17c;
  unsigned int uStack_178;
  unsigned short uStack_174;
  unsigned short uStack_172;
  unsigned short uStack_170;
  unsigned short uStack_16e;
  unsigned short uStack_16c;
  unsigned short uStack_16a;
  unsigned int uStack_160;
  unsigned int uStack_15c;
  float fStack_158;
  unsigned int uStack_154;
  unsigned char auStack_150 [8];
  double dStack_148;
  unsigned char auStack_140 [8];
  double dStack_138;
  unsigned char auStack_130 [8];
  double dStack_128;
  unsigned char auStack_120 [8];
  double dStack_118;
  unsigned char auStack_110 [8];
  double dStack_108;
  unsigned char auStack_100 [8];
  double dStack_f8;
  unsigned char auStack_f0 [38];
  unsigned short uStack_ca;
  unsigned char bStack_c8;
  unsigned char **appuStack_c0 [8];
  unsigned char auStack_a0 [160];
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  cVar12 = fn_82695468(param_1,0x1e);
  if (cVar12 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee44,0,0);
    return;
  }
  lVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
  if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
    lVar13 = 0;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 0x74);
  if (piVar2 == (int *)0x0) {
    return;
  }
  piVar2[1] = piVar2[1] + 1;
  uVar6 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x30,
                            0);
  if ((uVar6 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_826C0B08(uVar6,*(unsigned int *)(param_1 + 0x18));
  }
  uVar3 = *(unsigned int *)(param_1 + 0x18);
  uVar7 = fn_826957D0(param_1,0);
  fn_82696D38(apuStack_188,uVar7,uVar3,0xffffffffffffffff,0);
  lVar8 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x140
                            ,0);
  if (lVar8 == 0) {
    iVar10 = 0;
  }
  else {
    uVar7 = (**(int (***)())(*piVar2 + 0x4c))(piVar2);
    fn_826A7398(*(unsigned int *)(param_1 + 0x18));
    uVar9 = fn_82705498();
    iVar10 = fn_827A22A8(lVar8,uVar9,uVar7,0);
  }
  *(unsigned char *)(*(int *)(iVar10 + 8) + 0x20) = *(unsigned char *)(*(int *)(iVar10 + 8) + 0x20) | 2;
  fn_82799B80(iVar10);
  fn_82799BA8(iVar10);
  iVar4 = *(int *)(param_1 + 0x18);
  if ((6 < *(unsigned char *)(iVar4 + 0x7c)) && (1 < *(int *)(param_1 + 0x1c))) {
    uVar7 = fn_826957D0(param_1,1);
    dVar14 = (double)fn_826972E0(uVar7,iVar4);
    *(unsigned char *)(iVar10 + 0x13d) = *(unsigned char *)(iVar10 + 0x13d) & 0xfe;
    fn_82799BD0(iVar10);
    uStack_160 = lbl_821AAD20;
    uStack_15c = lbl_821AAD20;
    fStack_158 = (float)dVar14 * lbl_8200571C;
    uStack_154 = lbl_821AAD20;
    fn_8279B2C8(iVar10,&uStack_160,1);
  }
  *(unsigned char *)(iVar10 + 0x13d) = *(unsigned char *)(iVar10 + 0x13d) | 4;
  fn_826FDED0(auStack_f0,*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288));
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_172 = 0;
  uStack_170 = 0;
  ppuStack_180 = &lbl_82010C6C;
  uStack_17c = 1;
  uStack_16e = 0;
  uStack_16c = 0;
  uStack_16a = 0;
  fn_8278DAD0(auStack_f0);
  fn_8278BC18(&ppuStack_180);
  uVar7 = fn_8278D3F0(auStack_a0,auStack_f0,lVar13 + 0x30);
  fn_82726AB8(auStack_f0,uVar7);
  fn_826FDF58(auStack_a0);
  uVar7 = fn_8278C528(appuStack_c0,&ppuStack_180,lVar13 + 0x5c);
  fn_8278BD68(&ppuStack_180,uVar7);
  appuStack_c0[0] = &lbl_82010C6C;
  fn_8278B290(appuStack_c0);
  fn_8267C488(appuStack_c0);
  fn_82794C90(*(unsigned int *)(iVar10 + 8),auStack_f0);
  fn_82794D68(*(unsigned int *)(iVar10 + 8),&ppuStack_180);
  fn_82799D18(iVar10,*apuStack_188[0],0xffffffffffffffff);
  fn_8279FB38(iVar10);
  dVar14 = (double)fn_827A0AA8(iVar10);
  auStack_120[0] = 3;
  lVar13 = uVar6 + 0x10;
  dStack_118 = (dVar14 + lbl_820118C8) * lbl_82005720;
  dVar14 = lbl_820118C8;
  dVar17 = lbl_82005720;
  fn_826A79D8(lVar13,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff820118b8,
                    auStack_120);
  fn_82696330(auStack_120);
  dVar15 = (double)fn_827A0B18(iVar10);
  auStack_130[0] = 3;
  dStack_128 = (dVar15 + dVar14) * dVar17;
  fn_826A79D8(lVar13,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff820118a8,
                    auStack_130);
  fn_82696330(auStack_130);
  dStack_f8 = (double)fn_827A0AA8(iVar10);
  dStack_f8 = dStack_f8 * dVar17;
  auStack_100[0] = 3;
  fn_826A79D8(lVar13,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff8200eaf0,
                    auStack_100);
  fn_82696330(auStack_100);
  dStack_148 = (double)fn_827A0B18(iVar10);
  dStack_148 = dStack_148 * dVar17;
  auStack_150[0] = 3;
  fn_826A79D8(lVar13,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff8200eae8,
                    auStack_150);
  fn_82696330(auStack_150);
  puVar11 = (unsigned int *)fn_8278C028(auStack_f0);
  puVar11 = (unsigned int *)fn_827553F0(*(unsigned int *)(iVar10 + 0xc),
                                      ((unsigned __int64)*puVar11 & 0xfffffffc) + 8,
                                      (bStack_c8 >> 1 & 1) != 0 | -((bStack_c8 & 1) != 0) & 2U |
                                      0x10,1,0);
  dVar14 = lbl_82005710;
  if (puVar11 != (unsigned int *)0x0) {
    dVar15 = (double)*(float *)(*(int *)(puVar11[5] + 0xc) + 8);
    dVar14 = (double)*(float *)(*(int *)(puVar11[5] + 0xc) + 0xc);
    if (dVar15 != lbl_82005710) goto LAB_82736d48;
  }
  dVar15 = lbl_820118A0;
LAB_82736d48:
  if (dVar14 == lbl_82005710) {
    dVar14 = lbl_82011898 - dVar15;
  }
  auStack_110[0] = 3;
  dVar16 = (double)((float)uStack_ca * lbl_82005718) * lbl_82011890;
  dStack_108 = (double)((__int64)(dVar16 * dVar15 * dVar17) & 0xffffffff);
  fn_826A79D8(lVar13,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff820110f8,
                    auStack_110);
  fn_82696330(auStack_110);
  auStack_140[0] = 3;
  dStack_138 = (double)((__int64)(dVar16 * dVar14 * dVar17) & 0xffffffff);
  fn_826A79D8(lVar13,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff820110f0,
                    auStack_140);
  fn_82696330(auStack_140);
  fn_82696BC8(*(unsigned int *)(param_1 + 4),uVar6);
  if ((puVar11 != (unsigned int *)0x0) &&
     (uVar5 = *puVar11, *puVar11 = (unsigned int)((unsigned __int64)uVar5 - 1), (unsigned __int64)uVar5 - 1 == 0)) {
    fn_826C6368(puVar11);
    fn_8267BE38(puVar11);
  }
  ppuStack_180 = &lbl_82010C6C;
  fn_8278B290(&ppuStack_180);
  fn_8267C488(&ppuStack_180);
  fn_826FDF58(auStack_f0);
  fn_8267C498(iVar10);
  uVar5 = apuStack_188[0][2];
  apuStack_188[0][2] = (int)((unsigned __int64)uVar5 - 1);
  if ((unsigned __int64)uVar5 - 1 == 0) {
    fn_826944C8(apuStack_188[0]);
  }
  if ((uVar6 & 0xffffffff) != 0) {
    fn_826824B0(uVar6);
  }
  fn_8267C498(piVar2);
  return;
}

