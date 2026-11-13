extern int fn_8281C448();


__int64 fn_828189C8(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  int aiStack_30 [12];
  
  lVar1 = param_2;
  if ((*(unsigned int *)(param_1 + 0xc) & 4) != 0) {
    lVar1 = param_2 - (unsigned __int64)*(unsigned int *)(param_1 + 0x78);
  }
  (**(int (***)())(*(int *)(param_1 + 0x10) + 0x18))(param_1,lVar1,aiStack_30);
  if ((aiStack_30[0] != 0) && (*(int *)(aiStack_30[0] + 0x20) != 0)) {
    fn_8281C448(0xffffffff8201e6b0,*(unsigned int *)(aiStack_30[0] + 0x1c));
  }
  fn_8281C448(0xffffffff8201e6bc,param_2,param_1,param_3);
  if (aiStack_30[0] != 0) {
    fn_8281C448(0xffffffff8201e6d4,*(unsigned int *)(aiStack_30[0] + 0x14));
    fn_8281C448(0xffffffff8201e6d8,*(unsigned int *)(aiStack_30[0] + 0x18));
    fn_8281C448(0xffffffff8201e6dc,*(unsigned char *)(aiStack_30[0] + 0x10),
                      *(unsigned char *)(aiStack_30[0] + 0x11),*(unsigned char *)(aiStack_30[0] + 0x12),
                      *(unsigned char *)(aiStack_30[0] + 0x13));
    fn_8281C448(0xffffffff8201e6f0,*(unsigned int *)(aiStack_30[0] + 0x24));
  }
  fn_8281C448(0xffffffff8201e6f4);
  return param_2;
}

