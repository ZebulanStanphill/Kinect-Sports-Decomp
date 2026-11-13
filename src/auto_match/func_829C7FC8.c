typedef unsigned char bool;
extern int fn_829C7C30();
extern int fn_829C7D80();
extern unsigned int lbl_82054148;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_83215060;
extern unsigned int lbl_832156B0;
extern unsigned int lbl_832156C4;
extern unsigned int lbl_832156E0;
extern unsigned int lbl_832156E4;
extern unsigned int lbl_832156E8;
extern unsigned int lbl_832156EC;


unsigned __int64 fn_829C7FC8(int param_1,unsigned int param_2,__int64 param_3,float *param_4)

{
  bool bVar1;
  unsigned __int64 uVar2;
  double dVar3;
  
  if (param_2 < 2) {
    if (lbl_83214FFC == 0) {
      return 0xffffffff8000ffff;
    }
    if (param_4 != (float *)0x0) {
      *param_4 = lbl_821AAD20;
      if ((lbl_83215060 != 0) && (param_2 == 0)) {
        return 0xffffffff8301000b;
      }
      if (((((param_1 == 0) && ((unsigned int)param_3 < 9)) &&
           (bVar1 = (unsigned int)param_3 != 0, param_3 != 1 || !bVar1)) &&
          ((param_3 != 2 || !bVar1 && (param_3 != 3 || !bVar1)))) && (param_3 != 4 || !bVar1)) {
        if (param_3 == 5 && bVar1) {
          *param_4 = (float)(__int64)(int)(&lbl_832156C4)[param_2 * 0x61] * lbl_82054148;
          return 0;
        }
        if (param_3 == 6 && bVar1) {
          if ((((&lbl_832156B0)[param_2 * 0x61] & 2) == 0) &&
             (uVar2 = fn_829C7C30(), (int)uVar2 < 0)) {
            return uVar2;
          }
          dVar3 = (double)fn_829C7D80((&lbl_832156E0)[param_2 * 0x61]);
          *param_4 = (float)dVar3;
          return 0;
        }
        if (param_3 == 7 && bVar1) {
          if ((((&lbl_832156B0)[param_2 * 0x61] & 4) == 0) &&
             (uVar2 = fn_829C7C30(), (int)uVar2 < 0)) {
            return uVar2;
          }
          dVar3 = (double)fn_829C7D80((&lbl_832156E4)[param_2 * 0x61]);
          *param_4 = (float)dVar3;
          return 0;
        }
        if (!bVar1) {
          if ((((&lbl_832156B0)[param_2 * 0x61] & 1) == 0) &&
             (uVar2 = fn_829C7C30(), (int)uVar2 < 0)) {
            return uVar2;
          }
          *param_4 = (float)(__int64)(int)(&lbl_832156EC)[param_2 * 0x61] * lbl_82054148;
          return 0;
        }
        if ((((&lbl_832156B0)[param_2 * 0x61] & 8) == 0) &&
           (uVar2 = fn_829C7C30(), (int)uVar2 < 0)) {
          return uVar2;
        }
        dVar3 = (double)fn_829C7D80((&lbl_832156E8)[param_2 * 0x61]);
        *param_4 = (float)dVar3;
        return 0;
      }
    }
  }
  return 0xffffffff80070057;
}

