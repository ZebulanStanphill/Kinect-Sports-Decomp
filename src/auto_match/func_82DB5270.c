typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_4c;
extern unsigned int fStack_54;
extern unsigned int fStack_5c;
extern unsigned int fStack_78;
extern int fn_82DAEE18();
extern int fn_82DC94C8();
extern unsigned int iStack_6c;
extern unsigned int lbl_8208E080;
extern unsigned int lbl_82131F88;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_6e;
extern unsigned int uStack_70;
extern unsigned int uStack_80;


void fn_82DB5270(double param_1,unsigned __int64 param_2,float *param_3,unsigned __int64 param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uStack_80;
  float fStack_78;
  unsigned short uStack_70;
  unsigned short uStack_6e;
  int iStack_6c;
  float *pfStack_68;
  float *pfStack_64;
  unsigned int uStack_60;
  float fStack_5c;
  unsigned int uStack_58;
  float fStack_54;
  unsigned int uStack_50;
  float fStack_4c;
  char cStack_48;
  
  uStack_80 = (unsigned __int64)*(unsigned char *)((int)param_3 + 0x25);
  fVar1 = param_3[3];
  fVar2 = param_3[4];
  fStack_4c = (float)param_1;
  fStack_54 = param_3[1];
  uStack_60 = *(unsigned int *)(&lbl_82131F88 + (unsigned int)*(unsigned char *)(param_3 + 9) * 4);
  uStack_50 = lbl_82186E6C;
  fStack_5c = (float)uStack_80 * lbl_8208E080;
  uStack_58 = lbl_82134508;
  if (*(unsigned char *)((int)param_3 + 0x26) != 0) {
    uStack_58 = *(unsigned int *)(&lbl_82131F88 + (unsigned int)*(unsigned char *)((int)param_3 + 0x26) * 4);
  }
  fn_82DC94C8((double)*param_3,param_3 + 0x14,0xffffffff82180000,&uStack_60,(int)fVar1 + 0xe0,
                  (int)fVar2 + 0xe0,param_3[5],&uStack_80);
  if (cStack_48 != '\0') {
    iStack_6c = (int)param_3[5] + 0x44;
    uStack_70 = 2;
    pfStack_68 = param_3 + 6;
    uStack_6e = 1;
    pfStack_64 = param_3 + 0x14;
    fn_82DAEE18(param_2,&uStack_70,1);
    return;
  }
  if (lbl_821AAD20 <= (((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF)) {
LAB_82db547c:
    if ((lbl_821AAD20 <= (((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF)) && (fStack_78 < lbl_821AAD20)) {
      if ((*(char *)((int)fVar2 + 0xe8) == '\x05') ||
         (bVar3 = false, *(char *)((int)fVar2 + 0xe8) == '\x04')) {
        bVar3 = true;
      }
      iVar4 = *param_5;
      iVar5 = param_5[1] * 4;
      if (bVar3) {
        *(float *)(iVar5 + iVar4) = fVar1;
        param_5[1] = param_5[1] + 1;
        return;
      }
      goto LAB_82db5410;
    }
    if ((*(char *)((int)fVar1 + 0xe8) == '\x05') ||
       (bVar3 = false, *(char *)((int)fVar1 + 0xe8) == '\x04')) {
      bVar3 = true;
    }
    if (!bVar3) {
      if ((*(char *)((int)fVar2 + 0xe8) == '\x05') ||
         (bVar3 = false, *(char *)((int)fVar2 + 0xe8) == '\x04')) {
        bVar3 = true;
      }
      if ((bVar3) || ((((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF) <= fStack_78)) {
        *(float *)(param_5[1] * 4 + *param_5) = fVar1;
        param_5[1] = param_5[1] + 1;
        return;
      }
    }
  }
  else {
    if (lbl_821AAD20 <= fStack_78) {
      if (lbl_821AAD20 <= fStack_78) {
        if ((*(char *)((int)fVar1 + 0xe8) == '\x05') ||
           (bVar3 = false, *(char *)((int)fVar1 + 0xe8) == '\x04')) {
          bVar3 = true;
        }
        iVar4 = *param_5;
        iVar5 = param_5[1] * 4;
        if (!bVar3) {
          *(float *)(iVar5 + iVar4) = fVar1;
          param_5[1] = param_5[1] + 1;
          return;
        }
        goto LAB_82db5410;
      }
      goto LAB_82db547c;
    }
    if ((*(char *)((int)fVar1 + 0xe8) == '\x05') ||
       (bVar3 = false, *(char *)((int)fVar1 + 0xe8) == '\x04')) {
      bVar3 = true;
    }
    if (!bVar3) {
      *(float *)(param_5[1] * 4 + *param_5) = fVar1;
      param_5[1] = param_5[1] + 1;
    }
    if ((*(char *)((int)fVar2 + 0xe8) == '\x05') ||
       (bVar3 = false, *(char *)((int)fVar2 + 0xe8) == '\x04')) {
      bVar3 = true;
    }
    if (bVar3) {
      return;
    }
  }
  iVar4 = *param_5;
  iVar5 = param_5[1] << 2;
LAB_82db5410:
  *(float *)(iVar5 + iVar4) = fVar2;
  param_5[1] = param_5[1] + 1;
  return;
}

