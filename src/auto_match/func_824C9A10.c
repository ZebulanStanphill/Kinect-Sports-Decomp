extern unsigned int *auStack_114;
extern unsigned int *auStack_130;
extern unsigned int *auStack_160;
extern unsigned int *auStack_190;
extern unsigned int *auStack_19c;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d8;
extern unsigned int *auStack_e8;
extern unsigned int *auStack_f8;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_824C9CB8();
extern int fn_824CA0B8();
extern int fn_824CA148();
extern int fn_824CA378();
extern int fn_824CA578();
extern int fn_824CA800();
extern int fn_824CA898();
extern int fn_824CAC50();
extern int fn_824CACF8();
extern int fn_82F56790();
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000000;


void fn_824C9A10(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned char *puVar6;
  int *piVar7;
  int *piVar8;
  unsigned char auStack_19c [12];
  unsigned char auStack_190 [48];
  unsigned char auStack_160 [48];
  unsigned char auStack_130 [28];
  unsigned char auStack_114 [28];
  unsigned char auStack_f8 [16];
  unsigned char auStack_e8 [16];
  unsigned char auStack_d8 [24];
  unsigned char auStack_c0 [32];
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [128];
  
  puVar6 = (unsigned char *)(param_1 + 0x54);
  iVar5 = param_1 + 100;
  if (*param_2 != 0) {
    piVar7 = param_2 + 9;
    piVar8 = param_2 + 1;
    param_2 = param_2 + -1;
    do {
      iVar4 = param_2[1];
      if (iVar4 == 1) {
        fn_82230110(&stack0x00000000 + -0xa0,piVar8);
        iVar4 = fn_824CA898(param_1 + 0x44,&stack0x00000000 + -0xa0);
        fn_82230300(&stack0x00000000 + -0xa0,1,0);
        fn_82230110(&stack0x00000000 + -0x130,piVar8);
        fn_82230110(&stack0x00000000 + -0x114,piVar7);
        fn_824CA0B8(&stack0x00000000 + -0xf8);
        fn_82230218(iVar4,&stack0x00000000 + -0x130,0,0xffffffffffffffff);
        fn_82230218(iVar4 + 0x1c,&stack0x00000000 + -0x114,0,0xffffffffffffffff);
        puVar6 = (unsigned char *)(iVar4 + 0x38);
        if (puVar6 != &stack0x00000000 + -0xf8) {
          fn_824CAC50(&stack0x00000000 + -0x19c,puVar6,**(unsigned int **)(iVar4 + 0x3c));
          fn_824CACF8(puVar6,&stack0x00000000 + -0xf8);
        }
        iVar5 = iVar4 + 0x48;
        fn_824CA578(iVar5,&stack0x00000000 + -0xe8);
        fn_824CA800(iVar4 + 0x58,&stack0x00000000 + -0xd8);
        fn_82F56790(iVar4 + 0x70,&stack0x00000000 + -0xc0);
        fn_824C9CB8(&stack0x00000000 + -0x130);
        param_2 = param_2 + 0x11;
        piVar8 = piVar8 + 0x11;
        piVar7 = piVar7 + 0x11;
      }
      else if (iVar4 == 2) {
        fn_82230110(&stack0x00000000 + -0x80,piVar8);
        fn_82230110(&stack0x00000000 + -400,piVar7);
        iVar4 = param_2[0x12];
        iVar1 = param_2[0x13];
        param_2 = param_2 + 0x14;
        iVar2 = *param_2;
        iVar3 = fn_824CA148(puVar6,&stack0x00000000 + -0x80);
        fn_82230218(iVar3,&stack0x00000000 + -400,0,0xffffffffffffffff);
        *(int *)(iVar3 + 0x1c) = iVar4;
        *(int *)(iVar3 + 0x20) = iVar1;
        *(int *)(iVar3 + 0x24) = iVar2;
        fn_82230300(&stack0x00000000 + -400,1,0);
        piVar8 = piVar8 + 0x14;
        piVar7 = piVar7 + 0x14;
        fn_82230300(&stack0x00000000 + -0x80,1,0);
      }
      else {
        if (iVar4 != 3) {
          return;
        }
        fn_82230110(&stack0x00000000 + -0x160,piVar8);
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        fn_824CA378(iVar5,&stack0x00000000 + -0x160);
        fn_82230300(&stack0x00000000 + -0x160,1,0);
        param_2 = param_2 + 0xd;
        piVar8 = piVar8 + 0xd;
        piVar7 = piVar7 + 0xd;
      }
    } while (param_2[1] != 0);
  }
  return;
}

