unsigned char fn_823D9DA8(int *param_1)

{
  return -(param_1[6] != 0) & 0x20U | -(param_1[7] != 0) & 0x10U | -(param_1[8] != 0) & 8U |
         -(param_1[3] != 0) & 0x40U | -(param_1[5] != 0) & 4U | -(*param_1 != 0) & 0x80U |
         param_1[1] != 0 | -(param_1[2] != 0) & 2U;
}

