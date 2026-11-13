#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_1040;
extern unsigned int *auStack_1240;
extern unsigned int *auStack_12dc;
extern unsigned int *auStack_12e0;
extern unsigned int *auStack_1300;
extern unsigned int *auStack_840;
extern int fn_82294590();
extern int fn_82294750();
extern int fn_822950D8();
extern int fn_82296618();
extern int fn_822975D8();
extern int fn_82297DB0();
extern int fn_82358FD8();
extern int fn_824556F0();
extern int fn_82459000();
extern int fn_82528EE0();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_8254EDB0();
extern int fn_8288B760();
extern int fn_82F62F60();
extern unsigned int lbl_82005748;
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821B8058;
extern unsigned int lbl_821B8084;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8240BCE8(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  unsigned char *puVar2;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned char *puVar7;
  int iVar8;
  double dVar9;
  __int64 alStack_1310;
  unsigned char auStack_1300 [32];
  unsigned char auStack_12e0 [4];
  unsigned char auStack_12dc [76];
  unsigned char **appuStack_1290 [20];
  unsigned char auStack_1240 [512];
  unsigned char auStack_1040 [2048];
  unsigned char auStack_840 [2112];
  
  *(int *)(param_1 + 0x38) = param_3;
  *(int *)(param_1 + 0x40) = param_2;
  *(int *)(param_1 + 0x3c) = param_4;
  alStack_1310 = CONCAT44(*(unsigned int *)(*(int *)(param_1 + 0x30) + 8),((unsigned int)(alStack_1310)));
  uVar5 = fn_82535298(&alStack_1310,**(unsigned int **)(*(int *)(param_1 + 0x30) + 0xc),
                            0xffffffff83296bc0,0xffffffff83296bd0);
  alStack_1310 = CONCAT44(uVar5,((unsigned int)(alStack_1310)));
  fn_82536288(&alStack_1310);
  iVar8 = *(int *)(param_1 + 0x100);
  alStack_1310 = (__int64)(*(int *)(*(int *)(iVar8 + 0x10) + 0xe0) + -1);
  *(float *)(param_1 + 0xf0) =
       (float)alStack_1310 * *(float *)(iVar8 + 0x1c) +
       (*(float *)(iVar8 + 0x1c) - *(float *)(iVar8 + 0x18));
  if (((param_2 != 4) && (param_2 != 5)) && (param_2 != 6)) {
    if (*(int *)(param_3 + 0x168) == 0) {
      uVar6 = *(unsigned int *)(param_3 + 0x16c);
    }
    else {
      uVar6 = fn_8288B760();
      uVar6 = uVar6 & 0xff;
    }
    if ((uVar6 == 0) || (*(int *)(param_3 + 0x24) == 0)) {
      iVar8 = *(int *)(param_1 + 0x2c);
      fn_824556F0(iVar8,iVar8 + 0x1c);
      uVar5 = *(unsigned int *)(iVar8 + 0x40);
    }
    else {
      iVar8 = *(int *)(param_1 + 0x2c);
      fn_824556F0(iVar8,iVar8 + 0x20);
      uVar5 = *(unsigned int *)(iVar8 + 0x44);
    }
    fn_8254EDB0((double)*(float *)(iVar8 + 0x60),(double)*(float *)(iVar8 + 100),
                      *(unsigned int *)(iVar8 + 0x7c),uVar5);
    uVar5 = lbl_82192734;
    iVar8 = *(int *)(iVar8 + 0x7c);
    if (*(int *)(iVar8 + 4) != 0) {
      *(unsigned int *)(iVar8 + 0x1e0) = lbl_821CA460;
      *(unsigned int *)(iVar8 + 0x1d0) = uVar5;
      *(unsigned int *)(iVar8 + 0x1cc) = 0;
      *(unsigned int *)(iVar8 + 0x1d4) = 0;
    }
    uVar5 = ltcg_pool_0_0f;
    if (*(int *)(param_1 + 0xec) == 0) {
      piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + *(int *)(param_3 + 0x2c) * 4);
      *(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20) = lbl_82005748;
      piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + *(int *)(param_4 + 0x2c) * 4);
      *(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20) = uVar5;
    }
  }
  if (*(int *)(param_1 + 0xec) != 0) goto LAB_8240c004;
  fn_82294590(auStack_12e0);
  if (param_2 == 5) {
    uVar3 = 0xffffffff821b8034;
LAB_8240bf9c:
    fn_82358FD8(*(unsigned int *)(param_1 + 4),auStack_1240,0x100,uVar3);
    puVar7 = auStack_1240;
  }
  else {
    if (param_2 == 6) {
      uVar3 = 0xffffffff821b8048;
      goto LAB_8240bf9c;
    }
    alStack_1310 = (__int64)(*(int *)(param_1 + 0xe0) + -1);
    puVar2 = (&lbl_821B8058)[param_2];
    dVar9 = -(double)((float)alStack_1310 * *(float *)(param_1 + 0xfc) -
                     *(float *)(param_1 + 0xf0));
    fn_82358FD8(*(unsigned int *)(param_1 + 4),auStack_1040,0x400,0xffffffff821b8074);
    fn_82358FD8(*(unsigned int *)(param_1 + 4),auStack_1240,0x100,puVar2);
    uVar6 = (unsigned int)dVar9;
    alStack_1310 = (__int64)(int)uVar6;
    fn_82528EE0(auStack_840,0x400,auStack_1040,param_3 + 0x30,auStack_1240,(int)uVar6 / 0x3c,
                      (unsigned __int64)uVar6 + (__int64)((int)uVar6 / 0x3c) * -0x3c,
                      *(unsigned int *)(param_1 + 0xe0));
    puVar7 = auStack_840;
  }
  fn_82296618(auStack_12e0,puVar7);
  fn_822950D8(auStack_1300,auStack_12dc);
  fn_822975D8((unsigned __int64)*(unsigned int *)(param_1 + 4) + 0xa74,auStack_1300,0,0xffffffffffffffff);
  fn_82297DB0(auStack_1300,1,0);
  fn_82294750(appuStack_1290);
  appuStack_1290[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_1290);
LAB_8240c004:
  uVar5 = *(unsigned int *)(param_1 + 0x108);
  puVar2 = (&lbl_821B8084)[param_2];
  uVar3 = (**(int (***)())(*(int *)(param_1 + 0x44) + 8))(param_1 + 0x44);
  uVar4 = (**(int (***)())(*(int *)(param_1 + 0x44) + 4))(param_1 + 0x44);
  fn_82459000(uVar5,uVar4,uVar3,puVar2);
  return;
}

