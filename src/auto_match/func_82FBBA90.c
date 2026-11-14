extern unsigned int *auStack_50;
extern unsigned int fStack_40;
extern unsigned int *fStack_44;
extern int XMemSet();
extern int fn_82F64A40();
extern int fn_82FBAA10();
extern int fn_82FBAB20();
extern unsigned int lbl_8216C63C;
extern unsigned int uStack_3c;
extern unsigned int uStack_48;
extern unsigned int uStack_54;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82FBBA90(int param_1,unsigned int *param_2)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  double dVar6;
  unsigned int uStack_54;
  unsigned char auStack_50 [8];
  unsigned int uStack_48;
  float fStack_44;
  float fStack_40;
  unsigned char uStack_3c;
  
  puVar3 = *(unsigned int **)(param_1 + 8);
  puVar2 = &uStack_54;
  lVar5 = 6;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uStack_3c = *(unsigned char *)(param_1 + 0x41);
  if (fStack_44 != *(float *)(param_1 + 0x34)) {
    *(float *)(param_1 + 0x34) = fStack_44;
    dVar6 = (double)fn_82F64A40((double)(lbl_8216C63C /
                                         ((float)*(unsigned int *)(param_1 + 0x18) * fStack_44)));
    *(float *)(param_1 + 0x38) = (float)dVar6;
  }
  fStack_44 = *(float *)(param_1 + 0x38);
  uStack_48 = *(unsigned int *)(param_1 + 0x3c);
  if (param_2[2] == 0x11) {
    uVar1 = (unsigned __int64)*(unsigned short *)(param_2 + 3) - (unsigned __int64)*(unsigned short *)((int)param_2 + 0xe);
    uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
    if ((uVar1 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 0x30)) {
      uVar4 = uVar1;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      XMemSet((unsigned __int64)*(unsigned short *)((int)param_2 + 0xe) * 4 + (unsigned __int64)*param_2,0,
                        (uVar4 & 0x3fffffff) << 2);
    }
    *(short *)((int)param_2 + 0xe) = *(short *)((int)param_2 + 0xe) + (short)uVar4;
    lVar5 = *(unsigned int *)(param_1 + 0x30) - uVar4;
    *(int *)(param_1 + 0x30) = (int)lVar5;
    if (lVar5 != 0) {
      param_2[2] = 0x2d;
    }
  }
  else {
    *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x20);
  }
  (**(int (***)())(param_1 + 4))(param_1,param_2,auStack_50);
  if (fStack_40 == *(float *)(param_1 + 0xc)) {
    fn_82FBAB20(param_1,param_2);
  }
  else {
    dVar6 = (double)fn_82FBAA10();
    *(float *)(param_1 + 0xc) = (float)dVar6;
  }
  return;
}

