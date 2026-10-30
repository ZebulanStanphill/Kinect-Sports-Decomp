extern void fn_82C4ED60(unsigned, unsigned);
extern void fn_82C563B0(unsigned, unsigned);
extern void fn_82C563B8(unsigned, unsigned);
extern void fn_82C69448(int, int);
extern void fn_82CAAF00(unsigned, unsigned *, int);
extern void fn_82CABB98(int);

void fn_82C4FCF8(unsigned param_1)

{
  unsigned iVar1;
  unsigned heap;
  unsigned t;
  unsigned aiStack_40;
  
  heap = *(unsigned *)(param_1 + 0x6070) + 8;
  t = *(unsigned *)(param_1 + 0x5700);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x5700) = 0;
  }
  t = *(unsigned *)(param_1 + 0x5704);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x5704) = 0;
  }
  t = *(unsigned *)(param_1 + 0x5708);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x5708) = 0;
  }
  t = *(unsigned *)(param_1 + 0x570c);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x570c) = 0;
  }
  if (*(int *)(param_1 + 0xb0c4) == 0) {
    fn_82C4ED60(heap,*(unsigned *)(param_1 + 0xea0));
    iVar1 = *(unsigned *)(param_1 + 0xea0);
    if (iVar1 != 0) {
      fn_82C69448(param_1 + 0xea0,0);
      fn_82C563B0(heap,iVar1);
    }
    fn_82C4ED60(heap,*(unsigned *)(param_1 + 0xea8));
    iVar1 = *(unsigned *)(param_1 + 0xea8);
    if (iVar1 != 0) {
      fn_82C69448(param_1 + 0xea8,0);
      fn_82C563B0(heap,iVar1);
    }
    fn_82C4ED60(heap,*(unsigned *)(param_1 + 0xea4));
    iVar1 = *(unsigned *)(param_1 + 0xea4);
    if (iVar1 != 0) {
      fn_82C69448(param_1 + 0xea4,0);
      fn_82C563B0(heap,iVar1);
    }
    fn_82C4ED60(heap,*(unsigned *)(param_1 + 0xeac));
    iVar1 = *(unsigned *)(param_1 + 0xeac);
    if (iVar1 != 0) {
      fn_82C69448(param_1 + 0xeac,0);
      fn_82C563B0(heap,iVar1);
    }
    fn_82C4ED60(heap,*(unsigned *)(param_1 + 0xeb0));
    iVar1 = *(unsigned *)(param_1 + 0xeb0);
    if (iVar1 != 0) {
      fn_82C69448(param_1 + 0xeb0,0);
      fn_82C563B0(heap,iVar1);
    }
    fn_82C4ED60(heap,*(unsigned *)(param_1 + 0xeb4));
    iVar1 = *(unsigned *)(param_1 + 0xeb4);
    if (iVar1 != 0) {
      fn_82C69448(param_1 + 0xeb4,0);
      fn_82C563B0(heap,iVar1);
    }
    if (*(int *)(param_1 + 0x5710) != 0) {
      aiStack_40 = 0;
      fn_82CAAF00(*(unsigned *)(param_1 + 0x3ba4),&aiStack_40,0xffffffffffffffff);
      fn_82C4ED60(heap,aiStack_40);
      if (aiStack_40 != 0) {
        fn_82C563B8(heap, aiStack_40);
      }
    }
  }
  t = *(unsigned *)(param_1 + 0xb190);
  if (t != 0) {
    fn_82C563B0(heap, t);
    *(unsigned *)(param_1 + 0xb190) = 0;
  }
  t = *(unsigned *)(param_1 + 0xb1a4);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0xb1a4) = 0;
  }
  t = *(unsigned *)(param_1 + 0xb1a8);
  if (t != 0) {
    fn_82C563B0(heap, t);
    *(unsigned *)(param_1 + 0xb1a8) = 0;
  }
  t = *(unsigned *)(param_1 + 0x55b8);
  if (t != 0) {
    fn_82C563B0(heap, t);
    *(unsigned *)(param_1 + 0x55b8) = 0;
  }
  t = *(unsigned *)(param_1 + 0x55d4);
  if (t != 0) {
    fn_82C563B0(heap, t);
    *(unsigned *)(param_1 + 0x55d4) = 0;
  }
  t = *(unsigned *)(param_1 + 0x55c4);
  if (t != 0) {
    fn_82C563B0(heap, t);
    *(unsigned *)(param_1 + 0x55c4) = 0;
  }
  t = *(unsigned *)(param_1 + 0xf84);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0xf84) = 0;
  }
  if (*(int *)(param_1 + 0x3cb0) == 7) {
    t = *(unsigned *)(param_1 + 0x50d8);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x50d8) = 0;
    }
    t = *(unsigned *)(param_1 + 0x50dc);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x50dc) = 0;
    }
    t = *(unsigned *)(param_1 + 0x50e0);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x50e0) = 0;
    }
  }
  t = *(unsigned *)(param_1 + 0x1d0);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x1d0) = 0;
  }
  t = *(unsigned *)(param_1 + 0x3b90);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x3b90) = 0;
  }
  t = *(unsigned *)(param_1 + 0xbc4);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0xbc4) = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) != 0) {
    if (param_1 == *(int *)(*(int *)(param_1 + 0x6070) + 0x43d8)) {
      t = *(unsigned *)(param_1 + 0xc0c);
      if (t != 0) {
        fn_82C563B8(heap, t);
        *(unsigned *)(param_1 + 0xc0c) = 0;
      }
      t = *(unsigned *)(param_1 + 0x3be4);
      if (t != 0) {
        fn_82C563B8(heap, t);
        *(unsigned *)(param_1 + 0x3be4) = 0;
      }
      t = *(unsigned *)(param_1 + 0x3bfc);
      if (t != 0) {
        fn_82C563B8(heap, t);
        *(unsigned *)(param_1 + 0x3bfc) = 0;
      }
      t = *(unsigned *)(param_1 + 0x3ba8);
      if (t != 0) {
        fn_82C563B8(heap, t);
        *(unsigned *)(param_1 + 0x3ba8) = 0;
      }
      t = *(unsigned *)(param_1 + 0x6f0);
      if (t != 0) {
        fn_82C563B8(heap, t);
        *(unsigned *)(param_1 + 0x6f0) = 0;
      }
      t = *(unsigned *)(param_1 + 0x6f8);
      if (t != 0) {
        fn_82C563B8(heap, t);
        goto LAB_82c5011c;
      }
    }
    else {
      *(unsigned *)(param_1 + 0xc0c) = 0;
      *(unsigned *)(param_1 + 0x3be4) = 0;
      *(unsigned *)(param_1 + 0x3bfc) = 0;
      *(unsigned *)(param_1 + 0x3ba8) = 0;
      *(unsigned *)(param_1 + 0x6f0) = 0;
LAB_82c5011c:
      *(unsigned *)(param_1 + 0x6f8) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3bec);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3bec) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3bf4);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3bf4) = 0;
    }
  
  }
  else {
    t = *(unsigned *)(param_1 + 0x3ba8);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3ba8) = 0;
    }
    t = *(unsigned *)(param_1 + 0xc0c);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0xc0c) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3be4);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3be4) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3bfc);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3bfc) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3bec);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3bec) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3bf4);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3bf4) = 0;
    }
    t = *(unsigned *)(param_1 + 0x6f0);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x6f0) = 0;
    }
    t = *(unsigned *)(param_1 + 0x6f8);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x6f8) = 0;
    }
  }
  t = *(unsigned *)(param_1 + 0x118);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x118) = 0;
  }
  t = *(unsigned *)(param_1 + 0x110);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x110) = 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    t = *(unsigned *)(param_1 + 0xc10);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0xc10) = 0;
    }
  }
  t = *(unsigned *)(param_1 + 0x3bc8);
  if (t != 0) {
    fn_82C563B0(heap, t);
    *(unsigned *)(param_1 + 0x3bc8) = 0;
  }
  if (*(int *)(param_1 + 0x3a04) != 0) {
    t = *(unsigned *)(param_1 + 0x3a18);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3a18) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3a1c);
    if (t != 0) {
      fn_82C563B0(heap, t);
      *(unsigned *)(param_1 + 0x3a1c) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3a20);
    if (t != 0) {
      fn_82C563B0(heap, t);
      *(unsigned *)(param_1 + 0x3a20) = 0;
    }
  }
  t = *(unsigned *)(param_1 + 0x10c);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x10c) = 0;
  }
  t = *(unsigned *)(param_1 + 0x114);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x114) = 0;
  }
  t = *(unsigned *)(param_1 + 0x768);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x768) = 0;
  }
  t = *(unsigned *)(param_1 + 0x76c);
  if (t != 0) {
    fn_82C563B0(heap, t);
    *(unsigned *)(param_1 + 0x76c) = 0;
  }
  if (*(int *)(param_1 + 0x3cb0) >= 5) {
    fn_82CABB98(param_1 + 0x7b4);
  }
  t = *(unsigned *)(param_1 + 0x3d68);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x3d68) = 0;
  }
  t = *(unsigned *)(param_1 + 0x3d70);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x3d70) = 0;
  }
  t = *(unsigned *)(param_1 + 0x3d6c);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x3d6c) = 0;
  }
  t = *(unsigned *)(param_1 + 0x3d74);
  if (t != 0) {
    fn_82C563B8(heap, t);
    *(unsigned *)(param_1 + 0x3d74) = 0;
  }
  if ((*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) == 0) ||
     (param_1 == *(int *)(*(int *)(param_1 + 0x6070) + 0x43d8))) {
    t = *(unsigned *)(param_1 + 0x3d78);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3d78) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3d80);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3d80) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3d88);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3d88) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3d90);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3d90) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3d98);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3d98) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3da0);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3da0) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3da8);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3da8) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3db0);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3db0) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3db8);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3db8) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3dc0);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3dc0) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3dc8);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3dc8) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3dd0);
    if (t == 0) goto LAB_82c50514;
    fn_82C563B8(heap, t);
  }
  else {
    *(unsigned *)(param_1 + 0x3d78) = 0;
    *(unsigned *)(param_1 + 0x3d80) = 0;
    *(unsigned *)(param_1 + 0x3d88) = 0;
    *(unsigned *)(param_1 + 0x3d90) = 0;
    *(unsigned *)(param_1 + 0x3d98) = 0;
    *(unsigned *)(param_1 + 0x3da0) = 0;
    *(unsigned *)(param_1 + 0x3da8) = 0;
    *(unsigned *)(param_1 + 0x3db0) = 0;
    *(unsigned *)(param_1 + 0x3db8) = 0;
    *(unsigned *)(param_1 + 0x3dc0) = 0;
    *(unsigned *)(param_1 + 0x3dc8) = 0;
  }
  *(unsigned *)(param_1 + 0x3dd0) = 0;
LAB_82c50514:
  if (*(unsigned *)(param_1 + 0xd40) >= 2) {
    t = *(unsigned *)(param_1 + 0x3d7c);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3d7c) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3d84);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3d84) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3d8c);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3d8c) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3d94);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3d94) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3d9c);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3d9c) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3da4);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3da4) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3dac);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3dac) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3db4);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3db4) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3dbc);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3dbc) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3dc4);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3dc4) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3dcc);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3dcc) = 0;
    }
    t = *(unsigned *)(param_1 + 0x3dd4);
    if (t != 0) {
      fn_82C563B8(heap, t);
      *(unsigned *)(param_1 + 0x3dd4) = 0;
    }
  }
  t = *(unsigned *)(param_1 + 0x566c);
  if (t != 0) {
    fn_82C563B0(heap, t);
    *(unsigned *)(param_1 + 0x566c) = 0;
  }
  return;
}

