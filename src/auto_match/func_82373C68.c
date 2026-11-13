extern unsigned int *auStack_ec;
extern unsigned int *auStack_f0;
extern int fn_82230300();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82372DE8();
extern int fn_824C97F0();
extern int fn_8255A780();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_fc;


void fn_82373C68(int param_1,int param_2,int param_3)

{
  float fVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int uVar4;
  __int64 lVar5;
  int iVar6;
  unsigned int ****ppppuVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int *piVar10;
  double dVar11;
  double dVar12;
  unsigned int ***apppuStack_110 [5];
  unsigned int uStack_fc;
  unsigned char auStack_f0 [4];
  unsigned char auStack_ec [236];
  
  piVar10 = *(int **)(param_2 * 4 + **(int **)(param_1 + 8));
  lVar5 = fn_8255A780((double)*(float *)(*(int *)(piVar10[4] * 4 + *piVar10) + 0x14),
                       (double)lbl_82193E50,(double)lbl_82193AF0);
  if (lVar5 == 0) {
    uVar9 = 0xffffffff821b3eb4;
  }
  else {
    uVar9 = 0xffffffff821b3ea8;
  }
  puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x54c) + 4);
  piVar3 = (int *)puVar2[1];
  for (piVar10 = (int *)*puVar2; piVar10 != piVar3; piVar10 = piVar10 + 2) {
    fn_824C97F0(*(unsigned int *)(*piVar10 + 0x28),uVar9);
  }
  dVar12 = (double)lbl_821CA460;
  dVar11 = dVar12;
  if (param_3 == 0) {
    dVar11 = (double)lbl_8218E8E8;
  }
  iVar6 = fn_82372DE8(param_1,0);
  if (iVar6 == 0) {
    iVar6 = fn_82372DE8(param_1,1);
    uVar8 = 0;
    if (iVar6 == 0) goto LAB_82373d58;
  }
  uVar8 = 1;
LAB_82373d58:
  iVar6 = *(int *)(param_1 + 0x54c);
  piVar10 = *(int **)**(int **)(param_1 + 8);
  piVar3 = (int *)((int *)**(int **)(param_1 + 8))[1];
  fVar1 = *(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  *(int *)(iVar6 + 0x18) = (int)*(float *)(*(int *)(piVar10[4] * 4 + *piVar10) + 0x20);
  *(float *)(iVar6 + 0xc) = (float)dVar11;
  *(unsigned int *)(iVar6 + 0x10) = 0;
  *(int *)(iVar6 + 0x1c) = (int)fVar1;
  *(unsigned int *)(iVar6 + 0x14) = uVar8;
  if ((int)lVar5 == 0) {
    uVar9 = 0xffffffff821b35ec;
  }
  else {
    uVar9 = 0xffffffff821b35d8;
  }
  piVar3 = (int *)(*(unsigned int **)(param_1 + 0xa8))[1];
  for (piVar10 = (int *)**(unsigned int **)(param_1 + 0xa8); piVar10 != piVar3; piVar10 = piVar10 + 2)
  {
    fn_824C97F0(*(unsigned int *)(*piVar10 + 0x28),uVar9);
  }
  if (param_2 == 0) {
    uVar9 = 0xffffffff821a6a9c;
  }
  else {
    uVar9 = 0xffffffff821a6b18;
  }
  piVar3 = (int *)(*(unsigned int **)(param_1 + 0xa8))[1];
  for (piVar10 = (int *)**(unsigned int **)(param_1 + 0xa8); piVar10 != piVar3; piVar10 = piVar10 + 2)
  {
    fn_824C97F0(*(unsigned int *)(*piVar10 + 0x28),uVar9);
  }
  fn_8223CFC0(auStack_f0,2,1);
  iVar6 = *(int *)(param_1 + 0xa0c);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar4 = lbl_83265A28 & 0x7fffff;
  uVar9 = fn_82240158(auStack_f0,0xffffffff821b3600);
  fn_8223FBB0(uVar9,(int)((double)(float)((double)(float)(uVar4 | 0x3f800000) - dVar12) *
                                (double)(__int64)iVar6 + dVar12));
  fn_822403C8(apppuStack_110,auStack_ec);
  piVar3 = (int *)(*(unsigned int **)(param_1 + 0xa8))[1];
  for (piVar10 = (int *)**(unsigned int **)(param_1 + 0xa8); piVar10 != piVar3; piVar10 = piVar10 + 2)
  {
    ppppuVar7 = (unsigned int ****)apppuStack_110[0];
    if (uStack_fc < 0x10) {
      ppppuVar7 = apppuStack_110;
    }
    fn_824C97F0(*(unsigned int *)(*piVar10 + 0x28),ppppuVar7);
  }
  fn_82230300(apppuStack_110,1,0);
  fn_8223DCC8(auStack_f0);
  return;
}

