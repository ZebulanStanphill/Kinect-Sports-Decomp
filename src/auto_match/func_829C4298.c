void fn_829C4298(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  *(unsigned char *)(*param_4 + param_5) =
       *(unsigned char *)
        (((int)**(short **)(param_2 + 0x50) * (int)*param_3 + 4 >> 3 & 0x3ffU) +
         *(int *)(param_1 + 0x148) + 0x80);
  return;
}

