void fn_827B0C90(int *param_1,unsigned int param_2,unsigned int param_3)

{
  *(char *)(*(int *)((param_2 >> 10 & 0x3ffffc) + *(int *)(*param_1 + 0xc)) + (param_2 & 0xfff)) =
       (char)param_3;
  *(char *)(*(int *)((param_2 + 1 >> 10 & 0x3ffffc) + *(int *)(*param_1 + 0xc)) +
           (param_2 + 1 & 0xfff)) = (char)(param_3 >> 8);
  *(char *)(*(int *)((param_2 + 2 >> 10 & 0x3ffffc) + *(int *)(*param_1 + 0xc)) +
           (param_2 + 2 & 0xfff)) = (char)(param_3 >> 0x10);
  *(char *)(*(int *)((param_2 + 3 >> 10 & 0x3ffffc) + *(int *)(*param_1 + 0xc)) +
           (param_2 + 3 & 0xfff)) = (char)(param_3 >> 0x18);
  return;
}

