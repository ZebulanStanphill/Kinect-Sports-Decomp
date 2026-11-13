#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82A2BA48();
extern int fn_82A2D260();
extern int fn_82A2DDC0();
extern int fn_82A2F3F0();
extern unsigned int lbl_82089378;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


unsigned __int64
fn_82A2F578(int param_1,unsigned __int64 param_2,int param_3,int *param_4,int *param_5,unsigned int *param_6,
             unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  int iVar11;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  int aiStack_84 [33];
  
  uVar10 = (unsigned __int64)*(unsigned int *)(&lbl_82089378 + param_3 * 4);
  uVar9 = *(unsigned int *)("XLNI_DET_MEDIA" + param_3 * 4 + 0xc);
  uVar13 = (unsigned __int64)uVar9;
  if ((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x9c)) {
    uVar5 = fn_82A2DDC0(param_1,param_2,param_3,0,aiStack_84);
    if (-1 < (int)uVar5) {
      uVar1 = param_2 & 0xffffffff;
      trapWord(6,uVar10,0);
      iVar12 = 0;
      iVar11 = 0;
      while( true ) {
        trapWord(6,uVar13,0);
        iVar4 = (int)(((param_2 & 0xffffffff) / uVar13) % 0xaa) * 0x18 + aiStack_84[0];
        if (param_3 == 1) {
          uVar5 = fn_82A2F3F0(param_1,param_2,&uStack_90,&uStack_8c,&uStack_88,param_7);
        }
        else {
          uVar5 = fn_82A2F578(param_1,param_2,param_3 + -1,&uStack_90,&uStack_8c,&uStack_88,
                                param_7);
        }
        if ((int)uVar5 < 0) break;
        uVar2 = *(unsigned int *)(iVar4 + 0x14);
        trapWord(6,uVar13,0);
        lVar6 = (__int64)(int)((param_2 & 0xffffffff) / uVar13) * (__int64)(int)uVar9;
        uVar3 = ((unsigned __int64)uVar2 & 0xffff8000) + ((unsigned __int64)uStack_90 & 0x1ffff) * 0x8000 &
                0x3fff8000;
        uVar7 = CONCAT44(uVar2,uVar2) & 0xffffffffc0007fff | uVar3;
        *(int *)(iVar4 + 0x14) = (int)uVar7;
        uVar7 = uVar7 + uStack_8c;
        *(unsigned int *)(iVar4 + 0x14) = uVar2 & 0xc0000000 | (unsigned int)uVar3 | (unsigned int)uVar7 & 0x7fff;
        uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x9c) - lVar6;
        if ((unsigned __int64)uVar9 < (uVar8 & 0xffffffff)) {
          uVar8 = uVar13;
        }
        if ((((uVar8 & 0xffffffff) == uVar3 >> 0xf) && ((uVar8 & 0xffffffff) == uVar13)) ||
           ((uVar8 & 0xffffffff) == (uVar7 & 0x7fff))) {
          fn_82A2BA48(param_1,lVar6,param_3);
        }
        param_2 = (unsigned __int64)uStack_88;
        iVar12 = uStack_90 + iVar12;
        iVar11 = uStack_8c + iVar11;
        if ((param_2 == 0xffffff) || (trapWord(6,uVar10,0), param_2 / uVar10 != uVar1 / uVar10))
        break;
      }
      uVar9 = aiStack_84[0] - *(int *)(param_1 + 0x34);
      iVar4 = (((int)uVar9 >> 0xc) + (unsigned int)((int)uVar9 < 0 && (uVar9 & 0xfff) != 0)) * 8 +
              *(int *)(param_1 + 0x30);
      *(char *)(iVar4 + 4) = *(char *)(iVar4 + 4) + -1;
      *param_4 = iVar12;
      *param_5 = iVar11;
      *param_6 = uStack_88;
    }
  }
  else {
    fn_82A2D260(param_1,0xffffffffc0000032);
    uVar5 = 0xffffffffc0000032;
  }
  return uVar5;
}

