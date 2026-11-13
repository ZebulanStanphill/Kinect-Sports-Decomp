extern int fn_82E93388();
extern unsigned int lbl_820A6C58;
extern unsigned int lbl_83248E44;


void fn_82E81D40(int param_1)

{
  if (lbl_83248E44 == 0) {
    if (((double)*(unsigned int *)(param_1 + 0x1f00) * *(double *)(param_1 + 0x1ed8)) /
        (double)(__int64)(*(int *)(param_1 + 800) * *(int *)(param_1 + 0x31c)) < lbl_820A6C58) {
      if (*(int *)(param_1 + 0x76c8) == 0) {
        *(unsigned int *)(param_1 + 0xafc) = 1;
      }
      else {
        if (*(int *)(param_1 + 0x7924) == 0) {
          *(unsigned int *)(param_1 + 0x7804) = 0;
          *(unsigned int *)(param_1 + 0x7800) = 0;
          *(unsigned int *)(param_1 + 0x780c) = 0;
        }
        else {
          *(unsigned int *)(param_1 + 0x7804) = 1;
          *(unsigned int *)(param_1 + 0x7800) = 1;
          *(unsigned int *)(param_1 + 0x780c) = 1;
        }
        if (*(int *)(param_1 + 0x7928) == 0) {
          *(unsigned int *)(param_1 + 0x77a4) = 0;
        }
        else {
          *(unsigned int *)(param_1 + 0x77a4) = (unsigned int)(*(int *)(param_1 + 0x77a0) == 0);
        }
        if (0 < *(int *)(param_1 + 0x1fa8)) {
          fn_82E93388();
          return;
        }
      }
    }
  }
  return;
}

