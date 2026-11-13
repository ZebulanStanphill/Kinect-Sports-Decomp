extern int fn_82C10F40();
extern int fn_82C24220();
extern unsigned int iStack_40;


unsigned __int64 fn_82C245B0(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iStack_40;
  int aiStack_3c;
  
  iStack_40 = 0;
  aiStack_3c = 0;
  if (param_1 == 0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    uVar3 = fn_82C10F40(*(unsigned int *)(iVar1 + 0x94),param_2,&iStack_40);
    if (-1 < (int)uVar3) {
      if ((*(int *)(iStack_40 + 4) == 2) && (*(int *)(iStack_40 + 0x4c) != 0)) {
        *(unsigned int *)(iStack_40 + 4) = 0;
        *(unsigned int *)(iStack_40 + 8) = 0;
        *(unsigned int *)(iStack_40 + 0x10) = 0;
        *(unsigned int *)(iStack_40 + 0x14) = 0;
        *(unsigned int *)(iStack_40 + 0x1c) = 0;
        *(unsigned char *)(iStack_40 + 0x20) = 0;
        *(unsigned int *)(iStack_40 + 0x24) = 0;
        *(unsigned int *)(iStack_40 + 0x28) = 0;
        *(unsigned int *)(iStack_40 + 0x4c) = 1;
      }
      uVar2 = *(unsigned int *)(iStack_40 + 4);
      if (uVar2 < 4) {
        if ((uVar2 == 0) || (uVar2 == 1)) {
          *(int *)(iStack_40 + 4) = param_3;
          *(unsigned int *)(iStack_40 + 0x1c) = 0;
        }
        else {
          if (uVar2 == 2) {
            return 0xffffffff805000a1;
          }
          uVar3 = fn_82C10F40(*(unsigned int *)(iVar1 + 0x94),*(unsigned char *)(iStack_40 + 0x20),
                               &aiStack_3c);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          if (param_3 == 0) {
            *(unsigned int *)(iStack_40 + 4) = 0;
            *(unsigned int *)(aiStack_3c + 4) = 0;
            *(unsigned int *)(aiStack_3c + 0x1c) = 0;
            *(unsigned char *)(aiStack_3c + 0x20) = 0;
            *(unsigned int *)(aiStack_3c + 0x24) = 0;
            *(unsigned int *)(iStack_40 + 0x1c) = 0;
            *(unsigned char *)(iStack_40 + 0x20) = 0;
            *(unsigned int *)(iStack_40 + 0x24) = 0;
          }
        }
        fn_82C24220(param_1,param_2,*(unsigned int *)(iStack_40 + 4));
      }
      else {
        uVar3 = 0xffffffff80004005;
      }
    }
  }
  return uVar3;
}

