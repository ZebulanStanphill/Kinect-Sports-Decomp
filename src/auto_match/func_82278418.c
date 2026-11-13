extern unsigned int *auStack_f0;
extern unsigned int fStack_cc;
extern int fn_82530948();
extern int fn_82531118();
extern int fn_825315E0();
extern int fn_825447A0();
extern int fn_8262FE50();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637D70();
extern int fn_82637DE0();
extern int fn_82637E50();
extern int fn_82637EC0();
extern int fn_82638560();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263DF30();
extern int fn_8263FB38();
extern unsigned int lbl_82195B90;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326AF58;
extern unsigned int uRam831c1d3c;
extern unsigned int uRam8326b304;
extern unsigned int uRam8326b308;
extern unsigned int uRam8326b30c;
extern unsigned int uRam8326b310;
extern unsigned int uRam8327f8c4;
extern unsigned int uRam8327f9c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


void fn_82278418(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned char *puVar9;
  int *piVar10;
  double dVar11;
  unsigned char auStack_f0 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_e0;

  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  float fStack_cc;
  
  iVar5 = lbl_8320A898;
  if (param_1[0xb] != 0) {
    uRam8326b304 = param_1[3];
    uStack_d8 = param_1[7];
    puVar9 = &lbl_8326AF58;
    uStack_d4 = param_1[8];
    uRam8326b308 = param_1[4];
    dVar11 = (double)ltcg_pool_0_0f;
    uRam8326b30c = param_1[5];
    uStack_d0 = lbl_821CA460;
    uRam8326b310 = param_1[6];
    fStack_cc = ltcg_pool_0_0f;
    piVar10 = (int *)(lbl_8320A898 + 0x3148);
    iVar8 = *(int *)(lbl_8320A898 + 0x3148);
    stack_pair_e0.first = 0;
    stack_pair_e0.second = 0;
    if (iVar8 != 0) {
      puVar9 = &lbl_8326AF58;
      fn_8262FE50(iVar8);
    }
    iVar6 = lbl_8320A898;
    *(int *)(puVar9 + 0x3a4) = iVar8;
    iVar8 = *(int *)(iVar6 + 0x3158);
    if (iVar8 != 0) {
      fn_8262FE50(iVar8);
    }
    *(int *)(puVar9 + 0x3a8) = iVar8;
    uVar1 = *(unsigned int *)(iVar5 + 0x2934);
    uVar2 = *(unsigned int *)(iVar5 + 0x2f14);
    uVar3 = *(unsigned int *)(iVar5 + 0x2f18);
    fn_8263A1B8(iVar5,0,param_1[1]);
    fn_8263A508(iVar5,param_1[2]);
    fn_82637B30(iVar5,1);
    uVar4 = lbl_82195B90;
    *(unsigned int *)(iVar5 + 0x293c) = *(unsigned int *)(iVar5 + 0x293c) | 8;
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x40200;
    *(unsigned int *)(iVar5 + 0x2904) = uVar4;
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x8000000;
    uVar7 = fn_82637EC0();
    fn_82637D70(uVar7,0);
    uVar7 = fn_82637E50();
    uVar7 = fn_82637DE0(uVar7,1);
    *(unsigned int *)(iVar5 + 0x2934) = *(unsigned int *)(iVar5 + 0x2934) | 4;
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x800;
    *(unsigned int *)(iVar5 + 0x2f14) = 1;
    *(unsigned int *)(iVar5 + 0x2934) =
         (-(unsigned int)(*(int *)(iVar5 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar5 + 0x2934) & 0xfffffffd;
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x20800;
    *(unsigned int *)(iVar5 + 0x2934) = *(unsigned int *)(iVar5 + 0x2934) & 0xffffff8f | 0x40;
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x20800;
    *(unsigned int *)(iVar5 + 0x2f18) = 0;
    *(unsigned int *)(iVar5 + 0x2934) = *(unsigned int *)(iVar5 + 0x2934) & 0xfffffffe;
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x20800;
    *(unsigned int *)(iVar5 + 0x2f04) = 0xf;
    *(unsigned int *)(iVar5 + 0x28dc) =
         *(unsigned int *)(iVar5 + 0x28dc) & 0xfffffff0 | -(unsigned int)(*piVar10 != 0) & 0xf;
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x2000000000;
    *(unsigned int *)(iVar5 + 0x2948) = *(unsigned int *)(iVar5 + 0x2948) & 0xfffffff8 | param_1[0xd] & 7;
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x40;
    uVar7 = fn_82638560(uVar7,0);
    fn_82639EA8(uVar7,&stack_pair_e0.first);
    fn_8263DF30(dVar11,iVar5,0x3f,0,0);
    (*(int (**)())param_1[0xb])(auStack_f0,param_1[0xc]);
    iVar8 = lbl_8320A898;
    if (param_1[0xe] != 0) {
      fn_8263FB38(dVar11,iVar5,0x100,param_1 + 3,*param_1,0,0,0,0);
      fn_82639EA8(iVar5,&stack_pair_e0.first);
      *(unsigned int *)(iVar5 + 0x2948) = *(unsigned int *)(iVar5 + 0x2948) & 0xfffffff8;
      *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x40;
      fn_82637B30(iVar5,0);
      *(unsigned int *)(iVar5 + 0x293c) = *(unsigned int *)(iVar5 + 0x293c) & 0xfffffff7;
      *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x40200;
      *(unsigned int *)(iVar5 + 0x2f14) = 1;
      *(unsigned int *)(iVar5 + 0x2934) =
           (-(unsigned int)(*(int *)(iVar5 + 0x3158) != 0) & 1) << 1 |
           *(unsigned int *)(iVar5 + 0x2934) & 0xfffffffd;
      *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x20800;
      *(unsigned int *)(iVar5 + 0x2934) = *(unsigned int *)(iVar5 + 0x2934) & 0xfffffffb;
      *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x800;
      iVar5 = lbl_8320A898;
      *(unsigned int *)(lbl_8320A898 + 0x2ed8) = uRam831c1d3c;
      *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x80000;
      fn_82631920(lbl_8320A898,uRam8327f8c4);
                    /* WARNING: Subroutine does not return */
      fn_82631578(lbl_8320A898,uRam8327f9c8);
    }
    fn_82530948(lbl_8320A898);
    fn_825315E0(iVar8);
    fn_82531118();
    fn_82637EC0(iVar5,0);
    fn_82637D70();
    fn_82637E50();
    fn_825447A0(*param_1);
    *(unsigned int *)(iVar5 + 0x2934) = (uVar1 >> 2 & 1) << 2 | *(unsigned int *)(iVar5 + 0x2934) & 0xfffffffb;
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x800;
    *(unsigned int *)(iVar5 + 0x2f14) = uVar2;
    *(unsigned int *)(iVar5 + 0x2934) =
         (-(unsigned int)(*(int *)(iVar5 + 0x3158) != 0) & uVar2 & 1) << 1 |
         *(unsigned int *)(iVar5 + 0x2934) & 0xfffffffd;
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x20800;
    *(unsigned int *)(iVar5 + 0x2f18) = uVar3;
    *(unsigned int *)(iVar5 + 0x2934) =
         *(unsigned int *)(iVar5 + 0x2934) & 0xfffffffe | -(unsigned int)(*(int *)(iVar5 + 0x3158) != 0) & uVar3 & 1
    ;
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x20800;
  }
  return;
}

