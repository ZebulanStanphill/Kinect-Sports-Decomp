extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82531F18();
extern int fn_82672C20();
extern unsigned int iStack_70;
extern unsigned int lbl_8219275C;
extern unsigned int lbl_82193CF4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831CEF34;
extern unsigned int lbl_831CEF4C;
extern unsigned int lbl_831CEF64;
extern unsigned int uStack_6c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82284448(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned char *puVar6;
  __int64 lVar7;
  double dVar8;
  int iStack_70;
  unsigned int uStack_6c;
  float fStack_68;
  float fStack_64;
  unsigned char auStack_60 [8];
  double dStack_58;
  unsigned char auStack_50 [8];
  double dStack_48;
  unsigned char auStack_40 [64];
  
  iStack_70 = 0;
  iVar4 = fn_82531F18((double)lbl_821CA460,param_2,&fStack_68,&iStack_70);
  iVar3 = iStack_70;
  iVar2 = (int)param_3;
  if (iVar4 == 0) {
LAB_82284544:
    if (iVar3 != 0) goto LAB_82284594;
  }
  else if (iStack_70 != 0) {
    puVar5 = &uStack_6c;
    lVar7 = 2;
    do {
      puVar5[3] = 0;
      puVar5 = puVar5 + 4;
      *puVar5 = 0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    fVar1 = lbl_82193CF4;
    if (param_1[iVar2 * 0x8d + 3] != 0) {
      fVar1 = lbl_8219275C;
    }
    dVar8 = (double)fVar1;
    fn_82273CD8(auStack_60,3);
    dStack_58 = (double)(float)((double)fStack_68 + dVar8);
    fn_82273CD8(auStack_50,3);
    dStack_48 = (double)fStack_64;
    fn_82672C20(*param_1,*(unsigned int *)
                                ((int)&lbl_831CEF64 +
                                (int)((param_3 & 0xffffffff) << 2)),auStack_60,2);
    puVar6 = auStack_40;
    lVar7 = 1;
    do {
      puVar6 = puVar6 + -0x10;
      fn_82273C88(puVar6);
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    goto LAB_82284544;
  }
  if (param_1[iVar2 * 0x8d + 0xd] == 0) {
    fn_82672C20(*param_1,*(unsigned int *)
                                ((int)&lbl_831CEF4C +
                                (int)((param_3 & 0xffffffff) << 2)),0,0);
    param_1[iVar2 * 0x8d + 0xd] = 1;
    return;
  }
  if (iVar3 == 0) {
    return;
  }
LAB_82284594:
  if (param_1[iVar2 * 0x8d + 0xd] != 0) {
    fn_82672C20(*param_1,*(unsigned int *)
                                ((int)&lbl_831CEF34 +
                                (int)((param_3 & 0xffffffff) << 2)),0,0);
    param_1[iVar2 * 0x8d + 0xd] = 0;
  }
  return;
}

