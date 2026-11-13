extern int fn_82BE1A10();
extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BE56B0();
extern int fn_82BEA590();
extern int fn_82BEACC8();
extern int fn_82BEB628();
extern int fn_82BEB838();
extern int fn_82BF0C00();
extern int fn_82BF5E80();
extern unsigned int lbl_821AAD20;


void fn_82BEB328(int param_1,int param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int *piVar6;
  
  if (*(int *)(param_2 + 0x14) == 0x1033) {
    piVar6 = (int *)(param_1 + 0x44);
    iVar2 = fn_82BF5E80(param_2,(int *)(param_1 + 0x3c),(int *)(param_1 + 0x40),
                              (int *)(param_1 + 0x48),piVar6);
    if (iVar2 == 0) {
      uVar4 = 0xffffffff820eaedc;
    }
    else {
      if ((((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x40) != 0)) &&
          (*(int *)(param_1 + 0x48) != 0)) && (*piVar6 != 0)) {
        iVar2 = fn_82BEACC8(param_1);
        if (iVar2 == 0) {
          uVar1 = fn_82BE56B0(0x70);
          if ((uVar1 & 0xffffffff) == 0) {
            puVar3 = (unsigned int *)0x0;
          }
          else {
            puVar3 = (unsigned int *)fn_82BF0C00((double)lbl_821AAD20,uVar1,0,0,0,0,0,0,0);
          }
          if (puVar3 == (unsigned int *)0x0) {
            fn_82BE5240(param_1,0x65,0xffffffff820eaebc);
            *(unsigned int *)(param_1 + 0x10) = 0;
          }
          else {
            uVar1 = fn_82BE56B0(0xc);
            if ((uVar1 & 0xffffffff) == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = fn_82BEB628(uVar1,puVar3);
            }
            if (iVar2 == 0) {
              fn_82BE5240(param_1,0x65,0xffffffff820eae98);
              *(unsigned int *)(param_1 + 0x10) = 0;
              (**(int (***)())*puVar3)(puVar3,1);
            }
            else {
              fn_82BE52B8(*piVar6);
              fn_82BEA590(param_1);
              *(unsigned int *)(param_1 + 0x10) = 2;
              iVar2 = fn_82BE1A10();
              if ((*(int *)(iVar2 + 0x10) == 0xb) ||
                 (iVar2 = fn_82BE1A10(), *(int *)(iVar2 + 0x10) == 0xd)) {
                iVar2 = fn_82BE1A10();
                *(unsigned int *)(iVar2 + 0x10) = 0xc;
              }
            }
          }
        }
        goto LAB_82beb528;
      }
      uVar4 = 0xffffffff820ead94;
    }
    fn_82BE5240(param_1,0x12e,uVar4);
    uVar5 = 0;
  }
  else {
    if ((*(int *)(param_2 + 0x14) != 0x1065) || (*(int *)(param_1 + 0x10) != 0xf))
    goto LAB_82beb528;
    uVar5 = 4;
  }
  *(unsigned int *)(param_1 + 0x10) = uVar5;
LAB_82beb528:
  fn_82BEB838(param_1,param_2);
  return;
}

