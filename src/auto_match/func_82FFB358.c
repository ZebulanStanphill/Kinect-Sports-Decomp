#define true 1
extern unsigned int *auStack_58;
extern unsigned int fStack_70;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FE8608();
extern int fn_82FF6450();
extern int fn_82FF6B10();
extern int fn_82FF72A8();
extern int fn_82FF7A40();
extern int fn_82FF8938();
extern int fn_82FFAB30();
extern int fn_83017318();
extern int fn_83019140();
extern int fn_8301A5D0();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E8;
extern unsigned int lbl_832642FC;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


__int64 fn_82FFB358(__int64 param_1,int param_2,__int64 param_3)

{
  char cVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  float fStack_70;
  unsigned int uStack_6c;
  struct { unsigned int first; unsigned int second; } stack_pair_68;

  float afStack_60 [2];
  unsigned char auStack_58 [8];
  
  lVar7 = 1;
  if (param_2 != 0) {
    lVar5 = param_1 + 4;
    lVar7 = fn_82FF8938(lVar5,&fStack_70,4);
    fn_82FE8608((double)fStack_70,lVar7,2);
    uStack_80 = 0;
    if (((int)lVar7 == 1) && (lVar7 = fn_82FF8938(lVar5,&uStack_80,4), (int)lVar7 == 1)) {
      uVar4 = 0;
      if (uStack_80 != 0) {
        while( true ) {
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_8c = 0;
          uStack_84 = 0;
          lVar7 = fn_82FF8938(lVar5,&uStack_90,4);
          if (((((int)lVar7 != 1) ||
               (lVar7 = fn_82FF8938(lVar5,&uStack_78,4), (int)lVar7 != 1)) ||
              (lVar7 = fn_82FF7A40(lbl_832642E8,uStack_90), (int)lVar7 != 1)) ||
             ((lVar7 = fn_82FF6450(lbl_832642E8,uStack_90,uStack_78), (int)lVar7 != 1 ||
              (lVar7 = fn_82FF8938(lVar5,&uStack_8c,4), (int)lVar7 != 1)))) break;
          uVar3 = 0;
          if (uStack_8c != 0) {
            cVar2 = fn_8301A5D0(param_3 + 0x34);
            lVar7 = (unsigned __int64)(cVar2 == '\0') + 1;
            uVar3 = uStack_8c;
            if ((int)lVar7 != 1) break;
          }
          uVar6 = 0;
          if (uVar3 != 0) {
            do {
              uStack_74 = 0;
              lVar7 = fn_82FF8938(lVar5,&uStack_6c,4);
              if ((((int)lVar7 != 1) ||
                  (lVar7 = fn_82FF8938(lVar5,auStack_58,8), (int)lVar7 != 1)) ||
                 ((lVar7 = fn_82FFAB30(param_1,auStack_58,param_3,&uStack_74,0,uStack_90),
                  (int)lVar7 != 1 ||
                  (lVar7 = fn_82FF72A8(lbl_832642E8,uStack_90,uStack_6c,uStack_74),
                  (int)lVar7 != 1)))) goto LAB_82ffb60c;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uStack_8c);
          }
          lVar7 = fn_82FF8938(lVar5,&uStack_84,4);
          if ((int)lVar7 != 1) break;
          uVar3 = 0;
          if (uStack_84 != 0) {
            do {
              lVar7 = fn_82FF8938(lVar5,afStack_60,4);
              if (((((int)lVar7 != 1) ||
                   (lVar7 = fn_82FF8938(lVar5,&stack_pair_68.second,4), (int)lVar7 != 1)) ||
                  (lVar7 = fn_82FF8938(lVar5,&stack_pair_68.first,4), (int)lVar7 != 1)) ||
                 (lVar7 = fn_82FF6B10(lbl_832642E8,uStack_90,afStack_60[0],stack_pair_68.second,stack_pair_68.first
                                            ,0), (int)lVar7 != 1)) goto LAB_82ffb60c;
              uVar3 = uVar3 + 1;
            } while (uVar3 < uStack_84);
          }
          uVar4 = uVar4 + 1;
          if (uStack_80 <= uVar4) break;
        }
      }
LAB_82ffb60c:
      uStack_7c = 0;
      if ((((int)lVar7 == 1) && (lVar7 = fn_82FF8938(lVar5,&uStack_7c,4), (int)lVar7 == 1)) &&
         (uVar4 = 0, uStack_7c != 0)) {
        do {
          lVar7 = fn_82FF8938(lVar5,&stack_pair_68.second,4);
          if ((((int)lVar7 != 1) || (lVar7 = fn_82FF8938(lVar5,afStack_60,4), (int)lVar7 != 1)
              ) || (lVar7 = fn_82FF8938(lVar5,&uStack_74,4), (int)lVar7 != 1)) break;
          if ((unsigned __int64)uStack_74 != 0) {
            lVar7 = ((unsigned __int64)uStack_74 + ((unsigned __int64)uStack_74 & 0x7fffffff) * 2 & 0x3fffffff) <<
                    2;
            uVar1 = fn_82FA5060(lbl_831BC768,lVar7);
            if ((uVar1 & 0xffffffff) == 0) {
              lVar7 = 2;
              break;
            }
            lVar7 = fn_82FF8938(lVar5,uVar1,lVar7);
            if ((int)lVar7 == 1) {
              lVar7 = fn_83019140(lbl_832642FC,stack_pair_68.second,afStack_60[0],uVar1,uStack_74);
            }
            fn_82FA5190(lbl_831BC768,uVar1);
            if ((int)lVar7 != 1) break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_7c);
      }
      uStack_88 = 0;
      if ((((int)lVar7 == 1) && (lVar7 = fn_82FF8938(lVar5,&uStack_88,4), (int)lVar7 == 1)) &&
         (uStack_88 != 0)) {
        do {
          lVar7 = fn_82FF8938(lVar5,&stack_pair_68.second,4);
          if ((int)lVar7 != 1) {
            return lVar7;
          }
          lVar7 = fn_82FF8938(lVar5,afStack_60,4);
          if ((int)lVar7 != 1) {
            return lVar7;
          }
          fn_83017318((double)afStack_60[0],lbl_832642FC,stack_pair_68.second);
          uVar1 = (unsigned __int64)uStack_88;
          uStack_88 = (unsigned int)(uVar1 - 1);
        } while (uVar1 - 1 != 0);
      }
    }
  }
  return lVar7;
}

