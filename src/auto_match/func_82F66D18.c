extern int fn_82F63BA0();
extern int fn_82F66B00();
extern int fn_82F68240();


unsigned __int64
fn_82F66D18(unsigned short *param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  int *piVar3;
  unsigned int uVar4;
  
  if ((param_4 & 0xffffffff) != 0) {
    if (param_3 == 0) {
      if (param_1 == (unsigned short *)0x0) {
        if (param_2 == 0) {
          return 0;
        }
      }
      else {
LAB_82f66d88:
        if (param_2 != 0) {
          if (param_3 < param_2) {
            puVar2 = (unsigned int *)fn_82F68240();
            uVar4 = *puVar2;
            uVar1 = fn_82F66B00(0xffffffff82f7ac58,param_1,param_3 + 1,param_4,param_5,param_6
                                     );
            if ((int)uVar1 == -2) {
              piVar3 = (int *)fn_82F68240();
              if (*piVar3 != 0x22) {
                return 0xffffffffffffffff;
              }
              puVar2 = (unsigned int *)fn_82F68240();
              *puVar2 = uVar4;
              return 0xffffffffffffffff;
            }
LAB_82f66e48:
            if (-1 < (int)uVar1) {
              return uVar1;
            }
          }
          else {
            puVar2 = (unsigned int *)fn_82F68240();
            uVar4 = *puVar2;
            uVar1 = fn_82F66B00(0xffffffff82f7ac58,param_1,param_2,param_4,param_5,param_6);
            param_1[param_2 - 1] = 0;
            if ((int)uVar1 != -2) goto LAB_82f66e48;
            if (param_3 == 0xffffffff) {
              piVar3 = (int *)fn_82F68240();
              if (*piVar3 != 0x22) {
                return 0xffffffffffffffff;
              }
              puVar2 = (unsigned int *)fn_82F68240();
              *puVar2 = uVar4;
              return 0xffffffffffffffff;
            }
          }
          *param_1 = 0;
          if ((int)uVar1 != -2) {
            return 0xffffffffffffffff;
          }
          puVar2 = (unsigned int *)fn_82F68240();
          uVar4 = 0x22;
          goto LAB_82f66d4c;
        }
      }
    }
    else if (param_1 != (unsigned short *)0x0) goto LAB_82f66d88;
  }
  puVar2 = (unsigned int *)fn_82F68240();
  uVar4 = 0x16;
LAB_82f66d4c:
  *puVar2 = uVar4;
  fn_82F63BA0();
  return 0xffffffffffffffff;
}

