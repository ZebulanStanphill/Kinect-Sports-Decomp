extern unsigned int *auStack_40;
extern void *fn_82E58B58();


int fn_82E41B70(int param_1,int *param_2)

{
  int lVar1;
  void *iVar2;
  unsigned __int64 auStack_40;
  
  if (param_2 == (int *)0x0) {
    return 0x80070057;
  }
  else {
    auStack_40 = 0;
    lVar1 = (*(int (**)())(*param_2 + 0x8c))(param_2,&auStack_40);
    if (lVar1 >= 0) {
      *(unsigned __int64 *)(param_1 + 0x5b0) = auStack_40;
      lVar1 = (*(int (**)())(*param_2 + 0x94))(param_2,(unsigned __int64 *)(param_1 + 0x5b8));
      if ((int)lVar1 == -0x3ff2c937) {
        lVar1 = 0;
        *(unsigned __int64 *)(param_1 + 0x5b8) = 0;
      }
      if (lVar1 >= 0) {
        iVar2 = fn_82E58B58(param_1 + 0x4b4,param_2);
        if (iVar2 == 0) {
          lVar1 = -0x7ff8fff2;
        }
        else {
          (*(int (**)())(*param_2 + 4))(param_2);
          *(__int64 *)(param_1 + 0x5a8) = *(__int64 *)(param_1 + 0x5a8) + 1;
        }
      }
    }
  }
  return lVar1;
}

