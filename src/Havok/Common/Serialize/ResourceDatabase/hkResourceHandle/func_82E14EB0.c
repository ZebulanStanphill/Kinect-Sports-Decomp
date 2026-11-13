extern unsigned int *auStack_270;
extern unsigned int *auStack_288;
extern unsigned int *auStack_290;
extern unsigned int *auStack_294;
extern int fn_82CE5410();
extern int fn_82CEAC20();
extern int fn_82CEAC60();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFD5B0();
extern int fn_82CFFD78();
extern int fn_82CFFEF0();
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_298;
extern unsigned int uStack_29c;
extern unsigned int uStack_2a0;


void fn_82E14EB0(int *param_1,unsigned int *param_2)

{
  int iVar4;
  unsigned int *puVar5;
  char *pcVar6;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  __int64 lVar12;
  struct { unsigned int first; unsigned int second; } stack_pair_2a0;

  unsigned int uStack_298;
  unsigned char auStack_294 [4];
  unsigned int auStack_290 [2];
  unsigned char auStack_288 [24];
  unsigned char auStack_270 [624];
  
  stack_pair_2a0.first = 0;
  stack_pair_2a0.second = 0;
  uStack_298 = 0x80000000;
  (**(int (***)())(*param_1 + 0x2c))(param_1,&stack_pair_2a0.first);
  uVar10 = (unsigned __int64)stack_pair_2a0.second - 1;
  if (-1 < (__int64)uVar10) {
    lVar11 = (uVar10 & 0xfffffff) << 4;
    do {
      uVar9 = (unsigned __int64)stack_pair_2a0.first;
      iVar4 = (**(int (***)())*param_2)(param_2,*(unsigned int *)((int)(lVar11 + uVar9) + 4),auStack_290);
      if (iVar4 != 0) {
        lVar12 = lVar11 + uVar9 + 8;
        puVar5 = (unsigned int *)fn_82CFFEF0(lVar12);
        uVar9 = fn_82CFD5B0();
        pcVar6 = (char *)fn_82CEAC60(auStack_294,uVar9,auStack_290[0]);
        if ((*pcVar6 == '\0') && ((unsigned __int64)auStack_290[0] != (uVar9 & 0xffffffff))) {
          fn_82CEE578(auStack_288,auStack_270,0x200);
          uVar1 = fn_82CEAC20(uVar9);
          uVar2 = fn_82CEAC20(auStack_290[0]);
          uVar3 = fn_82CEDB38(auStack_288,0xffffffff8214b300);
          uVar2 = fn_82CEDB38(uVar3,uVar2);
          uVar2 = fn_82CEDB38(uVar2,0xffffffff8214b328);
          fn_82CEDB38(uVar2,uVar1);
          (**(int (***)())(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,1,0xfffffffff034ed21,auStack_270,0xffffffff8214b2c0,0xb3);
                    /* WARNING: Subroutine does not return */
          fn_82CED958(auStack_288);
        }
        iVar7 = (**(int (***)())(*param_1 + 0x18))(param_1);
        if (iVar4 == iVar7) break;
        piVar8 = (int *)fn_82CFFD78(lVar12,0);
        *piVar8 = iVar4;
        (**(int (***)())(*param_1 + 0x28))(param_1,*puVar5);
      }
      uVar10 = uVar10 - 1;
      lVar11 = lVar11 + -0x10;
    } while (-1 < (__int64)uVar10);
  }
  iVar4 = fn_82CE5410();
  stack_pair_2a0.second = 0;
  if ((uStack_298 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),stack_pair_2a0.first,uStack_298 & 0x3fffffff,0x10);
  }
  return;
}

