#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82E5C778();
extern unsigned int iStack_4c;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


__int64 fn_82E5D2F8(int *param_1)

{
  __int64 lVar1;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int iStack_4c;
  unsigned __int64 uStack_48;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if (param_1 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  piStack_5c = (int *)0x0;
  piStack_58 = (int *)0x0;
  piStack_54 = (int *)0x0;
  piStack_50 = (int *)0x0;
  piStack_60 = (int *)0x0;
  lVar1 = (**(int (***)())*param_1)(param_1,0xffffffff82154c18,&piStack_5c);
  if (-1 < lVar1) {
    iStack_4c = 0;
    lVar1 = (**(int (***)())(*piStack_5c + 0xc))(piStack_5c,0xffffffff821549b8,&iStack_4c);
    if (-1 < lVar1) {
      if (iStack_4c == 0) {
        lVar1 = (**(int (***)())(*param_1 + 0x1c))(param_1,0xffffffff821549b8,&piStack_60);
        if (lVar1 < 0) goto LAB_82e5d548;
        lVar1 = (**(int (***)())(*piStack_5c + 0x14))(piStack_5c,piStack_60,0);
      }
      else {
        lVar1 = (**(int (***)())(*piStack_5c + 0x10))(piStack_5c,0xffffffff821549b8,0,&piStack_60);
      }
      if ((((-1 < lVar1) &&
           (lVar1 = (**(int (***)())(*piStack_5c + 0x10))(piStack_5c,0xffffffff820ed018,0,&piStack_58),
           -1 < lVar1)) &&
          (lVar1 = (**(int (***)())*piStack_58)(piStack_58,0xffffffff82154c18,&piStack_54), -1 < lVar1))
         && (lVar1 = (**(int (***)())(*piStack_54 + 0x10))(piStack_54,0xffffffff82154aa8,0,&piStack_50),
            -1 < lVar1)) {
        uStack_40 = lbl_8202E618;
        uStack_3c = lbl_8202E61C;
        uStack_38 = lbl_8202E620;
        uStack_34 = lbl_8202E624;
        lVar1 = fn_82E5C778(piStack_50,&uStack_40);
        if (((-1 < lVar1) &&
            (lVar1 = (**(int (***)())(*piStack_60 + 0x2c))
                               (piStack_60,CONCAT44(uStack_40,uStack_3c),
                                CONCAT44(uStack_38,uStack_34)), -1 < lVar1)) &&
           (lVar1 = (**(int (***)())(*piStack_60 + 0x34))(piStack_60,0), -1 < lVar1)) {
          uStack_48 = 0;
          lVar1 = (**(int (***)())(*piStack_60 + 0x14))(piStack_60,&uStack_48,0);
          if (-1 < lVar1) {
            lVar1 = (**(int (***)())(*piStack_60 + 0x24))(piStack_60,uStack_48);
          }
        }
      }
    }
  }
LAB_82e5d548:
  if (piStack_5c != (int *)0x0) {
    (**(int (***)())(*piStack_5c + 8))();
    piStack_5c = (int *)0x0;
  }
  if (piStack_58 != (int *)0x0) {
    (**(int (***)())(*piStack_58 + 8))();
    piStack_58 = (int *)0x0;
  }
  if (piStack_54 != (int *)0x0) {
    (**(int (***)())(*piStack_54 + 8))();
    piStack_54 = (int *)0x0;
  }
  if (piStack_50 != (int *)0x0) {
    (**(int (***)())(*piStack_50 + 8))();
    piStack_50 = (int *)0x0;
  }
  if (piStack_60 != (int *)0x0) {
    (**(int (***)())(*piStack_60 + 8))();
  }
  return lVar1;
}

