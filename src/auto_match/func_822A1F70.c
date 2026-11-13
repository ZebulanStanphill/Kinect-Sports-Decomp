extern unsigned int fStack_5c;
extern int fn_8226EA40();
extern int fn_82545698();
extern int fn_8254A820();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D12B8;
extern unsigned int lbl_831D12BC;
extern unsigned int lbl_831D12C0;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B380;
extern unsigned int lbl_8326B384;
extern unsigned int lbl_8327F8E4;
extern unsigned int lbl_8327F948;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;


void fn_822A1F70(void)

{
  unsigned int *puVar1;
  float fVar2;
  int iVar3;
  int in_r0;
  double dVar4;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int uStack_8c;
  unsigned __int64 uStack_80;
  unsigned int uStack_78;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  float fStack_5c;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  if (lbl_831D12B8 != 0) {
    uStack_68 = 0x500;
    uStack_60 = lbl_821CA460;
    dVar4 = (double)ltcg_pool_0_0f;
    uStack_8c = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3220);
    uStack_48 = uStack_8c;
    uStack_80 = ((((unsigned __int64)(uStack_80)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3224))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uStack_44 = (((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF);
    uStack_80 = (__int64)*(float *)(lbl_8320A898 + 0x321c);
    uStack_8c = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3218);
    uStack_40 = *(unsigned int *)(lbl_8320A898 + 0x3228);
    uStack_3c = *(unsigned int *)(lbl_8320A898 + 0x322c);
    uStack_64 = 0x2d0;
    fStack_5c = ltcg_pool_0_0f;
    uStack_50 = uStack_8c;
    uStack_4c = (((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF);
    uStack_70 = 0;
    uStack_6c = 0;
    fn_8263A1B8(lbl_8320A898,0,lbl_8326B380);
    fn_82639EA8(lbl_8320A898,&uStack_70);
    fn_8263A508(lbl_8320A898,lbl_8326B384);
    if (dVar4 < (double)lbl_831D12C0) {
      fn_82631920(lbl_8320A898,lbl_8327F8E4);
      fn_82631578(lbl_8320A898,lbl_8327F948);
      iVar3 = lbl_8320A898;
      *(unsigned int *)(lbl_8320A898 + 0x2f14) = 0;
      *(unsigned int *)(iVar3 + 0x2934) = *(unsigned int *)(iVar3 + 0x2934) & 0xfffffffd;
      *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x20800;
      fn_82637B30(lbl_8320A898,1);
      iVar3 = lbl_8320A898;
      *(unsigned int *)(lbl_8320A898 + 0x293c) = *(unsigned int *)(lbl_8320A898 + 0x293c) & 0xfffffff7;
      *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x40200;
      fn_82637BC0(lbl_8320A898,0);
      fn_82637C50(lbl_8320A898,6);
      fn_82637CE0(lbl_8320A898,7);
      fn_8254A820(lbl_831D12BC);
      iVar3 = lbl_8320A898;
      fVar2 = lbl_831D12C0;
      puVar1 = (unsigned int *)((int)&uStack_80 + in_r0 & 0xfffffff0);
      *puVar1 = in_register_00010010;
      puVar1[1] = in_register_00010014;
      puVar1[2] = in_register_00010018;
      puVar1[3] = in_vr1;
      *(unsigned int *)(iVar3 + 0x1780) = (((unsigned __int64)(uStack_80) >> 0) & 0xFFFFFFFF);
      *(unsigned int *)(iVar3 + 0x1784) = (((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF);
      *(unsigned int *)(iVar3 + 0x1788) = uStack_78;
      *(float *)(iVar3 + 0x178c) = fVar2;
      *(unsigned __int64 *)(iVar3 + 8) = *(unsigned __int64 *)(iVar3 + 8) | 0x8000000000000000;
      fn_82545698(lbl_8320A898);
    }
    fn_82639EA8(lbl_8320A898,&uStack_50);
  }
  fn_8226EA40();
  return;
}

