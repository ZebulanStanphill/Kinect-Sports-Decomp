typedef unsigned char bool;
extern unsigned int *auStack_90;
extern int fn_829C9BB0();
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_832156B4;
extern unsigned int lbl_832156C8;
extern unsigned int lbl_832156CC;
extern unsigned int uStack_34;
extern unsigned int uStack_7c;


unsigned __int64 fn_829C7DE0(int param_1,unsigned int param_2,__int64 param_3,unsigned int *param_4)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int auStack_90;
  unsigned int uStack_7c;
  unsigned int uStack_34;
  
  uVar3 = 0;
  if (param_2 < 2) {
    if (lbl_83214FFC == 0) {
      return 0xffffffff8000ffff;
    }
    if (((param_4 != (unsigned int *)0x0) && (*param_4 = 0, param_1 == 0)) && ((unsigned int)param_3 < 4)) {
      bVar1 = (unsigned int)param_3 != 0;
      if (param_3 == 1 && bVar1) {
        iVar4 = *(int *)(&lbl_832156B4 + param_2 * 0x184);
        if (iVar4 != 1) {
          if (iVar4 != 2) {
            if (iVar4 != 3) {
              return 0xffffffff8000ffff;
            }
            goto LAB_829c7ef4;
          }
          goto LAB_829c7ed8;
        }
      }
      else {
        if (param_3 != 2 || !bVar1) {
          if (!bVar1) {
            *param_4 = *(unsigned int *)(&lbl_832156C8 + param_2 * 0x184);
            return uVar3;
          }
          uStack_7c = 0;
          auStack_90 = 0x24;
          iVar4 = fn_829C9BB0(&auStack_90);
          if (-1 < iVar4) {
            *param_4 = uStack_34;
          }
          uVar3 = RtlNtStatusToDosError();
          if ((int)uVar3 < 1) {
            return uVar3;
          }
          return uVar3 & 0xffff | 0x80070000;
        }
        uVar2 = *(unsigned int *)(&lbl_832156CC + param_2 * 0x184);
        if (3 < uVar2) {
          return 0xffffffff8000ffff;
        }
        if (uVar2 == 1) {
          *param_4 = 3;
          return uVar3;
        }
        if (uVar2 == 2) {
LAB_829c7ed8:
          *param_4 = 1;
          return uVar3;
        }
        if (uVar2 != 0) {
LAB_829c7ef4:
          *param_4 = 2;
          return uVar3;
        }
      }
      *param_4 = 0;
      return uVar3;
    }
  }
  return 0xffffffff80070057;
}

