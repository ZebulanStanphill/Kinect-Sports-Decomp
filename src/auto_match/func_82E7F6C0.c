typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E7EC68();
extern int fn_82E7ECB8();
extern int fn_82E7ED68();
extern int fn_82E7EE40();
extern int memcpy();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


__int64 fn_82E7F6C0(unsigned short *param_1)

{
  unsigned short uVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  __int64 lVar9;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  int aiStack_68;
  
  uVar1 = *param_1;
  uStack_70 = 0;
  lVar9 = 0;
  uStack_6c = 0;
  aiStack_68 = 0;
  if (uVar1 != 0) {
    if ((uVar1 & 0x1000) == 0) {
      lVar9 = -0x3ff2c914;
    }
    else {
      uVar1 = uVar1 & 0xfff;
      if (((uVar1 == 0xc) || (uVar1 == 0xd)) || (uVar1 == 9)) {
        lVar9 = -0x3ff2c918;
      }
      else {
        lVar9 = fn_82E7EC68(param_1,&uStack_6c);
        if ((-1 < lVar9) &&
           (lVar9 = fn_82E7ECB8(param_1,&uStack_70), uVar3 = uStack_70, -1 < lVar9)) {
          lVar6 = fn_82E50BE8(uStack_70,0,0,0,0);
          uVar5 = uStack_6c;
          if (lVar6 == 0) {
            lVar9 = -0x7ff8fff2;
          }
          else {
            while( true ) {
              uStack_6c = 0;
              uStack_70 = 0;
              bVar2 = false;
              lVar9 = fn_82E7ED68(param_1,0,&uStack_6c);
              uVar7 = 1;
              if ((lVar9 < 0) || (uVar8 = uStack_6c, uVar5 < 2)) break;
              do {
                lVar9 = fn_82E7ED68(param_1,uVar7,&uStack_70);
                uVar4 = uStack_70;
                if ((lVar9 < 0) ||
                   (lVar9 = fn_82E7EE40(param_1,*param_1 & 0xfff,uVar8,uStack_70,&aiStack_68),
                   lVar9 < 0)) goto LAB_82e7f854;
                if (0 < aiStack_68) {
                  memcpy(lVar6,uVar8,uVar3);
                  memcpy(uVar8,uVar4,uVar3);
                  memcpy(uVar4,lVar6,uVar3);
                  bVar2 = true;
                }
                uVar7 = uVar7 + 1;
                uVar8 = uVar4;
              } while ((uVar7 & 0xffffffff) < (unsigned __int64)uVar5);
              if (!bVar2) break;
            }
LAB_82e7f854:
            fn_82E4FE40(lVar6);
          }
        }
      }
    }
  }
  return lVar9;
}

