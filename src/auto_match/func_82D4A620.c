void fn_82D4A620(int self,unsigned int param_2,unsigned short param_3)

{
  *(unsigned short *)
   ((*(int *)((param_2 >> (0x20 - *(unsigned int *)(self + 0x30))) * 0x38 +
              *(int *)(self + 0x34) + 0x34) +
    (0xffffffffU >> (*(unsigned int *)(self + 0x30)) & param_2)) * 2 + *(int *)(self + 0x40)) =
       param_3;
  return;
}

