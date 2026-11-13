extern int fn_8278B2C8();


unsigned __int64 fn_8278B6F0(int param_1,int param_2)

{
  char cVar1;
  
  if ((((*(short *)(param_1 + 0x16) == *(short *)(param_2 + 0x16)) &&
       (*(short *)(param_1 + 0xc) == *(short *)(param_2 + 0xc))) &&
      (*(short *)(param_1 + 0xe) == *(short *)(param_2 + 0xe))) &&
     (((*(short *)(param_1 + 0x10) == *(short *)(param_2 + 0x10) &&
       (*(short *)(param_1 + 0x12) == *(short *)(param_2 + 0x12))) &&
      ((*(short *)(param_1 + 0x14) == *(short *)(param_2 + 0x14) &&
       (cVar1 = fn_8278B2C8(param_1,*(unsigned int *)(param_2 + 8)), cVar1 != '\0')))))) {
    return 1;
  }
  return 0;
}

