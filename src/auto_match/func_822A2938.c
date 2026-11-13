extern unsigned int *auStack_10b8;
extern unsigned int *auStack_10c0;
extern unsigned int *auStack_10d0;
extern int fn_822315A0();
extern int fn_8226D2A8();
extern int fn_8226D388();
extern int fn_8226D6A0();
extern int fn_8226FE40();
extern int fn_822A2C28();
extern int fn_822A2E90();
extern int fn_823F2E20();
extern unsigned int iStack_10bc;
extern unsigned int iStack_10cc;
extern unsigned int lbl_82192488;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D12AC;
extern unsigned int lbl_831D12B4;
extern unsigned int lbl_831D12CC;
extern unsigned int lbl_831D1320;
extern unsigned int lbl_831D1328;
extern unsigned int uStack_10b0;
extern unsigned int uStack_10b4;


void fn_822A2938(unsigned __int64 param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_10d0 [4];
  int iStack_10cc;
  unsigned char auStack_10c0 [4];
  int iStack_10bc;
  unsigned char auStack_10b8 [4];
  unsigned int uStack_10b4;
  unsigned int uStack_10b0;
  
  fn_8226D2A8(auStack_10c0);
  fn_822A2C28(param_1,lbl_831D1328);
  if ((((lbl_831D1320 != 0) && (lbl_831D12B4 != 0)) && (lbl_831D12AC != 0)) &&
     ((iVar2 = fn_8226FE40(), iVar2 != 0 && (*(int *)(lbl_831D1328 + 0x2a8) != 0)))) {
    fn_8226D6A0(lbl_831D12AC);
    uVar1 = fn_822A2E90(auStack_10d0,lbl_831D1328,auStack_10b8);
    fn_823F2E20(auStack_10c0,uVar1);
    if (iStack_10cc != 0) {
      fn_822315A0();
    }
    uStack_10b4 = 0;
    uStack_10b0 = ltcg_pool_0_0f;
    if (lbl_831D12CC != 0) {
      uStack_10b0 = lbl_82192488;
    }
    lbl_831D12AC = fn_8226D388(auStack_10c0);
  }
  if (iStack_10bc != 0) {
    fn_822315A0();
  }
  return;
}

