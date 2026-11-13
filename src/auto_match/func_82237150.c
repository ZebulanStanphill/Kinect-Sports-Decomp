extern unsigned int *auStack_100;
extern unsigned int *auStack_118;
extern unsigned int *auStack_140;
extern unsigned int *auStack_dc;
extern unsigned int *auStack_e0;
extern unsigned int fStack_144;
extern unsigned int fStack_148;
extern unsigned int fStack_14c;
extern unsigned int fStack_150;
extern int fn_82230300();
extern int fn_82234ED8();
extern int fn_82237920();
extern int fn_82237A48();
extern int fn_822393D0();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_823B4900();
extern int fn_8265CA20();
extern int fn_8287C410();
extern int fn_828E9D28();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int __u64tod();
extern unsigned int iStack_128;
extern unsigned int lbl_82195520;
extern float lbl_82195658;
extern unsigned int lbl_82195740;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;


void fn_82237150(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  unsigned char auStack_140 [16];
  unsigned int uStack_130;
  unsigned int uStack_12c;
  int iStack_128;
  unsigned int uStack_124;
  unsigned int uStack_120;
  unsigned char auStack_118 [24];
  unsigned char auStack_100 [32];
  unsigned char auStack_e0 [4];
  unsigned char auStack_dc [188];
  
  uVar1 = fn_82F6A548();
  uVar4 = param_4 + 8;
  if (4 < *(unsigned int *)((int)param_4 + 0xc)) {
    uVar4 = (unsigned __int64)*(unsigned int *)((int)param_4 + 8);
  }
  uStack_130 = (unsigned int)uVar4;
  iStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_12c = 4;
  fn_828E9D28(auStack_140,uVar4,4);
  fn_823B4900(auStack_140,8,0,0);
  dVar5 = (double)__u64tod();
  dVar5 = (dVar5 + lbl_82195520) * lbl_82195658 * lbl_82195740;
  fn_822393D0(auStack_118,auStack_140);
  fn_8287C410((double)(float)dVar5,auStack_118);
  dVar8 = (double)fStack_150;
  dVar7 = (double)fStack_14c;
  dVar6 = (double)fStack_148;
  dVar5 = (double)fStack_144;
  fn_8223CFC0(auStack_e0,2,1);
  uVar2 = fn_82234ED8(auStack_100,param_2,param_3,param_4);
  uVar3 = fn_82240158(auStack_e0,0xffffffff82196868);
  uVar3 = fn_82237920(uVar3,8);
  uVar3 = fn_82240158(uVar3,0xffffffff82196824);
  uVar3 = fn_82237920(uVar3,0x11);
  fn_82240158(uVar3,0xffffffff82196fb4);
  uVar3 = fn_82237A48(dVar8);
  fn_82240158(uVar3,0xffffffff82196824);
  uVar3 = fn_82237A48(dVar7);
  fn_82240158(uVar3,0xffffffff82196824);
  uVar3 = fn_82237A48(dVar6);
  fn_82240158(uVar3,0xffffffff82196824);
  uVar3 = fn_82237A48(dVar5);
  uVar3 = fn_82240158(uVar3,0xffffffff8219681c);
  uVar2 = fn_8223B728(uVar3,uVar2);
  fn_82240158(uVar2,0xffffffff82196fb0);
  fn_82230300(auStack_100,1,0);
  fn_822403C8(uVar1,auStack_dc);
  fn_8223DCC8(auStack_e0);
  if (iStack_128 != 0) {
    fn_8265CA20();
  }
  fn_82F6A594(uVar1);
  return;
}

