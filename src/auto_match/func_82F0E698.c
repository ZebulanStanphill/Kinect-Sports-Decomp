extern int fn_82ED7E90();
extern int fn_82ED80E0();


void fn_82F0E698(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) {
    if (*(int *)(param_1 + 0x630) == 0) {
      fn_82ED7E90(param_1,*(unsigned int *)(param_2 + 0x108),*(unsigned int *)(param_2 + 0x10c),
                      *(unsigned int *)(param_2 + 0x120),*(unsigned int *)(param_2 + 0x22c),
                      *(unsigned int *)(param_2 + 0x230),param_2 + 0x2a4,param_2 + 0x2a0);
    }
  }
  else {
    fn_82ED80E0(param_1,*(unsigned int *)(param_2 + 0x108),*(unsigned int *)(param_2 + 0x10c),
                    *(unsigned int *)(param_2 + 0x120),*(unsigned int *)(param_2 + 0x22c),
                    *(unsigned int *)(param_2 + 0x230),param_2 + 0x2a4,param_2 + 0x2a0);
  }
  return;
}

