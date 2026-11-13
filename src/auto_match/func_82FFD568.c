#define _uStack00000020 ((*(unsigned __int64*)&uStack00000020))
#define _uStack00000028 ((*(unsigned __int64*)&uStack00000028))
extern int fn_82FA5190();
extern int fn_82FAB9C0();
extern int fn_82FFCAC8();
extern int fn_82FFD050();
extern int fn_8300EE60();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000040;


unsigned __int64
fn_82FFD568(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned int uStack00000020;
  unsigned int uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000040;
  
  uVar1 = param_4 >> 0x20;
  uVar5 = 1;
  _uStack00000020 = param_2;
  _uStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack00000040 = param_6;
  if (uVar1 == 1) {
    param_4 = param_4 & 0xffffffff;
    uVar5 = fn_82FFD050();
  }
  else {
    uVar4 = param_4 & 0xffffffff;
    uVar7 = 0;
    uVar3 = uVar4;
    if (uVar1 != 0) {
      do {
        uVar5 = fn_82FFD050(param_1,param_2,param_3,param_4,param_5,param_6 & 0xffffffff00000000,
                              *(unsigned int *)uVar3);
        if ((int)uVar5 != 1) {
          if ((uVar7 & 0xffffffff) != 0) {
            lVar6 = (uVar7 & 0x3fffffff) * 4 + uVar4;
            do {
              uVar7 = uVar7 - 1;
              lVar6 = lVar6 + -4;
              piVar2 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0x674,*(unsigned int *)lVar6
                                               );
              if (piVar2 != (int *)0x0) {
                fn_82FFCAC8(param_1,piVar2,0);
                (**(int (***)())(*piVar2 + 8))(piVar2);
              }
            } while ((uVar7 & 0xffffffff) != 0);
          }
          break;
        }
        uVar7 = uVar7 + 1;
        uVar3 = uVar3 + 4;
      } while ((uVar7 & 0xffffffff) < uVar1);
    }
    fn_82FA5190(lbl_831BC768,uVar4);
    param_4 = 0;
  }
  uVar3 = 0xffffffffffffffff;
  if (uStack00000020 < 8) {
    if (uStack00000020 == 1) {
LAB_82ffd6c8:
      uVar4 = uVar1;
      uVar3 = param_4;
      goto LAB_82ffd6e4;
    }
    if ((uStack00000020 != 2) && (uStack00000020 != 3)) {
      uVar4 = 0;
      if (uStack00000020 == 4) goto LAB_82ffd6e4;
      if (uStack00000020 != 5) {
        uVar4 = uVar1;
        if ((uStack00000020 == 6) || (uStack00000020 != 0)) goto LAB_82ffd6e4;
        goto LAB_82ffd6c8;
      }
    }
  }
  uVar4 = -(unsigned __int64)(uVar1 == 1) & param_4;
LAB_82ffd6e4:
  fn_8300EE60(param_1 + 0x4a4,_uStack00000020 & 0xffffffff,uVar4,uVar5,uVar3,uStack00000028);
  return uVar5;
}

