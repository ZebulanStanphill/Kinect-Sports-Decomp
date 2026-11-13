extern int fn_82E4FE40();
extern int fn_82EE0A68();
extern int fn_82EF2CB8();
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


unsigned __int64 fn_82EF3818(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int aiStack_2c;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x264) != 0) {
    iVar1 = param_1 + 0x58;
    do {
      fn_82EF2CB8(iVar1,uVar2,&iStack_40);
      if (*(int *)(iStack_40 + 4) != 0) {
        fn_82E4FE40();
      }
      fn_82EF2CB8(iVar1,uVar2,&iStack_3c);
      *(unsigned int *)(iStack_3c + 4) = 0;
      fn_82EF2CB8(iVar1,uVar2,&iStack_38);
      if (*(int *)(iStack_38 + 8) != 0) {
        fn_82E4FE40();
      }
      fn_82EF2CB8(iVar1,uVar2,&iStack_34);
      *(unsigned int *)(iStack_34 + 8) = 0;
      fn_82EF2CB8(iVar1,uVar2,&iStack_30);
      if (*(int *)(iStack_30 + 0x10) != 0) {
        fn_82E4FE40();
      }
      fn_82EF2CB8(iVar1,uVar2,&aiStack_2c);
      uVar2 = uVar2 + 1;
      *(unsigned int *)(aiStack_2c + 0x10) = 0;
    } while ((uVar2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x264));
  }
  fn_82EE0A68(param_1 + 0x58,0);
  *(unsigned int *)(param_1 + 0x264) = 0;
  return 0;
}

