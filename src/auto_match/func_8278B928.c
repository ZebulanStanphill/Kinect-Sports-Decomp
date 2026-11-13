extern float lbl_82005718;


unsigned __int64 fn_8278B928(int param_1,int param_2)

{
  int iVar1;
  
  if ((((((*(unsigned short *)(param_1 + 0x2a) >> 2 & 1) != 0) &&
        ((*(unsigned short *)(param_2 + 0x2a) >> 2 & 1) != 0)) &&
       (iVar1 = thunk_FUN_82f65ac0(((unsigned __int64)*(unsigned int *)(param_1 + 8) & 0xfffffffc) + 8,
                                   ((unsigned __int64)*(unsigned int *)(param_2 + 8) & 0xfffffffc) + 8), iVar1 == 0
       )) || ((((*(unsigned short *)(param_1 + 0x2a) >> 0xb & 1) != 0 &&
               ((*(unsigned short *)(param_2 + 0x2a) >> 0xb & 1) != 0)) &&
              (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))))) &&
     (((((*(unsigned int *)(param_1 + 0x20) ^ *(unsigned int *)(param_2 + 0x20)) & 0xffffff) == 0 &&
       (*(char *)(param_1 + 0x20) == *(char *)(param_2 + 0x20))) &&
      (((float)*(unsigned short *)(param_1 + 0x26) * lbl_82005718 ==
        (float)*(unsigned short *)(param_2 + 0x26) * lbl_82005718 &&
       ((((*(unsigned char *)(param_2 + 0x28) ^ *(unsigned char *)(param_1 + 0x28)) & 8) == 0 &&
        ((float)(__int64)*(short *)(param_1 + 0x24) * lbl_82005718 ==
         (float)(__int64)*(short *)(param_2 + 0x24) * lbl_82005718)))))))) {
    return 1;
  }
  return 0;
}

