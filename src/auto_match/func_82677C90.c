extern int fn_82631488();
extern int fn_828F0DD0();


unsigned __int64 fn_82677C90(unsigned __int64 param_1,int *param_2,char *param_3)

{
  char cVar1;
  int iVar3;
  unsigned __int64 uVar2;
  char *pcVar4;
  int *piStack_20;
  int *piStack_1c;
  
  if (*param_2 == 0) {
    piStack_1c = (int *)0x0;
    piStack_20 = (int *)0x0;
    pcVar4 = param_3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = fn_828F0DD0(param_3,pcVar4 + (-1 - (int)param_3),0,0,0xffffffff821bbc7c,
                              0xffffffff82005334,1,&piStack_20);
    if (piStack_20 != (int *)0x0) {
      if (-1 < iVar3) {
        (**(int (***)())(*piStack_20 + 0xc))();
        iVar3 = fn_82631488();
        *param_2 = iVar3;
        if (iVar3 != 0) {
          if (piStack_20 != (int *)0x0) {
            (**(int (***)())(*piStack_20 + 8))();
          }
          if (piStack_1c != (int *)0x0) {
            (**(int (***)())(*piStack_1c + 8))();
          }
          goto code_r0x82677db0;
        }
        if (piStack_20 == (int *)0x0) goto code_r0x82677d34;
      }
      (**(int (***)())(*piStack_20 + 8))();
    }
code_r0x82677d34:
    if (piStack_1c != (int *)0x0) {
      (**(int (***)())(*piStack_1c + 8))();
    }
    uVar2 = 0;
  }
  else {
code_r0x82677db0:
    uVar2 = 1;
  }
  return uVar2;
}

