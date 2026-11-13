extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_82264648();
extern int fn_822647A8();
extern int fn_822648E8();
extern int fn_82264A58();
extern int fn_8232B670();
extern int fn_82458910();
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;


void fn_82459130(unsigned int *param_1,int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [112];
  
  fn_82458910(&iStack_b8,*param_1,*(unsigned int *)(*param_2 + 0x2c));
  fn_82458910(&iStack_c0,*param_1,*(unsigned int *)(param_2[1] + 0x2c));
  iVar1 = param_2[4];
  if (iVar1 < 4) {
LAB_824592f8:
    puVar2 = (unsigned int *)fn_8232B670(auStack_70,param_2[5]);
    if (0xf < (unsigned int)puVar2[5]) {
      puVar2 = (unsigned int *)*puVar2;
    }
    fn_82264648(param_1[0x16],*(unsigned int *)(*param_2 + 0x2c),*(int *)(*param_2 + 0x24) != 0,
                      (unsigned __int64)*(unsigned int *)(iStack_c0 + 0x9c) +
                      (unsigned __int64)*(unsigned int *)(iStack_c0 + 0x98),*(unsigned int *)(iStack_c0 + 0xd8),
                      puVar2,param_2[6],param_2[3]);
    puVar3 = auStack_70;
  }
  else if (iVar1 < 6) {
    if (*(int *)(*param_2 + 0x7a0) != 0) goto LAB_82459390;
    puVar2 = (unsigned int *)fn_8232B670(auStack_90,param_2[5]);
    if (0xf < (unsigned int)puVar2[5]) {
      puVar2 = (unsigned int *)*puVar2;
    }
    iVar1 = *param_2;
    fn_822648E8(param_1[0x16],*(unsigned int *)(iVar1 + 0x2c),*(int *)(iVar1 + 0x24) != 0,
                      *(unsigned int *)(iStack_b8 + 0xb0),*(unsigned int *)(iStack_b8 + 0x60),
                      *(unsigned int *)(iVar1 + 0x7a4),*(unsigned int *)(param_2[1] + 0x7a4),puVar2);
    puVar3 = auStack_90;
  }
  else {
    if (iVar1 != 6) {
      if (iVar1 == 8) {
        iVar1 = *param_2;
        fn_822647A8(param_1[0x16],*(unsigned int *)(iVar1 + 0x2c),*(int *)(iVar1 + 0x24) != 0,
                          *(unsigned int *)(iStack_b8 + 0xc0),*(unsigned int *)(iStack_b8 + 0xd4),
                          param_2[3],*(unsigned int *)(iVar1 + 0x7a4),
                          *(unsigned int *)(param_2[1] + 0x7a4));
        goto LAB_82459390;
      }
      goto LAB_824592f8;
    }
    puVar2 = (unsigned int *)fn_8232B670(auStack_b0,param_2[5]);
    if (0xf < (unsigned int)puVar2[5]) {
      puVar2 = (unsigned int *)*puVar2;
    }
    fn_82264A58(param_1[0x16],*(unsigned int *)(*param_2 + 0x2c),*(int *)(*param_2 + 0x24) != 0,
                      *(unsigned int *)(iStack_b8 + 0xb8),*(unsigned int *)(iStack_b8 + 0x68),
                      *(unsigned int *)(param_2[1] + 0x7a4),puVar2,param_2[6]);
    puVar3 = auStack_b0;
  }
  fn_82230300(puVar3,1,0);
LAB_82459390:
  if (iStack_bc != 0) {
    fn_822315A0();
  }
  if (iStack_b4 != 0) {
    fn_822315A0();
  }
  return;
}

