extern int memmove();
extern int fn_82F812C0();
extern int fn_82F86A50();


int __BuildCatchObjectHelper(int param_1,int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  
  if (((param_3[1] != 0) && (*(char *)(param_3[1] + 8) != '\0')) &&
     ((param_3[2] != 0 || ((*param_3 & 0x80000000) != 0)))) {
    if ((*param_3 & 0x80000000) == 0) {
      param_2 = (int *)(param_3[2] + (int)param_2);
    }
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    if ((*param_3 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        if (param_4[6] == 0) {
          iVar2 = fn_82F86A50(uVar1,1);
          if ((iVar2 != 0) && (iVar2 = fn_82F86A50(param_2,1), iVar2 != 0)) {
            iVar2 = param_4[2] + *(int *)(param_1 + 0x18);
            if (-1 < (int)param_4[3]) {
              iVar2 = param_4[3] +
                      *(int *)(*(int *)(param_4[3] + *(int *)(param_1 + 0x18)) + param_4[4]) + iVar2
              ;
            }
            memmove(param_2,iVar2,param_4[5]);
            return 0;
          }
        }
        else {
          iVar2 = fn_82F86A50(uVar1,1);
          if (((iVar2 != 0) && (iVar2 = fn_82F86A50(param_2,1), iVar2 != 0)) &&
             (iVar2 = fn_82F86A50(param_4[6]), iVar2 != 0)) {
            return ((unsigned int)LZCOUNT(*param_4 & 4) >> 5 ^ 1) + 1;
          }
        }
      }
      else {
        iVar2 = fn_82F86A50(uVar1,1);
        if ((iVar2 != 0) && (iVar2 = fn_82F86A50(param_2,1), iVar2 != 0)) {
          memmove(param_2,*(unsigned int *)(param_1 + 0x18),param_4[5]);
          if (param_4[5] != 4) {
            return 0;
          }
          iVar2 = *param_2;
          if (iVar2 != 0) {
            iVar3 = param_4[2] + iVar2;
            if (-1 < (int)param_4[3]) {
              iVar3 = param_4[3] + *(int *)(*(int *)(param_4[3] + iVar2) + param_4[4]) + iVar3;
            }
            *param_2 = iVar3;
            return 0;
          }
          return 0;
        }
      }
    }
    else {
      iVar2 = fn_82F86A50(uVar1,1);
      if ((iVar2 != 0) && (iVar2 = fn_82F86A50(param_2,1), iVar2 != 0)) {
        iVar2 = *(int *)(param_1 + 0x18);
        *param_2 = iVar2;
        iVar3 = param_4[2] + iVar2;
        if (-1 < (int)param_4[3]) {
          iVar3 = param_4[3] + *(int *)(*(int *)(param_4[3] + iVar2) + param_4[4]) + iVar3;
        }
        *param_2 = iVar3;
        return 0;
      }
    }
    fn_82F812C0();
  }
  return 0;
}

