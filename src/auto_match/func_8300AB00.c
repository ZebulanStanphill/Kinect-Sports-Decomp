extern int fn_82FFF750();
extern unsigned int lbl_831BC768;

void fn_8300AB00(int param_1)
{
  if (fn_82FFF750() == 1) {
    unsigned int t = lbl_831BC768;
    *(unsigned int *)(param_1 + 0x70) = 0;
    *(unsigned int *)(param_1 + 0x68) = 0;
    *(unsigned int *)(param_1 + 0x6c) = 100;
    *(unsigned int *)(param_1 + 0x74) = 0;
    *(unsigned int *)(param_1 + 0x78) = t;
    *(unsigned int *)(param_1 + 100) = 0;
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned int *)(param_1 + 0x60) = 0;
    t = lbl_831BC768;
    *(unsigned int *)(param_1 + 0x90) = 0;
    *(unsigned int *)(param_1 + 0x88) = 0;
    *(unsigned int *)(param_1 + 0x8c) = 100;
    *(unsigned int *)(param_1 + 0x94) = 0;
    *(unsigned int *)(param_1 + 0x98) = t;
    *(unsigned int *)(param_1 + 0x84) = 0;
    *(unsigned int *)(param_1 + 0x7c) = 0;
    *(unsigned int *)(param_1 + 0x80) = 0;
  }
}
