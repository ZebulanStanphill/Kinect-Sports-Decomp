extern unsigned int *auStack_2c;
extern int fn_82E78690();
extern int fn_82E78A40();
extern unsigned int iStack_30;


unsigned __int64 fn_82E7A3B8(int param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iStack_30;
  unsigned int auStack_2c;
  
  iStack_30 = 0;
  if (((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1e0)) && (param_3 != (int *)0x0)) {
    uVar1 = (**(int (***)())(*param_3 + 0x9c))(param_3,&iStack_30);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (iStack_30 != 0) {
      lVar2 = fn_82E78690(param_1 + 0x178,param_2,&auStack_2c);
      auStack_2c = -(unsigned int)(lVar2 != 0) & auStack_2c;
      if (auStack_2c == 0) {
        return 0xffffffff8000ffff;
      }
      uVar1 = fn_82E78A40(param_1,auStack_2c,param_3);
      return uVar1;
    }
  }
  return 0xffffffff80070057;
}

