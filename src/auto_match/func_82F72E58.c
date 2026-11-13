extern int fn_82F72318();
extern int fn_82F72C10();
extern unsigned int lbl_82169D58;


void fn_82F72E58(int *param_1,unsigned char *param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned char uVar3;
  
  if (*param_1 == 0) {
    if ((param_2 == (unsigned char *)0x0) || ((int)param_3 == 0)) {
      uVar3 = 2;
    }
    else {
      if ((param_3 & 0xffffffff) != 0) {
        if ((param_3 & 0xffffffff) == 1) {
          puVar2 = (unsigned int *)fn_82F72318(0xffffffff832635a0,8,0);
          if (puVar2 == (unsigned int *)0x0) {
            puVar2 = (unsigned int *)0x0;
          }
          else {
            uVar3 = *param_2;
            *puVar2 = &lbl_82169D58;
            *(unsigned char *)(puVar2 + 1) = uVar3;
          }
          *param_1 = (int)puVar2;
        }
        else {
          uVar1 = fn_82F72318(0xffffffff832635a0,0xc,0);
          if ((uVar1 & 0xffffffff) == 0) {
            puVar2 = (unsigned int *)0x0;
          }
          else {
            puVar2 = (unsigned int *)fn_82F72C10(uVar1,param_2,param_3);
          }
          *param_1 = (int)puVar2;
        }
        if (puVar2 != (unsigned int *)0x0) {
          return;
        }
      }
      uVar3 = 3;
    }
    *(unsigned char *)(param_1 + 1) = uVar3;
  }
  else {
    *(unsigned char *)((int)param_1 + 5) = 0;
    *(unsigned char *)(param_1 + 1) = 3;
    *param_1 = 0;
  }
  return;
}

