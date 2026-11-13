#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_108;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82C00380();
extern int fn_82C006A0();
extern int fn_82C00DA8();
extern int fn_82C00E28();
extern int fn_82C011E0();
extern int fn_82C01348();
extern int fn_82C01BC0();
extern int fn_82C02770();
extern int fn_82C02880();
extern int fn_82C03AB8();
extern int fn_82C03BB8();
extern int fn_82C042E8();
extern int fn_82C048D0();
extern int fn_82C048E0();
extern unsigned int uStack_100;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;


unsigned __int64
fn_82BFEE60(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned int *param_6)

{
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  unsigned __int64 uVar1;
  unsigned __int64 uVar9;
  unsigned int uStack_110;
  unsigned int uStack_10c;
  unsigned char auStack_108 [8];
  unsigned int uStack_100;
  unsigned char auStack_f0 [8];
  __int64 lStack_e8;
  unsigned __int64 uStack_e0;
  unsigned int uStack_d8;
  unsigned char auStack_d0 [8];
  __int64 lStack_c8;
  unsigned __int64 uStack_c0;
  unsigned int uStack_b8;
  unsigned char auStack_b0 [8];
  unsigned __int64 uStack_a8;
  unsigned __int64 uStack_a0;
  __int64 lStack_98;
  unsigned int uStack_90;
  
  iVar2 = fn_82C048D0(0x128);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_82C048E0();
  }
  iVar2 = fn_82C03BB8(0x158);
  if (iVar2 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)fn_82C042E8();
  }
  uStack_10c = 0;
  uStack_110 = 0;
  piVar5 = (int *)0x0;
  uVar9 = 0xffffffff8007000e;
  piVar7 = (int *)0x0;
  piVar6 = (int *)0x0;
  piVar8 = (int *)0x0;
  if ((piVar4 == (int *)0x0) || (uVar1 = 0, piVar3 == (int *)0x0)) {
    uVar1 = uVar9;
  }
  if (((param_4 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    iVar2 = fn_82C02880(0x2a8);
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_82C03AB8();
    }
    iVar2 = fn_82C006A0(0x298);
    if (iVar2 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)fn_82C00DA8();
    }
    if ((piVar5 == (int *)0x0) || (piVar6 == (int *)0x0)) {
      uVar1 = uVar9;
    }
  }
  if (((param_5 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    iVar2 = fn_82C01BC0(0x228);
    if (iVar2 == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)fn_82C02770();
    }
    iVar2 = fn_82C011E0(0x178);
    if (iVar2 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)fn_82C01348();
    }
    if ((piVar7 == (int *)0x0) || (piVar8 == (int *)0x0)) {
      uVar1 = uVar9;
    }
  }
  if (((param_4 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    uStack_d8 = *(unsigned int *)(param_3 + 0x18);
    uStack_e0 = 8;
    lStack_e8 = (unsigned __int64)((int)param_5 == (int)param_4) << 0x20;
    uVar1 = (**(int (***)())(*piVar5 + 0x2c))(piVar5,auStack_f0);
  }
  if (((param_5 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    uStack_b8 = *(unsigned int *)(param_3 + 0x1c);
    uStack_c0 = 8;
    lStack_c8 = (unsigned __int64)((int)param_5 == (int)param_4) << 0x20;
    uVar1 = (**(int (***)())(*piVar7 + 0x2c))(piVar7,auStack_d0);
  }
  if (((param_4 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    uStack_100 = 3;
    uVar1 = fn_82C00E28(piVar6,auStack_108,param_2);
  }
  if ((param_5 & 0xffffffff) == 0) {
LAB_82bff0e8:
    if ((-1 < (int)uVar1) &&
       (uVar1 = (**(int (***)())(*piVar4 + 0x24))(piVar4,piVar5,piVar6,piVar7,piVar8,0,0),
       -1 < (int)uVar1)) {
      uStack_a0 = *(unsigned __int64 *)(param_3 + 0xc);
      uStack_90 = 0;
      uStack_a8 = CONCAT44(*(unsigned int *)(param_3 + 4) >> 1,*(unsigned int *)(param_3 + 8)) & 0x1ffffffff;
      lStack_98 = (unsigned __int64)*(unsigned int *)(param_3 + 0x14) << 0x20;
      uVar1 = (**(int (***)())(*piVar3 + 0x24))(piVar3,auStack_b0);
    }
  }
  else if (-1 < (int)uVar1) {
    uVar1 = fn_82C00380(piVar8,param_1);
    goto LAB_82bff0e8;
  }
  if (((param_4 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    uVar1 = (**(int (***)())(*piVar5 + 0x44))(piVar5,param_4);
  }
  if (((param_5 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    uVar1 = (**(int (***)())(*piVar7 + 0x44))(piVar7,param_5);
  }
  if (((param_4 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    uVar1 = (**(int (***)())(*piVar5 + 0x60))(piVar5,&uStack_10c);
  }
  if ((param_5 & 0xffffffff) != 0) {
    if ((int)uVar1 < 0) goto LAB_82bff26c;
    uVar1 = (**(int (***)())(*piVar7 + 0x5c))(piVar7,&uStack_110);
  }
  if (-1 < (int)uVar1) {
    uVar1 = (**(int (***)())(*piVar4 + 0x38))(piVar4,uStack_10c,uStack_110,0);
  }
LAB_82bff26c:
  if (piVar5 != (int *)0x0) {
    (**(int (***)())(*piVar5 + 8))(piVar5);
  }
  if (piVar7 != (int *)0x0) {
    (**(int (***)())(*piVar7 + 8))(piVar7);
  }
  if (piVar6 != (int *)0x0) {
    (**(int (***)())(*piVar6 + 8))(piVar6);
  }
  if (piVar8 != (int *)0x0) {
    (**(int (***)())(*piVar8 + 8))(piVar8);
  }
  if (piVar4 != (int *)0x0) {
    (**(int (***)())(*piVar4 + 8))(piVar4);
  }
  if ((int)uVar1 < 0) {
    if (piVar3 != (int *)0x0) {
      (**(int (***)())(*piVar3 + 8))(piVar3);
    }
  }
  else {
    *param_6 = piVar3;
  }
  return uVar1;
}

