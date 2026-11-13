#define _auStack_10 ((*(unsigned __int64*)&auStack_10))
extern unsigned int *auStack_10;
extern int fn_82EF4920();
extern unsigned int stack0x00000014;
extern unsigned int uStack00000014;
extern unsigned int uStack_d;


unsigned __int64 fn_82EF49F8(unsigned int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uStack00000014;
  unsigned char auStack_10 [1];
  unsigned char uStack_d;
  
  uStack00000014 = param_1;
  iVar1 = fn_82EF4920(&stack0x00000014,param_2,8,0x2d);
  iVar2 = (int)param_2;
  if ((iVar1 != 0) && (iVar1 = fn_82EF4920(&stack0x00000014,auStack_10,4,0x2d), iVar1 != 0)) {
    *(short *)(iVar2 + 4) = (short)_auStack_10;
    iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
    if (iVar1 != 0) {
      *(short *)(iVar2 + 6) = (short)_auStack_10;
      iVar1 = fn_82EF4920(&stack0x00000014,auStack_10,2,0);
      if (iVar1 != 0) {
        *(unsigned char *)(iVar2 + 8) = uStack_d;
        iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
        if (iVar1 != 0) {
          *(unsigned char *)(iVar2 + 9) = uStack_d;
          iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
          if (iVar1 != 0) {
            *(unsigned char *)(iVar2 + 10) = uStack_d;
            iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
            if (iVar1 != 0) {
              *(unsigned char *)(iVar2 + 0xb) = uStack_d;
              iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
              if (iVar1 != 0) {
                *(unsigned char *)(iVar2 + 0xc) = uStack_d;
                iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
                if (iVar1 != 0) {
                  *(unsigned char *)(iVar2 + 0xd) = uStack_d;
                  iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
                  if (iVar1 != 0) {
                    *(unsigned char *)(iVar2 + 0xe) = uStack_d;
                    iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
                    if (iVar1 != 0) {
                      *(unsigned char *)(iVar2 + 0xf) = uStack_d;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

