#define true 1
extern unsigned int *auStack_30;
extern unsigned int iStack_34;


int fn_82E62AD8(int *param_1)

{
  int lVar1;
  int iVar2;
  unsigned uVar3;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int iStack_34;
  unsigned int auStack_30;
  
  if (param_1 == (int *)0x0) {
    return 0x80004003;
  }
  else {
    piStack_38 = (int *)0x0;
    piStack_40 = (int *)0x0;
    piStack_3c = (int *)0x0;
    auStack_30 = 0;
    iStack_34 = 0;
    lVar1 = (*(int (**)())(*param_1 + 0x84))(param_1,&auStack_30);
    if ((lVar1 >= 0) && (uVar3 = 0, auStack_30 != 0)) {
      while( true ) {
        iStack_34 = 0;
        if (piStack_38 != (int *)0x0) {
          (*(int (**)())(*piStack_38 + 8))(piStack_38);
          piStack_38 = (int *)0x0;
        }
        if (piStack_40 != (int *)0x0) {
          (*(int (**)())(*piStack_40 + 8))(piStack_40);
          piStack_40 = (int *)0x0;
        }
        if (piStack_3c != (int *)0x0) {
          (*(int (**)())(*piStack_3c + 8))(piStack_3c);
          piStack_3c = (int *)0x0;
        }
        lVar1 = (*(int (**)())(*param_1 + 0x88))(param_1,uVar3,&iStack_34,&piStack_38);
        if (lVar1 < 0) goto LAB_82e62cd0;
        if (piStack_38 == (int *)0x0) break;
        if (iStack_34 == 0) {
          lVar1 = (*(int (**)())(*piStack_38 + 0x88))(piStack_38,&piStack_40);
          if (lVar1 < 0) goto LAB_82e62cd0;
          iVar2 = (*(int (**)())(*piStack_40 + 0x1c))(piStack_40,&piStack_3c);
          if (iVar2 < 0) {
            if (piStack_3c != (int *)0x0) {
              (*(int (**)())(*piStack_3c + 8))(piStack_3c);
              piStack_3c = (int *)0x0;
            }
            lVar1 = (*(int (**)())(*piStack_40 + 0x14))(piStack_40,0,&piStack_3c);
            if ((lVar1 < 0) ||
               (lVar1 = (*(int (**)())(*piStack_40 + 0x18))(piStack_40,piStack_3c), lVar1 < 0))
            goto LAB_82e62cd0;
          }
          lVar1 = (*(int (**)())(*param_1 + 0x8c))(param_1,uVar3);
          if (lVar1 < 0) goto LAB_82e62cd0;
        }
        uVar3 = uVar3 + 1;
        if (uVar3 >= auStack_30) goto LAB_82e62cd0;
      }
      lVar1 = -0x3ff2c945;
    }
LAB_82e62cd0:
    if (piStack_38 != (int *)0x0) {
      (*(int (**)())(*piStack_38 + 8))(piStack_38);
      piStack_38 = (int *)0x0;
    }
    if (piStack_40 != (int *)0x0) {
      (*(int (**)())(*piStack_40 + 8))(piStack_40);
      piStack_40 = (int *)0x0;
    }
    if (piStack_3c != (int *)0x0) {
      (*(int (**)())(*piStack_3c + 8))(piStack_3c);
    }
  }
  return lVar1;
}

