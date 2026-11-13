extern int fn_82BA02A8();
extern int fn_82ED8350();


void fn_82F0E7E0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x678) == 0) {
    fn_82ED8350(param_1,*(unsigned int *)(param_2 + 0x108),*(unsigned int *)(param_2 + 0x10c),
                      *(unsigned int *)(param_2 + 0x120),*(unsigned int *)(param_2 + 0x22c),
                      *(unsigned int *)(param_2 + 0x230),*(unsigned int *)(param_2 + 0x234),
                      *(unsigned int *)(param_2 + 0x244));
  }
  else {
    fn_82BA02A8(param_1,*(unsigned int *)(param_2 + 0x108),*(unsigned int *)(param_2 + 0x10c),
                 *(unsigned int *)(param_2 + 0x120),*(unsigned int *)(param_2 + 0x22c),
                 *(unsigned int *)(param_2 + 0x230),*(unsigned int *)(param_2 + 0x234),
                 *(unsigned int *)(param_2 + 0x244));
  }
  return;
}

