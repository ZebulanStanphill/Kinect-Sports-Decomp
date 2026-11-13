#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern int fn_82CE5458();
extern int fn_82CEA280();
extern int fn_82DBE7C8();
extern int fn_82DBE8C8();
extern int fn_82DBED98();
extern unsigned int lbl_82131F88;
extern unsigned int uStack_58;


int fn_82DEADA8(int param_1,int param_2,unsigned char *param_3,int *param_4,unsigned char *param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  int iVar7;
  unsigned __int64 uVar6;
  char cVar8;
  double dVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned char abStack_60;
  unsigned __int64 uStack_58;
  unsigned char auStack_50 [16];
  
  iVar1 = *(int *)(param_1 + 0x98);
  dVar9 = (double)(**(int (***)())(**(int **)(param_2 + 0xc) + 0x10))();
  uStack_58 = CONCAT44((float)dVar9,(((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF));
  fn_82CE5458(&abStack_60,&uStack_58);
  uStack_58 = (__int64)*(float *)(&lbl_82131F88 + (unsigned int)abStack_60 * 4);
  *param_5 = (unsigned char)uStack_58;
  if (iVar1 != 0) {
    if (param_1 == *(int *)(param_2 + 0x14)) {
      iVar7 = fn_82DBE7C8();
    }
    else {
      iVar7 = fn_82DBE8C8(*(unsigned int *)(param_2 + 0xc));
    }
    puVar4 = (unsigned int *)(in_r0 + iVar7 & 0xfffffff0);
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    uVar2 = *(unsigned int *)(param_1 + 0x10);
    uVar3 = *(unsigned int *)(param_1 + 8);
    puVar5 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar10;
    puVar5[2] = uVar11;
    puVar5[3] = uVar12;
    uVar6 = fn_82DBED98(uVar3,uVar2,auStack_50);
    *param_4 = (int)uVar6;
    if (((int)uVar6 != -1) && (cVar8 = fn_82CEA280(iVar1 + 0x1c,uVar6,0), cVar8 != '\0')) {
      return iVar1;
    }
    if (*(char *)(iVar1 + 0x14) != '\0') {
      *param_3 = 1;
      return iVar1;
    }
  }
  return 0;
}

