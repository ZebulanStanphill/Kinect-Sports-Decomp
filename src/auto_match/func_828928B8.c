extern unsigned int *auStack_138;
extern unsigned int *auStack_160;
extern unsigned int *auStack_180;
extern unsigned int *auStack_a0;
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223F5A0();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_82897BE8();
extern int fn_828B5A20();
extern int fn_82F622E0();
extern int fn_82F62528();
extern int fn_82F62578();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_8202115C;
extern unsigned int lbl_820211D4;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_100;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_fc;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_828928B8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int auStack_180 [4];
  unsigned int uStack_170;
  unsigned int uStack_16c;
  unsigned int auStack_160 [4];
  unsigned int uStack_150;
  unsigned int uStack_14c;
  unsigned char **appuStack_140 [2];
  unsigned char auStack_138 [12];
  unsigned int *puStack_12c;
  unsigned int *puStack_128;
  unsigned int *puStack_11c;
  unsigned int *puStack_118;
  unsigned int *puStack_10c;
  unsigned int *puStack_108;
  int *piStack_104;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned char **appuStack_f0 [20];
  unsigned char auStack_a0 [128];
  
  appuStack_f0[0] = &lbl_82020F40;
  appuStack_140[0] = (unsigned char **)&lbl_821AA8E0;
  fn_8223CD08(appuStack_f0,appuStack_140 + 1,0);
  *(unsigned char ***)((int)appuStack_140 + (int)appuStack_140[0][1]) = &lbl_82021284;
  fn_8223CF38(appuStack_140 + 1,2);
  if (*(char *)(param_2 + 0x9d) == '\0') {
    uVar11 = 0xffffffff82023878;
  }
  else {
    uVar11 = 0xffffffff82023880;
  }
  uVar3 = fn_828B5A20(auStack_180,param_2 + 0x80,param_3,*(unsigned int *)(param_2 + 0x6c));
  uVar4 = fn_82240158(appuStack_140,0xffffffff8202385c);
  uVar11 = fn_82240158(uVar4,uVar11);
  uVar11 = fn_82240158(uVar11,0xffffffff82023848);
  uVar11 = fn_8223B728(uVar11,uVar3);
  fn_82240158(uVar11,0xffffffff82023800);
  if (0xf < uStack_16c) {
    fn_8265CA20(auStack_180[0]);
  }
  uStack_170 = 0;
  uStack_16c = 0xf;
  auStack_180[0] = auStack_180[0] & 0xffffff;
  if (*(char *)(param_2 + 0x9d) != '\0') {
    uVar1 = *(unsigned char *)(param_2 + 0x9e);
    uVar11 = fn_82240158(appuStack_140,0xffffffff8202383c);
    uVar11 = fn_8223FBB0(uVar11,uVar1);
    fn_82240158(uVar11,0xffffffff82196fb0);
    iVar8 = *(int *)(param_2 + 0x8c);
    uVar10 = 0;
    iVar7 = *(int *)(param_2 + 0x90) - iVar8 >> 2;
    if (iVar7 != 0) {
      iVar9 = 0;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      do {
        iVar8 = *(int *)(iVar8 + iVar9);
        if (iVar8 != 0) {
          piVar2 = *(int **)(iVar8 + 0x1c);
          puVar5 = (unsigned int *)fn_82F62578(auStack_a0,3);
          piVar6 = (int *)fn_82240158(appuStack_140,0xffffffff82023830);
          if (piVar6 == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(*piVar6 + 4) + (int)piVar6;
          }
          (*(int (**)())*puVar5)(iVar7,*(unsigned __int64 *)(puVar5 + 2));
          uVar11 = (**(int (***)())(*piVar2 + 0xc))(auStack_160,piVar2,param_3,iVar8 + 0xc);
          uVar3 = fn_82897BE8(piVar2);
          uVar4 = fn_82520AC8(piVar6,uVar10);
          uVar4 = fn_82240158(uVar4,0xffffffff82023828);
          uVar3 = fn_8223B728(uVar4,uVar3);
          uVar3 = fn_82240158(uVar3,0xffffffff82023824);
          fn_8223B728(uVar3,uVar11);
          if (0xf < uStack_14c) {
            fn_8265CA20(auStack_160[0]);
          }
          uStack_14c = 0xf;
          uStack_150 = 0;
          auStack_160[0] = auStack_160[0] & 0xffffff;
        }
        uVar10 = uVar10 + 1;
        iVar8 = *(int *)(param_2 + 0x8c);
        iVar9 = iVar9 + 4;
      } while ((uVar10 & 0xffffffff) < (unsigned __int64)(unsigned int)(*(int *)(param_2 + 0x90) - iVar8 >> 2));
    }
  }
  fn_822403C8(param_1,appuStack_140 + 1);
  *(unsigned char ***)((int)appuStack_140 + (int)appuStack_140[0][1]) = &lbl_82021284;
  appuStack_140[1] = &lbl_820211D4;
  if ((uStack_fc & 1) != 0) {
    fn_8265CA20(*puStack_12c);
  }
  *puStack_12c = 0;
  *puStack_11c = 0;
  *puStack_10c = 0;
  *puStack_128 = 0;
  *puStack_118 = 0;
  *puStack_108 = 0;
  uStack_fc = uStack_fc & 0xfffffffe;
  uStack_100 = 0;
  appuStack_140[1] = &lbl_8202115C;
  if (piStack_104 != (int *)0x0) {
    if ((*piStack_104 != 0) &&
       (puVar5 = (unsigned int *)fn_8223F5A0(), puVar5 != (unsigned int *)0x0)) {
      (**(int (***)())*puVar5)(puVar5,1);
    }
    fn_8265CA20(piStack_104);
  }
  fn_82F62528(auStack_138);
  *(unsigned char ***)((int)appuStack_140 + (int)appuStack_140[0][1]) = &lbl_82020F40;
  appuStack_f0[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_f0);
  return param_1;
}

