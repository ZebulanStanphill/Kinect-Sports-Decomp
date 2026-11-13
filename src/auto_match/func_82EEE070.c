extern int fn_82EED968();
extern int fn_82EEDF48();
extern int fn_82F41728();
extern int fn_82F41758();
extern int fn_82F41920();
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;


__int64 fn_82EEE070(int *param_1,int *param_2,unsigned __int64 param_3,unsigned int param_4,int param_5,
                      int param_6,__int64 param_7)

{
  __int64 lVar1;
  int iVar2;
  unsigned int uStack0000002c;
  int aiStack_50;
  
  uStack0000002c = param_4;
  fn_82F41920(param_2);
  param_2[0x13] = param_6;
  fn_82F41728(param_2,param_3,&stack0x0000002c);
  lVar1 = (**(int (***)())(*param_1 + 0x14))(param_1,-(unsigned __int64)(param_7 != 0) & 0x20000,param_2);
  fn_82F41758(param_2);
  if (-1 < (int)lVar1) {
    aiStack_50 = 0;
    lVar1 = (**(int (***)())(*param_1 + 0x20))(param_1,&aiStack_50);
    if (-1 < lVar1) {
      iVar2 = 0;
      lVar1 = 1;
      if (0 < aiStack_50) {
        do {
          if ((int)lVar1 != 1) break;
          *param_2 = iVar2;
          *(unsigned short *)(param_2 + 1) = 0;
          param_2[2] = 0;
          param_2[3] = 0;
          if (((param_2[0xf] == 6) || (*(short *)(param_2 + 0x10) != 0)) ||
             (0xffff < uStack0000002c)) {
            param_2[2] = 1;
          }
          lVar1 = (**(int (***)())(*param_1 + 0x24))
                            (param_1,-(unsigned __int64)(param_7 != 0) & 0x20000 | 0x401,param_2);
          if (lVar1 < 0) goto LAB_82eee228;
          iVar2 = iVar2 + 1;
        } while (iVar2 < aiStack_50);
        if ((int)lVar1 < 0) goto LAB_82eee228;
        if ((int)lVar1 != 1) {
          if ((param_5 == 0) || (iVar2 = fn_82EED968(param_1 + 2,param_2,0), iVar2 != 0)) {
            lVar1 = fn_82EEDF48(param_1,param_2);
          }
          else {
            lVar1 = -0x7ff8fff2;
          }
          goto LAB_82eee228;
        }
      }
      if (((int)param_7 == 0) && (param_2[0x15] != 0)) {
        lVar1 = -0x3ff2c94e;
      }
      else {
        lVar1 = -0x7fffbffb;
      }
    }
  }
LAB_82eee228:
  fn_82F41920(param_2);
  (**(int (***)())(*param_1 + 0x1c))(param_1,param_2);
  return lVar1;
}

