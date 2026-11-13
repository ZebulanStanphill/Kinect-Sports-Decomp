#define true 1
extern unsigned int *auStack_3c;
extern int fn_82A2B528();
extern int __iob_func();
extern int fn_82F70748();
extern int fn_82F7C468();
extern int fn_82F85978();
extern int fn_82F88C00();
extern unsigned int iStack_40;
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;


unsigned __int64 fn_82F859B0(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  int iStack_40;
  unsigned char auStack_3c [60];
  
  iVar1 = __iob_func();
  if ((param_2 == (int *)(iVar1 + 0x20)) ||
     (iVar1 = __iob_func(), param_2 == (int *)(iVar1 + 0x40))) {
    iStack_40 = (unsigned int)(unsigned short)param_1 << 0x10;
    fn_82A2B528(&iStack_40);
  }
  else {
    if ((param_2[3] & 0x40U) == 0) {
      iVar1 = fn_82F7C468(param_2);
      puVar4 = &lbl_831BBF60;
      puVar3 = puVar4;
      if ((iVar1 != -1) && (iVar1 = fn_82F7C468(param_2), iVar1 != -2)) {
        iVar1 = fn_82F7C468(param_2);
        uVar2 = fn_82F7C468(param_2);
        puVar3 = (unsigned char *)((uVar2 & 0x1f) * 0x48 + (&lbl_8329F620)[iVar1 >> 5]);
      }
      if ((puVar3[0x28] & 0xfe) != 4) {
        iVar1 = fn_82F7C468(param_2);
        puVar3 = puVar4;
        if ((iVar1 != -1) && (iVar1 = fn_82F7C468(param_2), iVar1 != -2)) {
          iVar1 = fn_82F7C468(param_2);
          uVar2 = fn_82F7C468(param_2);
          puVar3 = (unsigned char *)((uVar2 & 0x1f) * 0x48 + (&lbl_8329F620)[iVar1 >> 5]);
        }
        if ((puVar3[0x28] & 0xfe) != 2) {
          iVar1 = fn_82F7C468(param_2);
          if ((iVar1 != -1) && (iVar1 = fn_82F7C468(param_2), iVar1 != -2)) {
            iVar1 = fn_82F7C468(param_2);
            uVar2 = fn_82F7C468(param_2);
            puVar4 = (unsigned char *)((uVar2 & 0x1f) * 0x48 + (&lbl_8329F620)[iVar1 >> 5]);
          }
          if ((puVar4[4] & 0x80) != 0) {
            iVar1 = fn_82F85978(&iStack_40,auStack_3c,5,param_1);
            if (iVar1 == 0) {
              iVar1 = 0;
              if (iStack_40 < 1) {
                return param_1;
              }
              while( true ) {
                uVar2 = param_2[1];
                param_2[1] = (int)((unsigned __int64)uVar2 - 1);
                if ((__int64)((unsigned __int64)uVar2 - 1) < 0) {
                  uVar2 = fn_82F70748(auStack_3c[iVar1],param_2);
                }
                else {
                  *(unsigned char *)*param_2 = auStack_3c[iVar1];
                  uVar2 = (unsigned int)*(unsigned char *)*param_2;
                  *param_2 = (int)((unsigned char *)*param_2 + 1);
                }
                if (uVar2 == 0xffffffff) break;
                iVar1 = iVar1 + 1;
                if (iStack_40 <= iVar1) {
                  return param_1;
                }
              }
            }
            return 0xffffffffffffffff;
          }
        }
      }
    }
    uVar2 = param_2[1];
    param_2[1] = (int)((unsigned __int64)uVar2 - 2);
    if ((__int64)((unsigned __int64)uVar2 - 2) < 0) {
      param_1 = fn_82F88C00(param_1 & 0xffff,param_2);
      param_1 = param_1 & 0xffff;
    }
    else {
      *(unsigned short *)*param_2 = (unsigned short)param_1;
      *param_2 = *param_2 + 2;
    }
  }
  return param_1;
}

