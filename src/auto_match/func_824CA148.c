extern unsigned int *auStack_54;
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_824CB858();
extern int fn_8260D428();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;


unsigned int * fn_824CA148(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [28];
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned char auStack_70 [28];
  unsigned char auStack_54 [28];
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  puVar2 = *(unsigned int **)(param_1 + 4);
  puVar4 = (unsigned int *)(*(unsigned int **)(param_1 + 4))[1];
  while (*(char *)((int)puVar4 + 0x51) == '\0') {
    puVar3 = param_2;
    if (0xf < (unsigned int)param_2[5]) {
      puVar3 = (unsigned int *)*param_2;
    }
    iVar1 = fn_8260D428(puVar4 + 3,0,puVar4[7],puVar3,param_2[4]);
    if (iVar1 < 0) {
      puVar4 = (unsigned int *)puVar4[2];
    }
    else {
      puVar2 = puVar4;
      puVar4 = (unsigned int *)*puVar4;
    }
  }
  if (puVar2 != *(unsigned int **)(param_1 + 4)) {
    puVar4 = puVar2 + 3;
    if (0xf < (unsigned int)puVar2[8]) {
      puVar4 = (unsigned int *)*puVar4;
    }
    iVar1 = fn_8260D428(param_2,0,param_2[4],puVar4,puVar2[7]);
    if (-1 < iVar1) goto LAB_824ca288;
  }
  fn_82230300(auStack_a0,0,0);
  fn_8223B688(auStack_70,param_2);
  fn_8223B688(auStack_54,auStack_a0);
  uStack_38 = uStack_84;
  uStack_34 = uStack_80;
  uStack_30 = uStack_7c;
  puVar2 = (unsigned int *)fn_824CB858(auStack_b0,param_1,puVar2,auStack_70);
  puVar2 = (unsigned int *)*puVar2;
  fn_82230300(auStack_54,1,0);
  fn_82230300(auStack_70,1,0);
  fn_82230300(auStack_a0,1,0);
LAB_824ca288:
  return puVar2 + 10;
}

