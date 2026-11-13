typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8223A630();
extern int fn_8223A748();
extern int fn_8223B688();
extern int fn_825145D0();
extern int fn_82F68CC0();
extern unsigned int lbl_83297820;


unsigned int * fn_822381A8(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned char bVar5;
  int iVar6;
  
  param_1[4] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = *param_3;
  param_1[6] = param_3[1];
  fn_82F68CC0(param_1 + 7,param_3 + 2,8);
  fn_8223B688(param_1 + 9,param_3 + 4);
  iVar2 = lbl_83297820;
  bVar1 = lbl_83297820 == 0;
  param_1[0x10] = param_3[0xb];
  param_1[0x11] = param_3[0xc];
  if (bVar1) {
    iVar2 = fn_825145D0();
  }
  iVar6 = iVar2 + 4;
  iVar3 = 0;
  bVar5 = 1;
  iVar4 = iVar6;
  if (*(int *)(iVar2 + 4) != 0) {
    iVar2 = *(int *)(iVar2 + 4);
    do {
      iVar4 = iVar2;
      bVar5 = -((unsigned int)param_1[4] < *(unsigned int *)(iVar4 + 0x10)) & 1;
      if (bVar5 == 0) {
        iVar2 = *(int *)(iVar4 + 8);
        iVar3 = iVar4;
      }
      else {
        iVar2 = *(int *)(iVar4 + 4);
      }
    } while (iVar2 != 0);
    if ((iVar3 != 0) && ((unsigned int)param_1[4] <= *(unsigned int *)(iVar3 + 0x10))) {
      bVar1 = false;
      bVar5 = 0;
      iVar4 = 0;
      goto LAB_822382a8;
    }
  }
  bVar1 = true;
LAB_822382a8:
  if (bVar1) {
    fn_8223A748(iVar6,param_1,iVar4,bVar5);
    fn_8223A630(iVar6,param_1);
  }
  return param_1;
}

