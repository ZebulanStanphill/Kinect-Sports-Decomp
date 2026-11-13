#define true 1
extern int fn_82292780();
extern int fn_8239DD40();
extern int fn_8239DD40();
extern int fn_822932E8();
extern int fn_8265C9E0();
extern int fn_828647D8();


unsigned __int64 fn_82292828(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int aiStack_40;

  piVar4 = (int *)*param_1;
  while( true ) {
    if (piVar4 == (int *)param_1[1]) {
      aiStack_40 = fn_8265C9E0(0x60);
      if (aiStack_40 == 0) {
        aiStack_40 = 0;
      }
      else {
        fn_82292780(aiStack_40,param_2);
        *(unsigned int *)(aiStack_40 + 0x24) = 0;
        *(unsigned int *)(aiStack_40 + 0x28) = 0;
        *(unsigned int *)(aiStack_40 + 0x2c) = 0;
        *(unsigned int *)(aiStack_40 + 0x34) = 0;
        *(unsigned int *)(aiStack_40 + 0x38) = 0;
        *(unsigned int *)(aiStack_40 + 0x3c) = 0;
        *(unsigned int *)(aiStack_40 + 0x44) = 0;
        *(unsigned int *)(aiStack_40 + 0x48) = 0;
        *(unsigned int *)(aiStack_40 + 0x4c) = 0;
        *(unsigned int *)(aiStack_40 + 0x58) = 1;
        *(unsigned char *)(aiStack_40 + 0x5c) = 0;
        fn_8239DD40(aiStack_40 + 0x24,100);
        fn_8239DD40(aiStack_40 + 0x34,100);
        fn_8239DD40(aiStack_40 + 0x44,0xf);
      }
      fn_822932E8(param_1,&aiStack_40);
      return 0;
    }
    iVar1 = *piVar4;
    iVar2 = fn_828647D8(iVar1);
    iVar3 = fn_828647D8(param_2);
    if (iVar2 == iVar3) break;
    piVar4 = piVar4 + 1;
  }
  *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) + 1;
  return 0;
}
