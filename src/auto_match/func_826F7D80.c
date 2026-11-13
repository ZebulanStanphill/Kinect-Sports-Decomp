#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern int fn_8267C4F0();
extern int fn_826A71F0();
extern int fn_826A9FB0();
extern unsigned int uStack_34;


void fn_826F7D80(unsigned int *param_1,int *param_2,unsigned int param_3)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char uVar3;
  unsigned char uVar4;
  unsigned char bVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  int iVar11;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar12;
  unsigned int uStack_34;
  
  uStack_34 = ((((unsigned __int64)(uStack_34)) & (~(((unsigned __int64)0xFFFFFF) << 8))) | ((((unsigned __int64)((((unsigned __int64)(uStack_34) >> 8) & 0xFFFFFF) & 0xffff)) & ((unsigned __int64)0xFFFFFF)) << 8));
  uStack_34 = (unsigned int)(((unsigned __int64)(uStack_34) >> 8) & 0xFFFFFF);
  param_1[1] = 0;
  *param_1 = param_3;
  param_1[2] = 0xff;
  param_1[3] = uStack_34;
  if (param_2[3] != 0) {
    param_2[2] = param_2[2] + 1;
  }
  iVar6 = param_2[2];
  iVar7 = *param_2;
  param_2[3] = 0;
  iVar11 = iVar7 + iVar6;
  uVar4 = *(unsigned char *)(iVar7 + iVar6);
  uVar1 = *(unsigned char *)(iVar11 + 2);
  uVar2 = *(unsigned char *)(iVar11 + 1);
  uVar3 = *(unsigned char *)(iVar11 + 3);
  param_2[2] = iVar6 + 4;
  uVar12 = (unsigned __int64)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar1),uVar2),uVar4);
  if ((*param_1 & 0x20000) != 0) {
    param_2[3] = 0;
    bVar5 = *(unsigned char *)(iVar6 + 4 + iVar7);
    uVar12 = uVar12 - 1;
    param_2[2] = iVar6 + 5;
    *(unsigned short *)(param_1 + 2) = (unsigned short)bVar5;
  }
  uVar8 = fn_826A9FB0();
  if (param_1[4] != 0) {
    fn_8267C4F0();
  }
  param_1[4] = uVar8;
  fn_826A71F0(uVar8,param_2,uVar12);
  uVar9 = (unsigned __int64)*(unsigned int *)(param_1[4] + 0xc);
  if ((uVar12 & 0xffffffff) != uVar9) {
    if (uVar9 < (uVar12 & 0xffffffff)) {
      for (lVar10 = uVar12 - uVar9; lVar10 != 0; lVar10 = lVar10 + -1) {
        if (param_2[3] != 0) {
          param_2[2] = param_2[2] + 1;
        }
        param_2[3] = 0;
        param_2[2] = param_2[2] + 1;
      }
    }
    else {
      param_2[2] = (param_2[2] - *(unsigned int *)(param_1[4] + 0xc)) + (int)uVar12;
    }
  }
  return;
}

