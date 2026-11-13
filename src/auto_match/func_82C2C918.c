void fn_82C2C918(int param_1,int param_2)

{
  short sVar1;
  
  if (*(int *)(param_1 + 0x1bc) != 0) {
    *(short *)(param_2 + 0x78) =
         (short)((int)*(short *)(param_2 + 0x76) >>
                ((int)(short)*(unsigned int *)(param_1 + 0x1c8) & 0x3fU));
    *(int *)(param_2 + 0x8c) =
         (int)*(short *)(param_2 + 0x76) >> ((int)(short)*(unsigned int *)(param_1 + 0x1c8) & 0x3fU);
    *(short *)(param_2 + 0x7a) =
         (short)((int)*(short *)(param_2 + 0x7a) >>
                ((int)(short)*(unsigned int *)(param_1 + 0x1c8) & 0x3fU));
    *(short *)(param_2 + 0x7c) =
         (short)((int)*(short *)(param_2 + 0x7c) >>
                ((int)(short)*(unsigned int *)(param_1 + 0x1c8) & 0x3fU));
    *(short *)(param_2 + 0x7e) =
         (short)((int)*(short *)(param_2 + 0x7e) >>
                ((int)(short)*(unsigned int *)(param_1 + 0x1c8) & 0x3fU));
    return;
  }
  sVar1 = *(short *)(param_2 + 0x76);
  if (*(int *)(param_1 + 0x1c0) != 0) {
    *(short *)(param_2 + 0x78) = (short)((int)sVar1 << (*(unsigned int *)(param_1 + 0x1c8) & 0x3f));
    *(int *)(param_2 + 0x8c) = (int)sVar1 << (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
    *(short *)(param_2 + 0x7a) =
         (short)((int)*(short *)(param_2 + 0x7a) <<
                ((int)(short)*(unsigned int *)(param_1 + 0x1c8) & 0x3fU));
    *(short *)(param_2 + 0x7c) =
         (short)((int)*(short *)(param_2 + 0x7c) <<
                ((int)(short)*(unsigned int *)(param_1 + 0x1c8) & 0x3fU));
    *(short *)(param_2 + 0x7e) =
         (short)((int)*(short *)(param_2 + 0x7e) <<
                ((int)(short)*(unsigned int *)(param_1 + 0x1c8) & 0x3fU));
    return;
  }
  *(short *)(param_2 + 0x78) = sVar1;
  *(int *)(param_2 + 0x8c) = (int)sVar1;
  return;
}

