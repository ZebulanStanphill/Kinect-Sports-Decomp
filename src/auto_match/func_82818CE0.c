extern int fn_8281C448();


void fn_82818CE0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if ((param_2 & 1) != 0) {
    fn_8281C448(0xffffffff8201e118,param_1);
    fn_8281C448(0xffffffff8201e130,param_1[1],*param_1);
    fn_8281C448(0xffffffff8201e154,param_1[2]);
    fn_8281C448(0xffffffff8201e170,param_1[3]);
    fn_8281C448(0xffffffff8201e18c,param_1[5]);
    fn_8281C448(0xffffffff8201e1a4,param_1[7]);
    fn_8281C448(0xffffffff8201e1bc,param_1[6]);
    fn_8281C448(0xffffffff8201e1d4,param_1[9]);
    fn_8281C448(0xffffffff8201e1ec,param_1[0x13]);
    fn_8281C448(0xffffffff8201e204,param_1[0x14]);
    fn_8281C448(0xffffffff8201e21c,param_1[0x15]);
    fn_8281C448(0xffffffff8201e234,param_1[0x16]);
    fn_8281C448(0xffffffff8201e24c,param_1[0x17]);
    fn_8281C448(0xffffffff8201e264,param_1[0x18]);
    fn_8281C448(0xffffffff8201e27c,param_1[0x19]);
    fn_8281C448(0xffffffff8201e294,param_1[0x1a]);
    fn_8281C448(0xffffffff8201e2ac,param_1[0x1b]);
    fn_8281C448(0xffffffff8201e2c4,param_1[0x1c]);
    fn_8281C448(0xffffffff8201e2dc,*(unsigned char *)((int)param_1 + 0x75));
    fn_8281C448(0xffffffff8201e2f4,param_1[0x1e]);
    fn_8281C448(0xffffffff8201e30c);
    fn_8281C448(0xffffffff8201e314,*(unsigned int *)param_1[4]);
    fn_8281C448(0xffffffff8201e32c,*(unsigned int *)(param_1[4] + 8));
    fn_8281C448(0xffffffff8201e344,*(unsigned int *)(param_1[4] + 0xc));
    fn_8281C448(0xffffffff8201e35c,*(unsigned int *)(param_1[4] + 4));
    fn_8281C448(0xffffffff8201e374,*(unsigned int *)(param_1[4] + 0x10));
    fn_8281C448(0xffffffff8201e38c,*(unsigned int *)(param_1[4] + 0x14));
    fn_8281C448(0xffffffff8201e3a4,*(unsigned int *)(param_1[4] + 0x18));
    fn_8281C448(0xffffffff8201e3bc,*(unsigned int *)(param_1[4] + 0x1c));
    fn_8281C448(0xffffffff8201e3d4,*(unsigned int *)(param_1[4] + 0x20));
    fn_8281C448(0xffffffff8201e3ec,*(unsigned int *)(param_1[4] + 0x24));
    fn_8281C448(0xffffffff8201e404,*(unsigned int *)(param_1[4] + 0x28));
    fn_8281C448(0xffffffff8201e41c,*(unsigned int *)(param_1[4] + 0x2c));
    fn_8281C448(0xffffffff8201e434,*(unsigned int *)(param_1[4] + 0x34));
    fn_8281C448(0xffffffff8201e44c);
  }
  if ((param_2 & 2) != 0) {
    fn_8281C448(0xffffffff8201e450,param_1);
    fn_8281C448(0xffffffff8201e464,param_1[10]);
    fn_8281C448(0xffffffff8201e488,
                      (unsigned __int64)(unsigned int)param_1[0xc] + (unsigned __int64)(unsigned int)param_1[0xb]);
    fn_8281C448(0xffffffff8201e4d4,param_1[0xd]);
    fn_8281C448(0xffffffff8201e4f8,param_1[0xe]);
    fn_8281C448(0xffffffff8201e51c,param_1[0xf]);
    fn_8281C448(0xffffffff8201e53c,param_1[0x10]);
    fn_8281C448(0xffffffff8201e55c,param_1[0x11]);
    fn_8281C448(0xffffffff8201e580,param_1[0x12]);
    fn_8281C448(0xffffffff8201e5a4);
  }
  if ((param_2 & 4) != 0) {
    if (*(int *)(param_1[4] + 0x30) == 0) {
      fn_8281C448(0xffffffff8201e63c,param_1);
    }
    else {
      uVar1 = param_2 & 0xf0;
      if (uVar1 == 0x10) {
        fn_8281C448(0xffffffff8201e5a8,param_1);
        uVar2 = 0xffffffff82818cc8;
      }
      else if (uVar1 == 0x20) {
        fn_8281C448(0xffffffff8201e5cc,param_1);
        uVar2 = 0xffffffff828186a8;
      }
      else if (uVar1 == 0x30) {
        fn_8281C448(0xffffffff8201e5f4,param_1);
        uVar2 = 0xffffffff82818708;
      }
      else {
        fn_8281C448(0xffffffff8201e618,param_1);
        uVar2 = 0xffffffff82818730;
      }
      (**(int (***)())(param_1[4] + 0x30))(param_1,uVar2);
    }
    if (*(int (***)())(param_1[4] + 0x2c) != (int (**)())0x0) {
      (**(int (***)())(param_1[4] + 0x2c))(param_1,0xffffffff82818738,0xffffffff828187d8);
    }
    fn_8281C448(0xffffffff8201e654);
  }
  if ((param_2 & 8) != 0) {
    (**(int (***)())(param_1[4] + 0x34))(param_1,param_2);
  }
  return;
}

