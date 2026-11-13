extern unsigned int *auStack_a50;
extern int fn_82526C70();
extern int fn_82528EE0();
extern int fn_825541F8();
extern int fn_825A0F28();
extern int fn_82F65B18();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


unsigned __int64
fn_82528BF8(int *param_1,char *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             int param_6)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned char auStack_a50 [512];
  char acStack_850 [2048];
  char acStack_50 [48];
  
  iVar4 = *param_1;
  uVar7 = 0;
  if (((iVar4 != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
    pcVar5 = acStack_850;
    iVar6 = 0;
    do {
      cVar1 = param_2[iVar6];
      *pcVar5 = cVar1;
      if ((cVar1 == '\0') || (cVar1 == ';')) {
        *pcVar5 = '\0';
        break;
      }
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (iVar6 < 0x800);
    if (pcVar5 == acStack_50) {
      pcVar5[-1] = '\0';
    }
    pcVar5 = param_2;
    if (param_2[iVar6] == ';') {
      iVar4 = fn_82F65B18(param_2 + iVar6 + 1);
      fVar3 = lbl_821CA460;
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fVar2 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460;
      acStack_850[iVar6] = '\0';
      fn_82526C70(acStack_850,0x800,0xffffffff821c3708,acStack_850,
                    (int)(fVar2 * (float)(__int64)iVar4 + fVar3));
      iVar4 = *param_1;
      pcVar5 = acStack_850;
    }
    uVar7 = fn_825A0F28(iVar4,param_1 + 1,pcVar5,param_3,param_4,param_5);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
  }
  if (param_6 == 0) {
    fn_825541F8(auStack_a50,param_2,0x100);
    fn_82528EE0(param_3,param_4,0xffffffff821c3710,auStack_a50);
  }
  return uVar7;
}

