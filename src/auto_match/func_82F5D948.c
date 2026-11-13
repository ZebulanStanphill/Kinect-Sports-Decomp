extern unsigned int *auStack_120;
extern unsigned int *auStack_d0;
extern int fn_824B4288();
extern int fn_8263B758();
extern int fn_8263C7D8();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int iStack_11c;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int lbl_82005328;
extern float lbl_82005CCC;
extern unsigned int lbl_8208DE08;
extern unsigned int lbl_820AA96C;
extern unsigned int lbl_82186E74;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_118;


void fn_82F5D948(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned char *pbVar7;
  unsigned char auStack_120 [4];
  int iStack_11c;
  unsigned __int64 uStack_118;
  unsigned __int64 uStack_110;
  unsigned __int64 uStack_108;
  __int64 lStack_100;
  unsigned char auStack_d0 [24];
  int iStack_b8;
  int iStack_b4;
  
  lVar1 = fn_82F6A53C();
  if ((((param_2 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) != 0)) &&
     ((param_4 & 0xffffffff) != 0)) {
    fn_8263B758(param_2,0,auStack_d0);
    fn_8263C7D8(param_2,0,auStack_120,0,0);
    if (iStack_b4 != 0) {
      iVar3 = 0;
      lVar2 = (unsigned __int64)(iStack_b4 - 1) / 6 + 1;
      do {
        iVar4 = 0;
        if (iStack_b8 != 0) {
          iVar5 = (iStack_b8 - 1U) / 6 + 1;
          do {
            iVar6 = iVar3 + iVar4;
            iVar4 = iVar4 + 6;
            pbVar7 = (unsigned char *)(iVar6 * 4 + iStack_11c);
            uStack_118 = (unsigned __int64)pbVar7[2];
            uStack_110 = (unsigned __int64)*pbVar7;
            uStack_108 = (unsigned __int64)pbVar7[1];
            lStack_100 = (__int64)
                         (((float)uStack_110 * lbl_82005328 * lbl_820AA96C +
                          (float)uStack_118 * lbl_82005328 * lbl_82186E74 +
                          (float)uStack_108 * lbl_82005328 * lbl_8208DE08) * lbl_82005CCC);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        lVar2 = lVar2 + -1;
        iVar3 = iStack_b8 * 6 + iVar3;
      } while (lVar2 != 0);
    }
                    /* WARNING: Subroutine does not return */
    fn_824B4288(lVar1 + 0x11c,0x20);
  }
  fn_82F6A588();
  return;
}

