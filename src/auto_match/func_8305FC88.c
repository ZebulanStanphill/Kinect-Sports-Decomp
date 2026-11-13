extern int fn_82809558();
extern int fn_828102D0();
extern unsigned int lbl_821AAD20;


void fn_8305FC88(unsigned int *param_1,int *param_2,int *param_3)

{
  __int64 lVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  *param_2 = -1;
  *param_3 = -1;
  uVar2 = param_1[6];
  dVar8 = (double)lbl_821AAD20;
  if (0 < (int)uVar2) {
    lVar3 = 0;
    iVar5 = 0;
    do {
      iVar4 = iVar5 + 1;
      iVar6 = iVar4;
      lVar1 = lVar3;
      if (iVar4 < (int)uVar2) {
        do {
          dVar7 = (double)fn_828102D0(lVar3 + (unsigned __int64)*param_1,lVar1 + 0xc + (unsigned __int64)*param_1
                                      );
          if (dVar8 < dVar7) {
            *param_2 = iVar5;
            *param_3 = iVar6;
            dVar8 = dVar7;
          }
          uVar2 = param_1[6];
          iVar6 = iVar6 + 1;
          lVar1 = lVar1 + 0xc;
        } while (iVar6 < (int)uVar2);
      }
      lVar3 = lVar3 + 0xc;
      iVar5 = iVar4;
    } while (iVar4 < (int)uVar2);
  }
  fn_82809558(dVar8);
  return;
}

