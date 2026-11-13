void fn_82F20F70(int param_1,int param_2,unsigned char param_3,unsigned int param_4,
                  int param_5)

{
  int uVar1;
  
  switch(param_3) {
  case 1:
    (*(int (**)())(param_1 + 0x870))
              ((param_4 + (param_4 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + param_2,param_4,param_5,4);
    break;
  case 2:
    (*(int (**)())(param_1 + 0x870))((param_4 & 0x1fffffff) * 8 + param_2,param_4,param_5,4);
    break;
  case 3:
    (*(int (**)())(param_1 + 0x870))((param_4 & 0x1fffffff) * 8 + param_2,param_4,param_5,8);
    break;
  case 4:
    (*(int (**)())(param_1 + 0x870))((param_4 & 0x3fffffff) * 4 + param_2,param_4,param_5,4);
    break;
  case 5:
    (*(int (**)())(param_1 + 0x870))((param_4 & 0x3fffffff) * 4 + param_2,param_4,param_5,4);
    (*(int (**)())(param_1 + 0x870))
              ((param_4 + (param_4 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + param_2,param_4,param_5,4);
    break;
  case 6:
    (*(int (**)())(param_1 + 0x870))((param_4 & 0x3fffffff) * 4 + param_2,param_4,param_5,8);
    break;
  case 7:
    (*(int (**)())(param_1 + 0x870))((param_4 & 0x3fffffff) * 4 + param_2,param_4,param_5,0xc);
    break;
  case 8:
    uVar1 = 4;
    goto LAB_82f21274;
  case 9:
    (*(int (**)())(param_1 + 0x870))(param_2,param_4,param_5,4);
    (*(int (**)())(param_1 + 0x870))
              ((param_4 + (param_4 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + param_2,param_4,param_5,4);
    break;
  case 10:
    (*(int (**)())(param_1 + 0x870))(param_2,param_4,param_5,4);
    (*(int (**)())(param_1 + 0x870))((param_4 & 0x1fffffff) * 8 + param_2,param_4,param_5,4);
    break;
  case 0xb:
    (*(int (**)())(param_1 + 0x870))(param_2,param_4,param_5,4);
    (*(int (**)())(param_1 + 0x870))((param_4 & 0x1fffffff) * 8 + param_2,param_4,param_5,8);
    break;
  case 0xc:
    uVar1 = 8;
    goto LAB_82f21274;
  case 0xd:
    (*(int (**)())(param_1 + 0x870))(param_2,param_4,param_5,8);
    (*(int (**)())(param_1 + 0x870))
              ((param_4 + (param_4 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + param_2,param_4,param_5,4);
    break;
  case 0xe:
    uVar1 = 0xc;
    goto LAB_82f21274;
  case 0xf:
    uVar1 = 0x10;
LAB_82f21274:
    (*(int (**)())(param_1 + 0x870))(param_2,param_4,param_5,uVar1);
  }
  return;
}

