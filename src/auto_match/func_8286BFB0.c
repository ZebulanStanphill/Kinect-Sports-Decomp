extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_170;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern char cRam832116e4;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_828647D8();
extern int fn_828647E0();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_82866400();
extern int fn_82866418();
extern int fn_82866520();
extern int fn_82866798();
extern int fn_828684F8();
extern int fn_82868568();
extern int fn_82869F90();
extern int fn_8286A008();
extern int fn_82870B98();
extern int fn_82870E48();
extern int fn_828710B8();
extern int fn_82871318();
extern int fn_82871520();
extern int fn_82878C60();
extern int fn_82878D28();
extern int fn_82878EF0();
extern int fn_82FEA7B8();


unsigned __int64
fn_8286BFB0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned __int64 param_5)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar6;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  char cVar8;
  int iVar7;
  int aiStack_1e0 [4];
  unsigned char auStack_1d0 [32];
  unsigned char auStack_1b0 [32];
  unsigned char auStack_190 [32];
  unsigned char auStack_170 [32];
  unsigned char auStack_150 [32];
  unsigned char auStack_130 [32];
  unsigned char auStack_110 [32];
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [112];
  
  uVar2 = fn_828647D8(param_3);
  fn_828684F8();
  uVar3 = fn_82870E48();
  fn_82865170();
  puVar6 = (unsigned int *)fn_82866520();
  fn_828648B8(auStack_130,param_3);
  uVar4 = fn_8223B688(auStack_110,auStack_130);
  uVar5 = fn_82865170();
  cVar8 = fn_82866798(uVar5,uVar4);
  fn_82230300(auStack_110,1,0);
  fn_82230300(auStack_130,1,0);
  if (cVar8 != '\x01') {
    fn_82868568();
    uVar4 = fn_82871520();
    uVar5 = fn_82878C60(param_5);
    aiStack_1e0[0] = fn_82FEA7B8(uVar2,uVar5,0x3ffff,uVar4,uVar3);
LAB_8286c0f8:
    if (aiStack_1e0[0] != 0) {
      if (cRam832116e4 != '\0') {
        fn_828648B8(auStack_170,param_3);
        fn_8223B688(auStack_b0,auStack_170);
        fn_82230300(auStack_170,1,0);
        fn_82230300(auStack_b0,1,0);
      }
      uVar2 = fn_82869F90();
      fn_828710B8(uVar3,uVar2,aiStack_1e0,param_3,1);
      fn_82878D28(param_5);
      fn_82878EF0(param_5,uVar3);
      goto LAB_8286c274;
    }
  }
  else {
    aiStack_1e0[0] = 0;
    if (puVar6 != (unsigned int *)0x0) {
      fn_828648B8(auStack_190,param_3);
      puVar1 = (unsigned int *)*puVar6;
      uVar2 = fn_8223B688(auStack_d0,auStack_190);
      uVar4 = fn_828647D8(param_3);
      (*(int (**)())*puVar1)(puVar6,uVar4,uVar2,2);
      fn_82230300(auStack_d0,1,0);
      fn_82230300(auStack_190,1,0);
      goto LAB_8286c0f8;
    }
  }
  fn_82865170();
  fn_82866418();
  uVar2 = fn_8286A008();
  fn_828710B8(uVar3,uVar2,aiStack_1e0,param_3,1);
  uVar2 = fn_82868568();
  fn_82871318(uVar2,uVar3);
  if (cRam832116e4 != '\0') {
    fn_828648B8(auStack_150,param_3);
    fn_8223B688(auStack_90,auStack_150);
    fn_82230300(auStack_150,1,0);
    fn_828647E0(param_3);
    fn_82230300(auStack_90,1,0);
  }
  if ((cVar8 != '\x01') && (puVar6 != (unsigned int *)0x0)) {
    fn_828648B8(auStack_1b0,param_3);
    puVar1 = (unsigned int *)*puVar6;
    uVar2 = fn_8223B688(auStack_f0,auStack_1b0);
    uVar4 = fn_828647D8(param_3);
    (*(int (**)())*puVar1)(puVar6,uVar4,uVar2,1);
    fn_82230300(auStack_f0,1,0);
    fn_82230300(auStack_1b0,1,0);
  }
LAB_8286c274:
  fn_82865170();
  iVar7 = fn_82866400();
  *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + 1;
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = (int)uVar3;
  }
  uVar2 = fn_828684F8();
  fn_82870B98(uVar2,uVar3);
  if (puVar6 != (unsigned int *)0x0) {
    fn_828648B8(auStack_1d0,param_3);
    puVar1 = (unsigned int *)*puVar6;
    uVar2 = fn_8223B688(auStack_70,auStack_1d0);
    uVar3 = fn_828647D8(param_3);
    (*(int (**)())*puVar1)(puVar6,uVar3,uVar2,0);
    fn_82230300(auStack_70,1,0);
    fn_82230300(auStack_1d0,1,0);
  }
  uVar2 = 0x200f0000;
  if (aiStack_1e0[0] == 0) {
    uVar2 = 0xffffffffa00f0000;
  }
  return uVar2;
}

