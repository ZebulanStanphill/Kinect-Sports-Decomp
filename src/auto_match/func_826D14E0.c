extern int fn_8267C498();
extern int fn_8269A0B0();
extern int fn_8269B8B8();
extern int fn_826C7758();
extern int fn_826C86D8();
extern int fn_826D03A0();
extern int fn_82700248();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_53;
extern unsigned int uStack_54;
extern unsigned int uStack_55;
extern unsigned int uStack_56;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64 fn_826D14E0(int *param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  char cVar5;
  __int64 lVar3;
  int iVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned short uStack_58;
  unsigned char uStack_56;
  unsigned char uStack_55;
  unsigned char uStack_54;
  unsigned char uStack_53;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  fn_8269B8B8(param_1,param_1[0x28]);
  uVar1 = fn_826C86D8(param_1);
  if (-1 < (int)uVar1) {
    fn_826D03A0((unsigned __int64)(unsigned int)param_1[0x28] + 0xa98,uVar1);
  }
  *(unsigned int *)(param_1[0x28] + 0xb00) = *(unsigned int *)(param_1[0x28] + 0xb00) | 0x400;
  uVar2 = fn_8269A0B0(param_1 + 0x2a);
  if ((uVar2 & 0xff) != 0) {
    stack_pair_60.first = 4;
    stack_pair_60.second = 0;
    uStack_58 = 0;
    uStack_56 = 0;
    uStack_55 = 0xff;
    uStack_54 = 0;
    uStack_53 = 0;
    cVar5 = fn_826C7758(param_1,&stack_pair_60.first);
    uVar2 = -(unsigned __int64)(cVar5 == '\0') & uVar2;
  }
  if ((uVar2 & 0xff) == 0) {
    if ((*(unsigned char *)((int)param_1 + 0x66) & 0x20) != 0) {
      if (((unsigned int)param_1[0x23] >> 0xc & 1) == 0) {
        lVar3 = (**(int (***)())(*param_1 + 0x40))(param_1);
        iVar4 = fn_82700248(lVar3 + 0xa2c,4);
        if (iVar4 != 0) {
          *(unsigned int *)(iVar4 + 4) = 2;
          param_1[1] = param_1[1] + 1;
          uStack_4c = 0;
          uStack_48 = 0xff;
          uStack_44 = uStack_44 & 0xffff;
          if (*(int *)(iVar4 + 8) != 0) {
            fn_8267C498();
          }
          *(int **)(iVar4 + 8) = param_1;
          if (*(int *)(iVar4 + 0xc) != 0) {
            fn_8267C498();
          }
          *(unsigned int *)(iVar4 + 0xc) = 0;
          *(unsigned int *)(iVar4 + 0x10) = uStack_50;
          *(unsigned int *)(iVar4 + 0x14) = uStack_4c;
          *(unsigned int *)(iVar4 + 0x18) = uStack_48;
          *(unsigned int *)(iVar4 + 0x1c) = uStack_44;
        }
      }
    }
    lVar3 = (**(int (***)())(*param_1 + 0x40))(param_1);
    iVar4 = fn_82700248(lVar3 + 0xa2c,4);
    if (iVar4 != 0) {
      *(unsigned int *)(iVar4 + 4) = 2;
      param_1[1] = param_1[1] + 1;
      uStack_4c = 0;
      uStack_48 = 0xff;
      uStack_44 = uStack_44 & 0xffff;
      if (*(int *)(iVar4 + 8) != 0) {
        fn_8267C498();
      }
      *(int **)(iVar4 + 8) = param_1;
      if (*(int *)(iVar4 + 0xc) != 0) {
        fn_8267C498();
      }
      *(unsigned int *)(iVar4 + 0xc) = 0;
      *(unsigned int *)(iVar4 + 0x10) = uStack_50;
      *(unsigned int *)(iVar4 + 0x14) = uStack_4c;
      *(unsigned int *)(iVar4 + 0x18) = uStack_48;
      *(unsigned int *)(iVar4 + 0x1c) = uStack_44;
    }
  }
  return uVar2;
}

