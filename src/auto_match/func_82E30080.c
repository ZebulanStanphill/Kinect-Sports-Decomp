extern int fn_82E2E0D0();
extern int fn_82E56698();
extern unsigned int uStack_38;


__int64 fn_82E30080(int param_1,unsigned int *param_2)

{
  __int64 lVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int *piStack_40;
  int *piStack_3c;
  unsigned int uStack_38;
  int *apiStack_34 [13];
  
  piStack_3c = (int *)0x0;
  piStack_40 = (int *)0x0;
  apiStack_34[0] = (int *)0x0;
  uStack_38 = 0;
  lVar1 = (**(int (***)())*param_2)(param_2,0xffffffff82154c18,&piStack_3c);
  if ((-1 < lVar1) &&
     (lVar1 = (**(int (***)())(*piStack_3c + 0xc))(piStack_3c,0xffffffff82154978,&uStack_38), -1 < lVar1
     )) {
    uVar3 = 0;
    if (((unsigned __int64)uStack_38 == 0) ||
       (iVar2 = fn_82E2E0D0(param_1 + 0x16c,(unsigned __int64)uStack_38 - 1,0), uVar3 = uStack_38,
       iVar2 != 0)) {
      uVar4 = 0;
      if (uVar3 != 0) {
        do {
          if (piStack_40 != (int *)0x0) {
            (**(int (***)())(*piStack_40 + 8))();
            piStack_40 = (int *)0x0;
          }
          lVar1 = (**(int (***)())(*piStack_3c + 0x10))(piStack_3c,0xffffffff82154978,uVar4,&piStack_40)
          ;
          if ((lVar1 < 0) || (lVar1 = fn_82E56698(piStack_40,apiStack_34), lVar1 < 0)) break;
          if (((unsigned __int64)*(unsigned int *)(param_1 + 0x1d4) <= (uVar4 & 0xffffffff)) ||
             (iVar2 = fn_82E2E0D0(param_1 + 0x16c,uVar4,apiStack_34[0]), iVar2 == 0))
          goto LAB_82e301c8;
          uVar4 = uVar4 + 1;
          apiStack_34[0] = (int *)0x0;
        } while ((uVar4 & 0xffffffff) < (unsigned __int64)uStack_38);
      }
    }
    else {
LAB_82e301c8:
      lVar1 = -0x7ff8fff2;
    }
  }
  if (piStack_3c != (int *)0x0) {
    (**(int (***)())(*piStack_3c + 8))();
    piStack_3c = (int *)0x0;
  }
  if (piStack_40 != (int *)0x0) {
    (**(int (***)())(*piStack_40 + 8))();
    piStack_40 = (int *)0x0;
  }
  if (apiStack_34[0] != (int *)0x0) {
    (**(int (***)())(*apiStack_34[0] + 8))();
  }
  return lVar1;
}

