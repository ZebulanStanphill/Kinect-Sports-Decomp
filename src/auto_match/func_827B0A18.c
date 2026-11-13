void fn_827B0A18(int param_1,unsigned int param_2,unsigned short param_3)

{
  if (param_2 >= *(unsigned int *)(param_1 + 0x4c)) {
    return;
  }
  *(unsigned short *)
   (*(int *)((param_2 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x58)) + (param_2 & 0x3f) * 8 + 2) =
       param_3;
  return;
}

