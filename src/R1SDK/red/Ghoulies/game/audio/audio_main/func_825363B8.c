extern unsigned int *auStack_110;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a4;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_f4;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82864898();
extern int fn_828648F0();
extern unsigned int *lbl_8327F868;


unsigned __int64 fn_825363B8(int *param_1,int *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  double dVar8;
  unsigned char auStack_110 [28];
  float fStack_f4;
  unsigned char auStack_f0 [48];
  unsigned char auStack_c0 [28];
  unsigned char auStack_a4 [36];
  unsigned char auStack_80 [128];
  
  iVar7 = *param_2;
  bVar2 = 0;
  if (iVar7 != param_2[1]) {
    do {
      fn_8223B688(auStack_110,iVar7);
      fStack_f4 = *(float *)(iVar7 + 0x1c);
      dVar8 = (double)fStack_f4;
      iVar1 = *param_1;
      uVar3 = fn_828648F0(auStack_f0,auStack_110);
      uVar4 = (**(int (***)())(iVar1 + 0x28))(dVar8,param_1,uVar3);
      fn_82864898(auStack_f0);
      if ((uVar4 & 0xffffffff) >> 0x1f != 0) {
        (**(int (***)())(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0xabb,0xffffffff821c3ecc);
        bVar2 = 1;
      }
      fn_82230300(auStack_110,1,0);
      iVar7 = iVar7 + 0x20;
    } while (iVar7 != param_2[1]);
  }
  uVar4 = (unsigned __int64)*param_3;
  if (uVar4 != param_3[1]) {
    do {
      fn_8223B688(auStack_c0,uVar4);
      fn_8223B688(auStack_a4,uVar4 + 0x1c);
      iVar7 = *param_1;
      uVar3 = fn_828648F0(auStack_80,auStack_a4);
      uVar5 = fn_828648F0(auStack_f0,auStack_c0);
      uVar6 = (**(int (***)())(iVar7 + 0x30))(param_1,uVar5,uVar3);
      fn_82864898(auStack_f0);
      fn_82864898(auStack_80);
      if ((uVar6 & 0xffffffff) >> 0x1f != 0) {
        (**(int (***)())(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0xac6,0xffffffff821c3ee4);
        bVar2 = 1;
      }
      fn_82230300(auStack_a4,1,0);
      fn_82230300(auStack_c0,1,0);
      uVar4 = uVar4 + 0x38;
    } while ((uVar4 & 0xffffffff) != (unsigned __int64)param_3[1]);
  }
  return -(unsigned __int64)bVar2 & 0xffffffff80004005;
}

