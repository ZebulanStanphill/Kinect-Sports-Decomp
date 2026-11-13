extern int fn_82C6EB08();
extern int fn_82C6EB90();
extern unsigned int lbl_820FC3B8;
extern unsigned int lbl_820FC3C0;
extern unsigned int lbl_820FC3C8;
extern unsigned int lbl_820FC3D0;
extern unsigned int lbl_820FC3D8;
extern unsigned int lbl_820FC3E0;
extern unsigned int lbl_820FC3E8;
extern unsigned int lbl_820FC3F0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_82C70D58(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  dVar9 = (double)(__int64)param_1[10];
  dVar10 = (double)(__int64)param_1[9];
  dVar12 = (double)(float)param_1[0xc];
  dVar11 = (double)(__int64)param_1[0xb];
  uVar6 = (unsigned int)((dVar9 * lbl_820FC3D0 + dVar10 * lbl_820FC3B8 + dVar11 * lbl_820FC3F0) * dVar12);
  uVar1 = (unsigned int)(-(dVar11 * lbl_820FC3C8 - (dVar10 * lbl_820FC3C0 - dVar9 * lbl_820FC3E8)) * dVar12
                );
  uVar2 = (unsigned int)((dVar11 * lbl_820FC3C0 - (dVar9 * lbl_820FC3D8 + dVar10 * lbl_820FC3E0)) * dVar12
                );
  uVar8 = (unsigned __int64)uVar2;
  uVar7 = (unsigned __int64)uVar1;
  if (((((((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) ||
        ((param_4 & 0xffffffff) == 0)) ||
       (((param_5 & 0xffffffff) == 0 || ((param_6 & 0xffffffff) == 0)))) ||
      (((param_7 & 0xffffffff) == 0 || (((int)param_8 == 0 || (in_stack_00000054 == 0)))))) ||
     (in_stack_0000005c == 0)) {
    uVar5 = 0xfffffffffffffffd;
  }
  else {
    iVar3 = param_1[1];
    iVar4 = *param_1;
    if ((int)uVar6 < 0x100) {
      uVar6 = 0xffffffffU - ((int)uVar6 >> 0x1f) & uVar6;
    }
    else {
      uVar6 = 0xff;
    }
    if ((int)uVar2 < 0x181) {
      if ((int)uVar2 < -0x180) {
        uVar8 = 0xfffffffffffffe80;
      }
    }
    else {
      uVar8 = 0x180;
    }
    if ((int)uVar1 < 0x181) {
      if ((int)uVar1 < -0x180) {
        uVar7 = 0xfffffffffffffe80;
      }
    }
    else {
      uVar7 = 0x180;
    }
    fn_82C6EB08(param_8,param_2,param_5,(__int64)iVar3 * (__int64)iVar4,uVar6);
    iVar3 = (int)((__int64)iVar3 * (__int64)iVar4) >> 2;
    fn_82C6EB90(in_stack_00000054,param_3,param_6,iVar3,uVar8);
    fn_82C6EB90(in_stack_0000005c,param_4,param_7,iVar3,uVar7);
    uVar5 = 0;
  }
  return uVar5;
}

