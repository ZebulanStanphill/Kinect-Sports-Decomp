extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822ABA88();
extern int fn_822C8C08();
extern int fn_822E5340();
extern int fn_822E53F8();
extern int fn_822FAF40();
extern int fn_82397F88();


void fn_82398250(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned char *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned char auStack_130 [32];
  unsigned char auStack_110 [32];
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [144];
  
  fn_822FAF40(param_1 + 0xbb0);
  piVar5 = *(int **)(param_1 + 8);
  iVar6 = 0;
  if ((piVar5[1] - *piVar5 & 0xfffffffcU) != 0) {
    iVar7 = 0;
    do {
      uVar8 = 0;
      piVar5 = *(int **)(*piVar5 + iVar7);
      iVar2 = *(int *)(piVar5[4] * 4 + *piVar5);
      if (*(int *)(iVar2 + 8) != 0) {
        do {
          iVar2 = fn_822ABA88(iVar2,uVar8);
          piVar1 = *(int **)(*(int *)(iVar2 + 0x2c) * 4 + *(int *)(param_1 + 0x20));
          if (piVar1[1] - *piVar1 >> 2 == 0) {
            fn_822C8C08(*(unsigned int *)(iVar2 + 0x114),0xffffffff821adebc);
            fn_82230110(auStack_d0,0xffffffff821adec4);
            fn_822E53F8(iVar2,auStack_d0);
            fn_82230300(auStack_d0,1,0);
            fn_82230110(auStack_90,0xffffffff821aded8);
            fn_822E5340(iVar2,auStack_90);
            puVar4 = auStack_90;
          }
          else {
            if (param_2 != 0) {
              iVar3 = fn_82397F88(param_1);
              if (iVar3 == 0) {
                fn_822C8C08(*(unsigned int *)(iVar2 + 0x114),0xffffffff821aca94);
                fn_82230110(auStack_b0,0xffffffff821adea8);
                fn_822E53F8(iVar2,auStack_b0);
                fn_82230300(auStack_b0,1,0);
                fn_82230110(auStack_f0,0xffffffff821ade9c);
                fn_822E5340(iVar2,auStack_f0);
                puVar4 = auStack_f0;
                goto LAB_82398424;
              }
            }
            fn_822C8C08(*(unsigned int *)(iVar2 + 0x114),0xffffffff821ade9c);
            fn_82230110(auStack_130,0xffffffff821adea8);
            fn_822E53F8(iVar2,auStack_130);
            fn_82230300(auStack_130,1,0);
            fn_82230110(auStack_110,0xffffffff821ade9c);
            fn_822E5340(iVar2,auStack_110);
            puVar4 = auStack_110;
          }
LAB_82398424:
          fn_82230300(puVar4,1,0);
          uVar8 = uVar8 + 1;
          iVar2 = *(int *)(piVar5[4] * 4 + *piVar5);
        } while ((uVar8 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 8));
      }
      piVar5 = *(int **)(param_1 + 8);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < piVar5[1] - *piVar5 >> 2);
  }
  return;
}

