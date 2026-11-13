extern unsigned int *auStack_40;
extern unsigned int *auStack_4c;
extern int fn_82E83758();
extern int fn_82E838A0();
extern int fn_82E85268();
extern int fn_82E85718();
extern int fn_82E86C50();
extern int fn_82F19D30();
extern int fn_82E99258();
extern int fn_82F02410();
extern int fn_82F15928();
extern int fn_82F15B18();
extern int fn_82F19D30();
extern unsigned int lbl_831ADEE0;
extern unsigned int lbl_831ADEE4;
extern unsigned int uStack_50;


void fn_82E89078(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar4;
  unsigned int uVar5;
  __int64 lVar3;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int auStack_40 [10];

  if (*(int *)(param_1 + 0xb08) != 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0xaf0),1);
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),(unsigned __int64)*(unsigned int *)(param_1 + 0x5320) - 1,1
                     );
    if (*(int *)(param_1 + 0xaf0) != 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x6f4c) != 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),0,1);
  }
  fn_82E83758(param_1);
  if (((*(int *)(param_1 + 0xaf0) == 0) && (*(int *)(param_1 + 0x76c8) != 0)) &&
     (*(int *)(param_1 + 0x76e0) == 0)) {
    fn_82F15928(param_1);
  }
  if (*(int *)(param_1 + 0x6f58) != 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),0,8);
  }
  if (*(int *)(param_1 + 0x6f48) != 0) {
    if ((*(int *)(param_1 + 0x6f4c) == 0) || (*(int *)(param_1 + 0x6f7c) != 0)) {
      uVar7 = *(unsigned int *)(param_1 + 0x6f60);
      uVar6 = 2;
    }
    else {
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x6f50),1);
      uVar7 = *(unsigned int *)(param_1 + 0x6f54);
      uVar6 = 1;
    }
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar7,uVar6);
  }
  if (*(int *)(param_1 + 0x4fc) != 0) {
    fn_82E85718(param_1);
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x618),1);
  if (*(int *)(param_1 + 0x6f4c) != 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x6d40),1);
  }
  if (*(int *)(param_1 + 0x5a4) != 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x5a8),1);
  }
  if (*(int *)(param_1 + 0xaf0) == 2) {
    stack_pair_50.first = 0;
    stack_pair_50.second = 0;
    fn_82E85268(param_1,&stack_pair_50.first,&stack_pair_50.second,*(unsigned int *)(param_1 + 0x1acc),
                  *(unsigned int *)(param_1 + 0x84c));
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),stack_pair_50.first & 0x7f,stack_pair_50.second);
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x58c),5);
  if (*(int *)(param_1 + 0x58c) < 9) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x590),1);
  }
  if (*(int *)(param_1 + 0x5a0) != 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x594),1);
  }
  if (*(int *)(param_1 + 0x880) != 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x884),2);
  }
  *(unsigned int *)(param_1 + 0x614) = *(unsigned int *)(param_1 + 0x588);
  if ((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) {
    if (*(int *)(param_1 + 0x76c8) == 0) {
      fn_82F19D30(param_1,4);
    }
    else {
      fn_82E99258();
      fn_82F19D30(param_1,4);
    }
    uVar1 = *(unsigned int *)(param_1 + 0x924);
    if ((uVar1 & 2) == 0) goto LAB_82e893b4;
    if ((uVar1 & 4) != 0) {
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),3,2);
      if (*(int *)(param_1 + 0x76c8) == 0) {
        fn_82F19D30(param_1,5);
      }
      else {
        fn_82E99258();
        fn_82F19D30(param_1,5);
      }
      goto LAB_82e893b4;
    }
    if ((uVar1 & 1) == 0) {
      uVar7 = 1;
      uVar4 = 0;
    }
    else {
      uVar7 = 2;
      uVar4 = 2;
    }
  }
  else {
    if (*(int *)(param_1 + 0xa04) == 0) goto LAB_82e893b4;
    auStack_40[0] = 0;
    auStack_40[2] = 2;
    auStack_40[3] = 2;
    auStack_40[5] = 3;
    auStack_40[7] = 3;
    auStack_40[1] = 1;
    auStack_40[4] = 6;
    auStack_40[6] = 7;
    uVar7 = auStack_40[*(int *)(param_1 + 0xa1c) * 2 + 1];
    uVar4 = auStack_40[*(int *)(param_1 + 0xa1c) * 2];
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar4,uVar7);
LAB_82e893b4:
  if ((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) {
    if (*(int *)(param_1 + 0x62c) != 0) {
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x630),1);
    }
    if (*(int *)(param_1 + 0x604) != 0) {
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x600),1);
    }
    if (*(int *)(param_1 + 0x600) == 0) {
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x4e44) == 0) {
        uVar6 = 1;
        lVar3 = 0;
      }
      else {
        uVar6 = 2;
        lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4e44) + 1;
      }
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),lVar3,uVar6);
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x4e48) == 0) {
        uVar6 = 1;
        lVar3 = 0;
      }
      else {
        uVar6 = 2;
        lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4e48) + 1;
      }
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),lVar3,uVar6);
    }
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x4e4c),1);
    if (*(int *)(param_1 + 0x978) == 0) {
      *(unsigned int *)(param_1 + 0x97c) = 0;
      *(unsigned char *)(param_1 + 0x980) = 0;
      *(unsigned int *)(param_1 + 0x984) = 0;
      *(char *)(param_1 + 0x981) = (char)*(unsigned int *)(param_1 + 0x588);
    }
    else {
      if (*(int *)(param_1 + 0x97c) == 0) {
        *(unsigned int *)(param_1 + 0x97c) = 0;
        *(unsigned char *)(param_1 + 0x980) = 0;
        *(unsigned int *)(param_1 + 0x984) = 0;
        *(char *)(param_1 + 0x981) = (char)*(unsigned int *)(param_1 + 0x588);
      }
      fn_82E86C50(param_1,0);
    }
  }
  else {
    fn_82E838A0(param_1);
    if (*(int *)(param_1 + 0x89c) == 0) {
      if (*(int *)(param_1 + 0x76c8) == 0) {
        fn_82F19D30(param_1,1);
      }
      else {
        fn_82E99258();
        fn_82F19D30(param_1,1);
      }
    }
    if ((0 < *(int *)(param_1 + 0x84c)) && (*(int *)(param_1 + 0xaf0) == 2)) {
      fn_82F19D30(param_1,3);
    }
    if (*(int *)(param_1 + 0x76c8) == 0) {
      fn_82F19D30(param_1,0);
    }
    else {
      fn_82E99258();
      fn_82F19D30(param_1,0);
    }
    fn_82F15B18(param_1);
    if (*(int *)(param_1 + 0x978) != 0) {
      fn_82E86C50(param_1,1);
    }
    if (*(int *)(param_1 + 0x648) != 0) {
      uVar4 = 1;
      uVar7 = *(unsigned int *)(param_1 + 0x1ebc);
      if (*(int *)(param_1 + 0x61c) == 0) {
        fn_82F02410(uVar7,1,1);
        uVar7 = *(unsigned int *)(param_1 + 0x1ebc);
        iVar2 = *(int *)(param_1 + 0x620) * 8;
        uVar5 = *(unsigned int *)(&lbl_831ADEE0 + iVar2);
        uVar4 = *(unsigned int *)(&lbl_831ADEE4 + iVar2);
      }
      else {
        uVar5 = 0;
      }
      fn_82F02410(uVar7,uVar5,uVar4);
    }
    if (*(int *)(param_1 + 0x604) != 0) {
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x600),1);
    }
    if (*(int *)(param_1 + 0x600) == 0) {
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x4e44) == 0) {
        uVar6 = 1;
        lVar3 = 0;
      }
      else {
        uVar6 = 2;
        lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4e44) + 1;
      }
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),lVar3,uVar6);
    }
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x4e4c),1);
  }
  return;
}
