extern unsigned int *auStack_34;
extern unsigned int *auStack_40;
extern int fn_82A1DDC0();
extern int fn_8300F150();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


unsigned __int64 fn_82FE6BC0(unsigned int param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned short uVar2;
  unsigned __int64 uVar1;
  int *piVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned char auStack_40 [2];
  unsigned short uStack_3e;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned char auStack_34 [20];
  
  if (4 < (param_3 & 0xffffffff)) {
    return 0x1f;
  }
  if ((param_3 & 0xffffffff) != 0) {
    uVar5 = 0;
    piVar3 = param_2;
    if (param_3 - 1 != 0) {
      do {
        uVar5 = uVar5 + 1;
        if ((uVar5 & 0xffffffff) < (param_3 & 0xffffffff)) {
          uVar4 = uVar5;
          piVar6 = piVar3;
          do {
            piVar6 = piVar6 + 2;
            if (*piVar3 == *piVar6) {
              return 0x1f;
            }
            uVar4 = uVar4 + 1;
          } while ((uVar4 & 0xffffffff) < (param_3 & 0xffffffff));
        }
        piVar3 = piVar3 + 2;
      } while ((uVar5 & 0xffffffff) < (param_3 - 1 & 0xffffffff));
    }
  }
  uStack_38 = (unsigned int)param_3;
  uStack_3e = 0xd;
  uStack_3c = param_1;
  fn_82A1DDC0(auStack_34,param_2,(param_3 & 0x1fffffff) << 3);
  uVar2 = fn_8300F150();
  uVar1 = fn_8300F208(lbl_832642E4,auStack_40,uVar2);
  return uVar1;
}

