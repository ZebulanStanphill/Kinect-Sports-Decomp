extern int fn_82359558();
extern int fn_82359C18();
extern int fn_82402CF8();
extern int fn_82455740();
extern unsigned int iStack_2c;
extern unsigned int lbl_821B7B74;


void fn_82402DF8(double param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char **ppuStack_30;
  int iStack_2c;
  unsigned char ***pppuStack_20;
  
  *(float *)(param_2 + 0x280) = (float)(param_1 + (double)*(float *)(param_2 + 0x280));
  if (*(int *)(param_2 + 0x294) == 0) {
    if (*(int *)(param_2 + 0x298) == 0) {
      if (*(int *)(param_2 + 0x29c) == 0) {
        if (*(int *)(param_2 + 0x2a0) == 0) {
          uVar1 = *(unsigned int *)(param_2 + 0x27c);
          if (uVar1 != 0) {
            if (uVar1 != 1) {
              if (uVar1 < 3) {
                if (*(int *)(param_2 + 0x288) != 0) {
                  uVar2 = 3;
                  goto LAB_82402f7c;
                }
                if (*(int *)(param_2 + 0x28c) != 0) {
                  return;
                }
              }
              else {
                if (uVar1 == 3) {
                  if (*(int *)(param_2 + 0x288) != 0) {
                    return;
                  }
                  if (*(int *)(param_2 + 0x28c) != 0) {
                    /* WARNING: Subroutine does not return */
                    fn_82359558(*(unsigned int *)(param_2 + 0x240),
                                      *(unsigned int *)(param_2 + 0x10));
                  }
                  uVar3 = 0;
                  uVar2 = 0;
                  goto LAB_82402f80;
                }
                if (6 < uVar1) {
                  return;
                }
              }
            }
            uVar2 = 0;
            goto LAB_82402f7c;
          }
          if (*(int *)(param_2 + 0x288) == 0) {
            if (*(int *)(param_2 + 0x28c) == 0) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            fn_82359558(*(unsigned int *)(param_2 + 0x240),*(unsigned int *)(param_2 + 0x10));
          }
        }
        else {
          if (*(int *)(param_2 + 0x2a4) == 0) {
            pppuStack_20 = &ppuStack_30;
            ppuStack_30 = &lbl_821B7B74;
            iStack_2c = param_2;
            fn_82455740((unsigned __int64)*(unsigned int *)(param_2 + 0x240) + 0x7f0,&ppuStack_30);
            fn_82359C18(&ppuStack_30);
            *(unsigned int *)(param_2 + 0x2a4) = 1;
          }
          if (*(int *)(param_2 + 0x288) == 0) {
            return;
          }
        }
        uVar3 = 0;
        uVar2 = 3;
        goto LAB_82402f80;
      }
      uVar2 = 5;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 4;
  }
LAB_82402f7c:
  uVar3 = 1;
LAB_82402f80:
  fn_82402CF8(param_2,uVar2,uVar3);
  return;
}

