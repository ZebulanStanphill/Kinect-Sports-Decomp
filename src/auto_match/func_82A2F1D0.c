#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack_60 ((*(unsigned __int64*)&uStack_60))
extern int fn_82A2DDC0();
extern int fn_82A2EC98();
extern int fn_82A2EEB0();
extern int fn_82A2EFF0();
extern unsigned int iStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64
fn_82A2F1D0(int param_1,__int64 param_2,unsigned int param_3,unsigned __int64 param_4,unsigned int param_5,
             unsigned int *param_6,unsigned int *param_7)

{
  unsigned char *pbVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  int aiStack_70;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned __int64 uStack_58;
  int iStack_50;
  
  if (param_5 == 0xffffffff) {
    param_5 = 0xffffff;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa8) + param_2 + 1;
      goto LAB_82a2f244;
    }
    if (param_3 < 3) {
      uVar5 = ((unsigned __int64)*(unsigned int *)(param_1 + 0xa8) + param_2) - 1;
      goto LAB_82a2f244;
    }
  }
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa8) + param_2;
LAB_82a2f244:
  if (((uVar5 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 0xa0)) ||
     (uVar3 = fn_82A2EC98(param_1,uVar5 - *(unsigned int *)(param_1 + 0xa0)), -1 < (int)uVar3)) {
    if (param_3 == 3) {
      uVar3 = 0;
    }
    else {
      *(unsigned char *)(param_1 + 0xcc) = 1;
      uStack_58 = 0;
      iStack_50 = 0;
      _uStack_60 = CONCAT44((int)param_2,0xffffffff);
      if (*(char *)(param_1 + 0xca) == '\0') {
        uVar3 = fn_82A2EEB0();
      }
      else {
        uVar3 = fn_82A2EFF0(param_1,0,*(char *)(param_1 + 0xca),
                              *(int *)(param_1 + 0xa0) == *(int *)(param_1 + 0x9c),&uStack_60);
      }
      uVar5 = (unsigned __int64)*(unsigned char *)(param_1 + 200);
      *(unsigned char *)(param_1 + 0xcc) = 0;
      if (uVar5 != 0) {
        pbVar4 = (unsigned char *)(*(int *)(param_1 + 0x30) + -1);
        do {
          pbVar1 = pbVar4 + 8;
          pbVar4 = pbVar4 + 8;
          *pbVar4 = *pbVar1 & 0xf7;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if ((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) != 0) {
        *(unsigned int *)((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) + 0x14) =
             *(unsigned int *)((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) + 0x14) & 0xff000000 | param_5 & 0xffffff;
        uVar6 = iStack_50 - *(int *)(param_1 + 0x34);
        iVar2 = (((int)uVar6 >> 0xc) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 0xfff) != 0)) * 8 +
                *(int *)(param_1 + 0x30);
        *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
      }
      if ((int)param_4 != -1) {
        uVar3 = fn_82A2DDC0(param_1,param_4,0,0,&aiStack_70);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        iVar2 = ((int)param_4 + (int)((param_4 & 0xffffffff) / 0xaa) * -0xaa) * 0x18 + aiStack_70
        ;
        *(unsigned int *)(iVar2 + 0x14) = uStack_5c & 0xffffff | *(unsigned int *)(iVar2 + 0x14) & 0xff000000;
        uVar6 = aiStack_70 - *(int *)(param_1 + 0x34);
        iVar2 = (((int)uVar6 >> 0xc) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 0xfff) != 0)) * 8 +
                *(int *)(param_1 + 0x30);
        *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
      }
      *param_6 = uStack_5c;
      if (param_7 != (unsigned int *)0x0) {
        *param_7 = (((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF);
      }
    }
  }
  return uVar3;
}

