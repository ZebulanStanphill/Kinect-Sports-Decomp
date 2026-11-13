extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82FAB9C0();
extern int fn_83015B10();
extern int fn_8301E5E0();
extern int fn_8301F0C0();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642E0;


void fn_8301F1B8(double param_1,int param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8)

{
  int iVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  double dVar6;
  double dVar7;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  
  fStack_70 = *param_4 - *param_3;
  fStack_6c = param_4[1] - param_3[1];
  fStack_68 = param_4[2] - param_3[2];
  dVar6 = (double)fn_8301E5E0(&fStack_70);
  *param_6 = (float)(dVar6 / param_1);
  if (*(int *)(param_2 + 0x4c) == 0) {
    uVar3 = fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0xfe0);
    *(unsigned int *)(param_2 + 0x4c) = uVar3;
  }
  fVar2 = lbl_821AAD20;
  iVar1 = *(int *)(param_2 + 0x4c);
  dVar6 = (double)lbl_821AAD20;
  *param_7 = lbl_821AAD20;
  *param_8 = fVar2;
  if (iVar1 != 0) {
    uVar5 = -(unsigned int)(*(unsigned char *)(iVar1 + 0x5c) != 0xff) &
            (unsigned int)*(unsigned char *)(iVar1 + 0x5c) * 0xc + iVar1 + 0x20;
    uVar4 = -(unsigned int)(*(unsigned char *)(iVar1 + 0x5d) != 0xff) &
            (unsigned int)*(unsigned char *)(iVar1 + 0x5d) * 0xc + iVar1 + 0x20;
    if (uVar5 != 0) {
      dVar7 = (double)fn_83015B10((double)*param_6,uVar5);
      *param_7 = (float)dVar7;
    }
    if (uVar4 == uVar5) {
      *param_8 = *param_7;
    }
    else if (uVar4 != 0) {
      dVar7 = (double)fn_83015B10((double)*param_6,uVar4);
      *param_8 = (float)dVar7;
    }
    if (((*(unsigned char *)(iVar1 + 0x61) & 0x80) != 0) &&
       ((*(int *)(param_2 + 8) == 3 ||
        ((*(int *)(param_2 + 8) == 2 && (*(char *)(param_2 + 0x32) != '\0')))))) {
      fn_8301F0C0((double)*param_6,param_2,param_3,&fStack_70);
      return;
    }
  }
  *param_5 = (float)dVar6;
  return;
}

