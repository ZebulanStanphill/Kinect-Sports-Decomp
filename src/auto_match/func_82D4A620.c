void fn_82D4A620(int param_1,unsigned int param_2,unsigned short param_3)

{
  *(unsigned short *)
   ((*(int *)((param_2 >> (0x20 - *(unsigned int *)(param_1 + 0x30))) * 0x38 +
              *(int *)(param_1 + 0x34) + 0x34) +
    (0xffffffffU >> (*(unsigned int *)(param_1 + 0x30)) & param_2)) * 2 + *(int *)(param_1 + 0x40)) =
       param_3;
  return;
}

