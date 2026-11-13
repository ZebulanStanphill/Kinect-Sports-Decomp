extern unsigned int *auStack_140;
extern int fn_82830D10();
extern int fn_8283F7C0();
extern int fn_82F68CC0();
extern unsigned int iStack0000001c;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;
extern unsigned int uStack_28;


void fn_82849BD0(unsigned int param_1,int param_2,unsigned int param_3,int *param_4)

{
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned int uStack00000024;
  int *piStack0000002c;
  unsigned char auStack_140 [256];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  unsigned char *puStack_30;
  char *pcStack_2c;
  unsigned int uStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  piStack0000002c = param_4;
  for (iStack_40 = 0; iStack_40 < *(int *)(*piStack0000002c + 8); iStack_40 = iStack_40 + 1) {
    iStack_20 = piStack0000002c[2] + iStack_40 * 0xf0;
    iStack_3c = *(int *)(*piStack0000002c + 0xc) + iStack_40 * 100;
    fn_82830D10(auStack_140,0xffffffff8201f4e0,*(unsigned int *)(iStack_3c + 4));
    puStack_30 = auStack_140;
    pcStack_2c = "R1::texanim2TextureParameters";
    uStack_28 = 0x14;
    iStack_38 = fn_8283F7C0(iStack0000001c,&puStack_30);
    if (iStack_38 != 0) {
      if (uStack00000024 == 0) {
        iStack_18 = iStack_20 + 0xd4;
        fn_82F68CC0(iStack_18,
                     (unsigned __int64)*(unsigned int *)(iStack0000001c + 0x28) +
                     (unsigned __int64)*(unsigned int *)(iStack_38 + 0xc),0x14);
      }
      else {
        iStack_1c = iStack_20 + 0xd4;
        fn_82F68CC0(iStack_1c,(unsigned __int64)uStack00000024 + (unsigned __int64)*(unsigned int *)(iStack_38 + 0xc),
                     0x14);
      }
    }
  }
  return;
}

