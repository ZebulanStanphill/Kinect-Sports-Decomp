extern int fn_82E406B8();
extern unsigned int uStack_40;


unsigned __int64 fn_82E40EC8(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uStack_40;
  __int64 alStack_38;
  
  uStack_40 = 0;
  uVar2 = 0;
  if (param_2 == (int *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else if (((*(unsigned int *)(param_1 + 0x44) & 1) == 0) && (*(int *)(param_1 + 0x48) != 0)) {
    uVar1 = (**(int (***)())(*param_2 + 0x10))(param_2,&uStack_40);
    if ((-1 < (int)uVar1) && (uStack_40 != 0)) {
      do {
        alStack_38 = 0;
        uVar1 = fn_82E406B8(param_1,param_2,uVar2,&alStack_38);
        if ((int)uVar1 < 0) {
          return 0;
        }
        uVar2 = alStack_38 + uVar2;
      } while (uVar2 < uStack_40);
    }
  }
  else {
    uVar1 = 0xffffffffc00d36bb;
  }
  return uVar1;
}

