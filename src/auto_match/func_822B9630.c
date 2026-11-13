typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_822315A0();
extern int fn_82282360();
extern int fn_8251F720();
extern int fn_8265C9E0();
extern unsigned int lbl_8218DF78;
extern unsigned int lbl_821ACA24;
extern unsigned int lbl_821ACA34;
extern unsigned int lbl_831D13E8;
extern V16 loadVectorLeftIndexed128();
extern V16 loadVectorRightIndexed128();


int * fn_822B9630(int *param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar2;
  int iVar3;
  __int64 lVar1;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  *param_1 = param_2;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    puVar2[3] = 0;
    *puVar2 = &lbl_821ACA34;
  }
  if (param_1[3] != 0) {
    fn_822315A0();
  }
  param_1[3] = (int)puVar2;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = -1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if ((param_3 != (unsigned int *)0x0) &&
     (uVar4 = (unsigned __int64)*param_3, uVar4 != (uVar4 - 1) + (unsigned __int64)(uVar4 == 0))) {
    iVar3 = fn_8251F720(param_3,0);
    param_1[10] = iVar3;
  }
  if ((param_1[10] == 0) && (*(int *)(*param_1 + 0x8c0) != 0)) {
    loadVectorRightIndexed128(0xc,0xffffffff831d13ec);
    loadVectorLeftIndexed128(0xffffffff831d13e4,8);
    lVar1 = fn_8265C9E0(0xf0);
    lVar5 = 0;
    if (lVar1 != 0) {
      puVar2 = (unsigned int *)lVar1;
      puVar2[1] = 1;
      puVar2[2] = 1;
      *puVar2 = &lbl_821ACA24;
      lVar5 = lVar1;
      if (lVar1 != -0x10) {
        fn_82282360((double)lbl_8218DF78,(double)lbl_8218DF78,(double)lbl_831D13E8);
      }
    }
    iVar3 = param_1[3];
    param_1[3] = (int)lVar5;
    param_1[2] = (int)lVar5 + 0x10;
    if (iVar3 != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

