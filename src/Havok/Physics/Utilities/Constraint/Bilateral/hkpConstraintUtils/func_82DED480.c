typedef unsigned char bool;
extern unsigned int *auStack_220;
extern unsigned int *auStack_230;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;


unsigned __int64 fn_82DED480(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned char auStack_230 [1];
  unsigned char auStack_220 [512];

  piVar2 = *(int **)(param_1 + 0xc);
  uVar5 = (**(int (***)())(*piVar2 + 0x20))(piVar2);
  if ((uVar5 & 0xffffffff) < 8) {
    bVar1 = (int)uVar5 != 0;
    if ((uVar5 == 1 && bVar1) || (uVar5 == 2 && bVar1)) {
LAB_82ded4e4:
      iVar8 = 0x50;
      iVar7 = 0x90;
    }
    else {
      if ((uVar5 == 3 && bVar1) ||
         (((uVar5 == 4 && bVar1 || (uVar5 == 5 && bVar1)) || (uVar5 == 6 && bVar1))))
      goto LAB_82ded508;
      if (bVar1) goto LAB_82ded4e4;
      iVar8 = 0x20;
      iVar7 = 0x30;
    }
    puVar3 = (unsigned int *)((int)piVar2 + iVar8 & 0xfffffff0);
    uVar9 = puVar3[1];
    uVar10 = puVar3[2];
    uVar11 = puVar3[3];
    uVar6 = 0;
    puVar4 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar9;
    puVar4[2] = uVar10;
    puVar4[3] = uVar11;
    puVar3 = (unsigned int *)((int)piVar2 + iVar7 & 0xfffffff0);
    uVar9 = puVar3[1];
    uVar10 = puVar3[2];
    uVar11 = puVar3[3];
    puVar4 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar9;
    puVar4[2] = uVar10;
    puVar4[3] = uVar11;
  }
  else {
LAB_82ded508:
    fn_82CEE578(auStack_230,auStack_220,0x200);
    fn_82CEDB38(auStack_230,0xffffffff821453b0);
    (**(int (***)())(*lbl_8323B464 + 0xc))
              (lbl_8323B464,1,0xffffffffabbabf3b,auStack_220,0xffffffff82145380,0xe2);
    fn_82CED958(auStack_230);
    uVar6 = 1;
  }
  return uVar6;
}
