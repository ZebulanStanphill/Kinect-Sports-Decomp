extern unsigned int *auStack_150;
extern unsigned int *auStack_170;
extern int fn_82E452F8();
extern int fn_82E7E7E0();
extern int fn_82E7F0F8();
extern unsigned int iStack_158;
extern unsigned int uStack_174;


__int64 fn_82E45708(int param_1)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int *piStack_180;
  int *piStack_17c;
  int *piStack_178;
  unsigned int uStack_174;
  unsigned short auStack_170 [8];
  short asStack_160 [4];
  int iStack_158;
  unsigned char auStack_150 [336];
  
  uStack_174 = 0;
  piStack_17c = (int *)0x0;
  piStack_180 = (int *)0x0;
  piStack_178 = (int *)0x0;
  lVar1 = (**(int (***)())(**(int **)(param_1 + 0x78) + 0x84))(*(int **)(param_1 + 0x78),&uStack_174);
  if ((-1 < lVar1) && (uVar3 = 0, uStack_174 != 0)) {
    do {
      fn_82E7F0F8(asStack_160);
      if (piStack_17c != (int *)0x0) {
        (**(int (***)())(*piStack_17c + 8))();
        piStack_17c = (int *)0x0;
      }
      if (piStack_178 != (int *)0x0) {
        (**(int (***)())(*piStack_178 + 8))();
        piStack_178 = (int *)0x0;
      }
      lVar1 = (**(int (***)())(**(int **)(param_1 + 0x78) + 0x88))
                        (*(int **)(param_1 + 0x78),uVar3,auStack_170,&piStack_17c);
      if (lVar1 < 0) {
LAB_82e45918:
        fn_82E7E7E0(asStack_160);
        break;
      }
      iVar2 = (**(int (***)())(*(int *)(param_1 + 4) + 0xc))
                        (param_1 + 4,0,auStack_170[0],0,&piStack_178);
      if ((-1 < iVar2) &&
         (iVar2 = (**(int (***)())(*piStack_178 + 0x1c))(piStack_178,0xffffffff82153150,asStack_160),
         -1 < iVar2)) {
        if (asStack_160[0] == 0x1f) {
          if (iStack_158 == 0) {
            lVar1 = -0x7fffbffd;
          }
          else {
            iVar2 = fn_82E452F8(param_1,iStack_158,auStack_150);
            if (iVar2 < 0) goto LAB_82e45808;
            if (piStack_180 != (int *)0x0) {
              (**(int (***)())(*piStack_180 + 8))();
              piStack_180 = (int *)0x0;
            }
            lVar1 = (**(int (***)())(*piStack_17c + 0x90))(piStack_17c,&piStack_180);
            if (((-1 < lVar1) &&
                (lVar1 = (**(int (***)())(*piStack_180 + 0x68))
                                   (piStack_180,0xffffffff82153558,auStack_150,0x110), -1 < lVar1))
               && (lVar1 = (**(int (***)())(*piStack_17c + 0x94))(piStack_17c,piStack_180), -1 < lVar1))
            goto LAB_82e458e8;
          }
        }
        else {
          lVar1 = -0x7fff0001;
        }
        goto LAB_82e45918;
      }
LAB_82e45808:
      lVar1 = 0;
LAB_82e458e8:
      fn_82E7E7E0(asStack_160);
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)uStack_174);
  }
  if (piStack_17c != (int *)0x0) {
    (**(int (***)())(*piStack_17c + 8))();
    piStack_17c = (int *)0x0;
  }
  if (piStack_180 != (int *)0x0) {
    (**(int (***)())(*piStack_180 + 8))();
    piStack_180 = (int *)0x0;
  }
  if (piStack_178 != (int *)0x0) {
    (**(int (***)())(*piStack_178 + 8))();
  }
  return lVar1;
}

