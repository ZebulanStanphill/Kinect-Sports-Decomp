extern int fn_824779E0();
extern int fn_82478560();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D3BA4;


void fn_82478450(double param_1,int param_2)

{
  float *pfVar1;
  unsigned int uVar2;
  
  if ((*(int *)(param_2 + 0x180) != 0) && (*(char *)(param_2 + 300) != '\0')) {
    *(float *)(param_2 + 0x130) = (float)((double)*(float *)(param_2 + 0x130) + param_1);
    if (*(unsigned int *)(param_2 + 0x134) < *(unsigned int *)(param_2 + 0x184)) {
      do {
        pfVar1 = (float *)(*(int *)(param_2 + 0x134) * 0x10 + *(int *)(param_2 + 0x180));
        if (*(float *)(param_2 + 0x130) <= *pfVar1) break;
        if (*(char *)(pfVar1 + 1) == '\0') {
          fn_82478560((double)pfVar1[2],param_2);
        }
        else if (lbl_831D3BA4 != 0) {
          fn_824779E0(param_2,0);
        }
        uVar2 = *(int *)(param_2 + 0x134) + 1;
        *(unsigned int *)(param_2 + 0x134) = uVar2;
      } while (uVar2 < *(unsigned int *)(param_2 + 0x184));
    }
    if (*(int *)(param_2 + 0x134) == *(int *)(param_2 + 0x184)) {
      *(unsigned char *)(param_2 + 300) = 0;
      *(unsigned int *)(param_2 + 0x134) = 0;
      *(unsigned int *)(param_2 + 0x130) = ltcg_pool_0_0f;
    }
  }
  return;
}

