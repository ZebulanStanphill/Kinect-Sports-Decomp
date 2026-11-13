typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_100;
extern unsigned int *auStack_70;
extern unsigned int *auStack_94;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_e4;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82864898();
extern int fn_828648F0();


unsigned __int64 fn_82878F88(int *param_1,int *param_2,unsigned int *param_3)

{
  int iVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar7;
  unsigned __int64 uVar6;
  double dVar8;
  unsigned char auStack_100 [1];
  float fStack_e4;
  unsigned char auStack_e0 [48];
  unsigned char auStack_b0 [28];
  unsigned char auStack_94 [36];
  unsigned char auStack_70 [48];

  bVar2 = false;
  if (param_2 != (int *)0x0) {
    for (iVar7 = *param_2; iVar7 != param_2[1]; iVar7 = iVar7 + 0x20) {
      fn_8223B688(auStack_100,iVar7);
      fStack_e4 = *(float *)(iVar7 + 0x1c);
      dVar8 = (double)fStack_e4;
      iVar1 = *param_1;
      uVar5 = fn_828648F0(auStack_e0,auStack_100);
      uVar6 = (**(int (***)())(iVar1 + 0x28))(dVar8,param_1,uVar5);
      fn_82864898(auStack_e0);
      if ((uVar6 & 0xffffffff) >> 0x1f != 0) {
        bVar2 = true;
      }
      fn_82230300(auStack_100,1,0);
    }
  }
  if (param_3 != (unsigned int *)0x0) {
    for (uVar6 = (unsigned __int64)*param_3; (uVar6 & 0xffffffff) != (unsigned __int64)param_3[1];
        uVar6 = uVar6 + 0x38) {
      fn_8223B688(auStack_b0,uVar6);
      fn_8223B688(auStack_94,uVar6 + 0x1c);
      iVar7 = *param_1;
      uVar5 = fn_828648F0(auStack_70,auStack_94);
      uVar3 = fn_828648F0(auStack_e0,auStack_b0);
      uVar4 = (**(int (***)())(iVar7 + 0x30))(param_1,uVar3,uVar5);
      fn_82864898(auStack_e0);
      fn_82864898(auStack_70);
      if ((uVar4 & 0xffffffff) >> 0x1f != 0) {
        bVar2 = true;
      }
      fn_82230300(auStack_94,1,0);
      fn_82230300(auStack_b0,1,0);
    }
  }
  uVar5 = 0xffffffffa0200000;
  if (!bVar2) {
    uVar5 = 0x20200000;
  }
  return uVar5;
}
