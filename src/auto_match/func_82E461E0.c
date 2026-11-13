extern unsigned int *auStack_40;
extern int fn_82E437E8();
extern int fn_82E43898();
extern int fn_82E439A0();
extern int fn_82E45708();
extern int fn_82E59158();
extern int fn_82E65CB8();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


__int64 fn_82E461E0(int *param_1,int *param_2,__int64 param_3)

{
  __int64 lVar1;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int *piStack_48;
  int *piStack_44;
  unsigned int auStack_40;
  
  uStack_50 = 0;
  auStack_40 = 0;
  uStack_4c = 0;
  piStack_48 = (int *)0x0;
  piStack_44 = (int *)0x0;
  if (param_2 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  if ((param_1[6] == 0) || ((param_3 != 0 && (param_3 != *(__int64 *)(param_1 + 0x3c))))) {
    return -0x3ff2c94e;
  }
  lVar1 = (**(int (***)())(*param_2 + 0x14))(param_2,&uStack_50);
  if (lVar1 < 0) goto LAB_82e46474;
  if (param_3 == 0) {
    lVar1 = (**(int (***)())(*(int *)param_1[6] + 0x14))((int *)param_1[6],&auStack_40);
    if (lVar1 < 0) goto LAB_82e46474;
    if (uStack_50 < auStack_40) {
      lVar1 = -0x3ff2c94f;
      goto LAB_82e46474;
    }
    if ((((param_1[0x1f] != 0) && (lVar1 = fn_82E43898(param_1), lVar1 < 0)) ||
        (lVar1 = fn_82E439A0(param_1), lVar1 < 0)) ||
       (lVar1 = (**(int (***)())(*param_1 + 0xc))(param_1,param_2,param_1 + 0x3e), lVar1 < 0))
    goto LAB_82e46474;
  }
  lVar1 = fn_82E65CB8(param_2,&piStack_48);
  if (lVar1 < 0) goto LAB_82e46474;
  if ((param_1[0x40] == 0) && (uStack_4c < uStack_50)) {
    lVar1 = (**(int (***)())(*(int *)param_1[0x1f] + 0x18))((int *)param_1[0x1f],piStack_48,&uStack_4c);
    if (lVar1 < 0) goto LAB_82e46474;
    if ((int)lVar1 != 0x400d3a98) {
      param_1[0x40] = 1;
LAB_82e46374:
      *(unsigned __int64 *)(param_1 + 0x3c) = (unsigned __int64)uStack_4c + *(__int64 *)(param_1 + 0x3c);
      goto LAB_82e46384;
    }
    if (uStack_4c == uStack_50) goto LAB_82e46374;
LAB_82e463d8:
    lVar1 = -0x3ff2c566;
  }
  else {
LAB_82e46384:
    if ((param_1[0x41] == 0) && (uStack_4c < uStack_50)) {
      if (uStack_4c == 0) {
        piStack_44 = piStack_48;
        (**(int (***)())(*piStack_48 + 4))();
      }
      else {
        lVar1 = fn_82E59158(piStack_48,uStack_4c,&piStack_44);
        if (lVar1 < 0) goto LAB_82e46474;
        uStack_50 = uStack_50 - uStack_4c;
      }
      lVar1 = (**(int (***)())(*(int *)param_1[0x20] + 0x18))
                        ((int *)param_1[0x20],piStack_44,&uStack_4c);
      if (lVar1 < 0) goto LAB_82e46474;
      if ((int)lVar1 == 0x400d3a98) {
        if (uStack_4c != uStack_50) goto LAB_82e463d8;
      }
      else {
        param_1[0x41] = 1;
      }
      *(unsigned __int64 *)(param_1 + 0x3c) = (unsigned __int64)uStack_4c + *(__int64 *)(param_1 + 0x3c);
    }
    if ((param_1[0x40] != 0) && (lVar1 = fn_82E437E8(param_1), -1 < lVar1)) {
      lVar1 = fn_82E45708(param_1);
    }
  }
LAB_82e46474:
  if (piStack_48 != (int *)0x0) {
    (**(int (***)())(*piStack_48 + 8))();
    piStack_48 = (int *)0x0;
  }
  if (piStack_44 != (int *)0x0) {
    (**(int (***)())(*piStack_44 + 8))();
  }
  return lVar1;
}

