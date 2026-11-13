extern unsigned int *auStack_30;
extern int fn_82E59440();
extern int fn_82E72520();


__int64 fn_82F34BC0(int param_1)

{
  __int64 lVar1;
  unsigned short uVar2;
  unsigned short auStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *apiStack_24 [1];
  
  auStack_30 = 0;
  piStack_2c = (int *)0x0;
  piStack_28 = (int *)0x0;
  apiStack_24[0] = (int *)0x0;
  uVar2 = *(unsigned short *)(param_1 + 0x138);
  if (*(unsigned short *)(param_1 + 0x138) == 0) {
    lVar1 = fn_82E59440(*(unsigned int *)(param_1 + 0xc),0xffffffff820ed018,0xffffffff82154c58,
                              &piStack_2c);
    if (((-1 < lVar1) &&
        (lVar1 = (**(int (***)())*piStack_2c)(piStack_2c,0xffffffff82154c18,&piStack_28), -1 < lVar1))
       && (lVar1 = (**(int (***)())(*piStack_28 + 0x10))(piStack_28,0xffffffff821549e8,0,apiStack_24),
          -1 < lVar1)) {
      lVar1 = fn_82E72520(apiStack_24[0],&auStack_30);
    }
    if (piStack_2c != (int *)0x0) {
      (**(int (***)())(*piStack_2c + 8))();
      piStack_2c = (int *)0x0;
    }
    if (piStack_28 != (int *)0x0) {
      (**(int (***)())(*piStack_28 + 8))();
      piStack_28 = (int *)0x0;
    }
    if (apiStack_24[0] != (int *)0x0) {
      (**(int (***)())(*apiStack_24[0] + 8))();
    }
    uVar2 = auStack_30;
    if ((int)lVar1 < 0) {
      return 0x22;
    }
  }
  return (unsigned __int64)uVar2 * 4 + 0x22;
}

