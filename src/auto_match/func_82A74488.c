#define true 1
extern unsigned int *auStack_50;
extern int fn_82A6D090();
extern int fn_82A6D200();
extern int fn_82A75410();


void fn_82A74488(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int auStack_50 [8];
  
  while( true ) {
    do {
      uVar1 = *(unsigned int *)(param_5 + 4);
    } while (5 < uVar1);
    if (uVar1 == 1) break;
    if (uVar1 == 2) {
      iVar2 = fn_82A6D090(param_3,0x10,param_1);
      goto joined_r0x82a74594;
    }
    if (uVar1 == 3) {
      iVar2 = fn_82A6D090(param_3,0x18,param_1);
      goto joined_r0x82a74594;
    }
    if (uVar1 == 4) {
      iVar2 = fn_82A6D090(param_3,0x18,param_5 + 0x34);
      if (iVar2 < 0) {
        return;
      }
      *(unsigned int *)(param_5 + 4) = 5;
LAB_82a745f4:
      iVar2 = fn_82A6D090(param_3,7,param_1);
      if (iVar2 < 0) {
        return;
      }
      *param_1 = *(int *)(param_5 + 0x34) << 7 | *param_1;
      goto LAB_82a74620;
    }
    if (uVar1 != 0) goto LAB_82a745f4;
    iVar2 = fn_82A75410(param_3,3,auStack_50);
    if (iVar2 < 0) {
      return;
    }
    auStack_50[0] = auStack_50[0] >> 0x1d;
    if ((auStack_50[0] & 4) == 0) {
      iVar2 = fn_82A6D200(param_3,1);
      if (iVar2 < 0) {
        return;
      }
      *(unsigned int *)(param_5 + 4) = 1;
    }
    else if ((auStack_50[0] & 6) == 4) {
      iVar2 = fn_82A6D200(param_3,2);
      if (iVar2 < 0) {
        return;
      }
      *(unsigned int *)(param_5 + 4) = 2;
    }
    else if (auStack_50[0] == 6) {
      iVar2 = fn_82A6D200(param_3,3);
      if (iVar2 < 0) {
        return;
      }
      *(unsigned int *)(param_5 + 4) = 3;
    }
    else {
      iVar2 = fn_82A6D200(param_3,3);
      if (iVar2 < 0) {
        return;
      }
      *(unsigned int *)(param_5 + 4) = 4;
    }
  }
  iVar2 = fn_82A6D090(param_3,8,param_1);
joined_r0x82a74594:
  if (iVar2 < 0) {
    return;
  }
LAB_82a74620:
  *param_1 = *param_1 + param_2;
  *(unsigned int *)(param_5 + 4) = 0;
  return;
}

