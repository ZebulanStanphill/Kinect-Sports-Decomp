extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BE56B0();
extern int fn_82BE56C0();
extern int fn_82BE5B48();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82BEB628();
extern int fn_82BEB640();


unsigned __int64 fn_82BE73C8(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iVar4;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar1 = 0x2bd;
  }
  else {
    iVar3 = fn_82BE5B48(param_2);
    if (iVar3 == 0) {
      uVar1 = 700;
    }
    else {
      iVar4 = param_1 + 0x2c;
      iVar3 = fn_82BEA200(iVar4,0xffffffff820e98f4);
      if (iVar3 == 0) {
        uVar1 = 0x2c0;
      }
      else {
        uVar2 = fn_82BE56B0(0xc);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82BEB628(uVar2,param_2);
        }
        if ((uVar2 & 0xffffffff) == 0) {
          fn_82BEA230(iVar4,0xffffffff820e98f4);
          *(unsigned int *)(param_1 + 0x10) = 0;
          uVar1 = fn_82BE5240(param_1,0x65,0xffffffff820e98d0);
        }
        else {
          iVar3 = fn_82BE52B8(param_1 + 0x14,uVar2);
          if (iVar3 == 0) {
            fn_82BEB640(uVar2);
            fn_82BE56C0(uVar2);
            uVar1 = 0x2be;
          }
          else {
            uVar1 = 0;
          }
          fn_82BEA230(iVar4,0xffffffff820e98f4);
        }
      }
    }
  }
  return uVar1;
}

