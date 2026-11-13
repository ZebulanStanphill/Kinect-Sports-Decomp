extern unsigned int *auStack_40;
extern int fn_8225C590();
extern int fn_8225F160();
extern int fn_822AB000();
extern int fn_822AE9D8();
extern int fn_82351510();
extern int fn_823546D0();
extern int fn_82356E38();
extern int fn_823577F0();
extern int fn_824601C0();
extern int fn_82490FC8();
extern int fn_8249ABC0();
extern int fn_8252DC18();
extern int fn_82534820();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_82547C80();
extern int fn_82555A88();
extern int fn_825604A0();
extern int fn_82566E58();
extern int fn_8256A938();
extern int fn_8256BF18();
extern int fn_8256CF38();
extern int fn_8266C6D8();
extern int fn_8266C708();
extern int fn_8266EC60();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832765BC;


void fn_82355538(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  int iVar8;
  char cVar9;
  char *pcVar11;
  unsigned __int64 uVar10;
  unsigned int uVar12;
  int *piVar13;
  unsigned int auStack_40;
  
  *(unsigned int *)(param_1 + 0x10) = 0;
  fn_8252DC18(1);
  fn_8256A938();
  uVar4 = fn_8256BF18();
  fn_8256CF38(uVar4,param_1 + 0x310);
  fn_8256CF38(uVar4,param_1 + 0x30c);
  iVar5 = fn_8225F160();
  if (*(int *)(iVar5 + 8) == 2) {
    fn_822AB000(*(unsigned int *)**(unsigned int **)(param_1 + 0x1c),
                    *(unsigned int *)(param_1 + 0x34c));
  }
  fn_82356E38(param_1);
  *(unsigned int *)(param_1 + 0x370) = ltcg_pool_0_0f;
  fn_823577F0(param_1 + 0x3cc,param_1 + 0x3d4);
  fn_823577F0(param_1 + 0x27c,param_1 + 0x284);
  fn_823577F0(param_1 + 0x288,param_1 + 0x290);
  fn_82351510(param_1,0);
  pcVar11 = (char *)(param_1 + 0x2cc);
  do {
    cVar9 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar9 != '\0');
  if ((((int)pcVar11 - (param_1 + 0x2cc) != 1) &&
      (iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0x3e4), iVar5 != 0)) &&
     (uVar10 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x8c0), uVar10 != 0)) {
    puVar6 = (unsigned int *)fn_82555A88(uVar10 + 0x98);
    if (puVar6 != (unsigned int *)0x0) {
      fn_82547C80((unsigned __int64)*puVar6 + 0xd0,0,0);
    }
  }
  if (*(int *)(param_1 + 0x294) != 0) {
    fn_82566E58(*(int *)(param_1 + 0x294),*(unsigned int *)(*(int *)(param_1 + 0x14) + 0x844));
    *(unsigned int *)(param_1 + 0x294) = 0;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    fn_825604A0(param_1 + 0xb0);
    *(unsigned int *)(param_1 + 0xa0) = 0;
  }
  if (*(unsigned int **)(param_1 + 0x3ac) != (unsigned int *)0x0) {
    (**(int (***)())**(unsigned int **)(param_1 + 0x3ac))();
    fn_82536288((unsigned int *)(param_1 + 0x3ac));
    *(unsigned int *)(param_1 + 0x3ac) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    fn_822AE9D8();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar5 = fn_8225F160();
    if (*(int *)(iVar5 + 8) == 2) {
      iVar5 = *(int *)(param_1 + 0x18);
      uVar1 = *(unsigned int *)(param_1 + 0x34c);
      puVar2 = (unsigned int *)**(unsigned int **)(iVar5 + 0x20);
      for (piVar13 = (int *)*puVar2; piVar13 != (int *)puVar2[1]; piVar13 = piVar13 + 1) {
        iVar8 = fn_8225C590();
        if (uVar1 < (unsigned int)(*(int *)(iVar8 + 0x14) - *(int *)(iVar8 + 0x10) >> 2)) {
          uVar12 = *(unsigned int *)(uVar1 * 4 + *(int *)(iVar8 + 0x10));
        }
        else {
          uVar12 = 0;
        }
        *(unsigned int *)(*piVar13 + 0x34) = uVar12;
        puVar2 = (unsigned int *)**(unsigned int **)(iVar5 + 0x20);
      }
    }
    piVar13 = *(int **)(param_1 + 0x18);
    iVar5 = *(int *)(param_1 + 0x34c);
    uVar12 = *(unsigned int *)(param_1 + 0x344);
    (**(int (***)())(*piVar13 + 0xc))(piVar13,uVar12,iVar5);
    uVar7 = (**(int (***)())(*piVar13 + 200))(piVar13);
    iVar8 = fn_8225F160();
    *(unsigned int *)(iVar8 + 0x40) = uVar7;
    iVar8 = fn_8249ABC0();
    iVar8 = *(int *)(iVar8 + 0x1c);
    uVar7 = *(unsigned int *)(iVar8 + 0xd4);
    uVar3 = *(unsigned int *)(iVar8 + 0xd8);
    *(unsigned int *)(iVar8 + 0x20) = 1;
    *(unsigned int *)(iVar8 + 0xd4) = uVar12;
    *(int *)(iVar8 + 0xd8) = iVar5;
    *(unsigned int *)(iVar8 + 0xdc) = uVar7;
    *(unsigned int *)(iVar8 + 0xe0) = uVar3;
    *(unsigned int *)(iVar8 + 0xd0) = 0xffffffff;
    if (iVar5 != piVar13[0x45]) {
      piVar13[0x3a] = 0;
      piVar13[0x3b] = 0;
    }
    piVar13[0x45] = iVar5;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_82490FC8();
  }
  fn_823546D0(param_1);
  fn_82356E38(param_1);
  if (lbl_832765BC != 0) {
    auStack_40 = 0;
    fn_824601C0(lbl_832765BC,&auStack_40);
    uVar12 = auStack_40;
    cVar9 = fn_82534820(auStack_40);
    if (cVar9 != '\0') {
      auStack_40 = uVar12;
      auStack_40 =
           fn_82535298(&auStack_40,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0x84c),
                             0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82536288(&auStack_40);
    }
  }
  *(unsigned int *)(param_1 + 0x37c) = 0;
  uVar4 = fn_8266EC60();
  fn_8266C6D8(uVar4,0x40,1);
  uVar4 = fn_8266EC60();
  fn_8266C708(uVar4,0x40,1);
  return;
}

