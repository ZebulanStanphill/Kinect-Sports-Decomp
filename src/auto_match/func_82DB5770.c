extern int fn_82CE3DC8();
extern int fn_82CEA0E8();
extern int fn_82CFF8D0();


void fn_82DB5770(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if ((*(unsigned int *)(param_1 + 0x38) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x30),
                              ((unsigned __int64)*(unsigned int *)(param_1 + 0x38) & 0x3fffffff) * 0x70);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff82142398,*(unsigned int *)(param_1 + 0x30),
               (unsigned __int64)*(unsigned int *)(param_1 + 0x34) * 0x70,uVar1);
  }
  (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff82142384,*(unsigned int *)(param_1 + 0x48),0);
  uVar1 = fn_82CEA0E8(param_1 + 0x3c);
  uVar2 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x3c),uVar1);
  (**(int (***)())(*param_2 + 0x14))
            (param_2,1,0xffffffff8214235c,*(unsigned int *)(param_1 + 0x3c),uVar1,uVar2);
  fn_82CE3DC8(param_1,param_2,0xffffffff8323d5d0);
  return;
}

