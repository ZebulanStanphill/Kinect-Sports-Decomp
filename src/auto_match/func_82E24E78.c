#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define CONCAT62(h,l) ((unsigned __int64)((((unsigned __int64)(h)) << 16) | ((unsigned short)(l))))
#define _iStack_58 ((*(unsigned __int64*)&iStack_58))
extern unsigned int *auStack_60;
extern int fn_82E24AA8();
extern int fn_82E24DB8();
extern int fn_82E25818();
extern int fn_82E25B20();
extern int fn_82E49060();
extern int fn_82F63CA0();
extern unsigned int iStack_58;
extern unsigned int iStack_78;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_70;


__int64 fn_82E24E78(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int in_r8;
  unsigned __int64 in_r10;
  int *piVar2;
  __int64 lVar3;
  int *piStack_7c;
  int iStack_78;
  int *piStack_74;
  unsigned int uStack_70;
  int aiStack_6c [3];
  unsigned char auStack_60 [8];
  int iStack_58;
  unsigned int uStack_54;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  
  piStack_7c = (int *)0x0;
  piStack_74 = (int *)0x0;
  piVar2 = (int *)0x0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x476f6f64)) {
    lVar3 = -0x7fff0001;
  }
  else {
    iStack_78 = 0;
    lVar3 = 0;
    _iStack_58 = CONCAT44(-in_r8,0x10000);
    _iStack_58 = CONCAT62(_iStack_58,0x20);
    uStack_50 = 0x3259555900000000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar1 = fn_82E25818(param_1[1],auStack_60,param_2,param_1[4],&iStack_78,0,0,0);
    if (iVar1 == 0) {
      if (((1 < iStack_78) && (lVar3 = fn_82E49060(&piStack_7c), -1 < lVar3)) &&
         (lVar3 = fn_82E24DB8(iStack_78,&piStack_74), piVar2 = piStack_74, -1 < lVar3)) {
        uStack_70 = 0;
        lVar3 = (**(int (***)())(*piStack_74 + 0xc))(piStack_74,&uStack_70,0,0);
        if (-1 < lVar3) {
          fn_82F63CA0(uStack_70,param_1[4],iStack_78);
          lVar3 = (**(int (***)())(*piVar2 + 0x10))(piVar2);
          if (((-1 < lVar3) && (lVar3 = (**(int (***)())(*piVar2 + 0x18))(piVar2,iStack_78), -1 < lVar3)
              ) && ((lVar3 = (**(int (***)())(*piStack_7c + 0xa8))(piStack_7c,piVar2), -1 < lVar3 &&
                    (lVar3 = (**(int (***)())(*piStack_7c + 0x90))(piStack_7c,in_r10), -1 < lVar3)))) {
            fn_82E25B20(param_1[1],aiStack_6c);
            lVar3 = (**(int (***)())(*piStack_7c + 0x54))
                              (piStack_7c,0xffffffff82153458,aiStack_6c[0] == 0);
            if (-1 < lVar3) {
              lVar3 = fn_82E24AA8(param_1,piStack_7c,2);
              if (-1 < lVar3) {
                param_1[0x12] = param_1[0x12] + 1;
              }
              *(unsigned __int64 *)(param_1 + 0x14) = in_r10;
            }
          }
        }
      }
    }
    else {
      lVar3 = -0x7fffbffb;
    }
    if (piStack_7c != (int *)0x0) {
      (**(int (***)())(*piStack_7c + 8))();
      piStack_7c = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) {
      (**(int (***)())(*piVar2 + 8))(piVar2);
    }
  }
  return lVar3;
}

