typedef unsigned char bool;
extern int fn_829C8918();
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_83215000;
extern unsigned int lbl_832156B0;
extern unsigned int lbl_832156B4;
extern unsigned int lbl_832156C8;
extern unsigned int lbl_832156CC;
extern unsigned int lbl_8321570C;
extern unsigned int lbl_83215724;


unsigned __int64 fn_829C8B38(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar3 = (unsigned int)param_2;
  if (uVar3 < 2) {
    if (lbl_83214FFC == 0) {
      return 0xffffffff8000ffff;
    }
    if (param_1 == 0) {
      if (param_3 == 0) {
        if ((param_4 & 0xffffffff) == 0) {
          iVar4 = uVar3 * 0x184;
          *(unsigned int *)(&lbl_832156C8 + iVar4) = 0;
          if (*(int *)(&lbl_83215724 + iVar4) == 1) {
            uVar2 = (&lbl_832156B0)[uVar3 * 0x61];
            *(unsigned int *)(&lbl_8321570C + iVar4) = *(unsigned int *)(&lbl_8321570C + iVar4) & 0xfffffff0;
            (&lbl_832156B0)[uVar3 * 0x61] = uVar2 & 0xfffffff0;
          }
          fn_829C8918(param_2);
          return 0;
        }
        if ((param_4 & 0xffffffff) == 1) {
          *(unsigned int *)(&lbl_832156C8 + uVar3 * 0x184) = 1;
          fn_829C8918(param_2);
          return 0;
        }
      }
      else if (param_3 == 1) {
        if ((param_4 & 0xffffffff) == 0) {
          if ((lbl_83215000 & 0x40) == 0) {
            *(unsigned int *)(&lbl_832156B4 + uVar3 * 0x184) = 1;
            fn_829C8918(param_2);
            return 0;
          }
        }
        else {
          if ((param_4 & 0xffffffff) == 1) {
            *(unsigned int *)(&lbl_832156B4 + uVar3 * 0x184) = 2;
            fn_829C8918(param_2);
            return 0;
          }
          if ((param_4 & 0xffffffff) < 3) {
            *(unsigned int *)(&lbl_832156B4 + uVar3 * 0x184) = 3;
            fn_829C8918(param_2);
            return 0;
          }
        }
      }
      else if ((param_3 < 3) && ((param_4 & 0xffffffff) < 4)) {
        bVar1 = (int)param_4 != 0;
        if (param_4 == 1 && bVar1) {
          *(unsigned int *)(&lbl_832156CC + uVar3 * 0x184) = 2;
          fn_829C8918(param_2);
          return 0;
        }
        if (param_4 != 2 || !bVar1) {
          if (!bVar1) {
            *(unsigned int *)(&lbl_832156CC + uVar3 * 0x184) = 0;
            fn_829C8918(param_2);
            return 0;
          }
          *(unsigned int *)(&lbl_832156CC + uVar3 * 0x184) = 1;
          fn_829C8918(param_2);
          return 0;
        }
        *(unsigned int *)(&lbl_832156CC + uVar3 * 0x184) = 3;
        fn_829C8918(param_2);
        return 0;
      }
    }
  }
  return 0xffffffff80070057;
}

