extern unsigned int *auStack_40;
extern int fn_82E32058();
extern unsigned int iStack_4c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


__int64 fn_82E24128(unsigned __int64 param_1,int *param_2,int *param_3,unsigned __int64 *param_4)

{
  __int64 lVar1;
  int *piStack_50;
  int iStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned __int64 auStack_40;
  
  *param_4 = 0;
  auStack_40 = 0;
  piStack_50 = (int *)0x0;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  lVar1 = (**(int (***)())(*param_2 + 0x18))(param_2,&auStack_40);
  if (-1 < lVar1) {
    lVar1 = fn_82E32058(0x18,&piStack_50);
    if (-1 < lVar1) {
      lVar1 = (**(int (***)())(*param_2 + 0x1c))(param_2,0);
      if (-1 < lVar1) {
        lVar1 = (**(int (***)())(*piStack_50 + 0xc))(piStack_50,&iStack_4c,&uStack_48,0);
        if (-1 < lVar1) {
          lVar1 = (**(int (***)())(*param_2 + 0x24))(param_2,iStack_4c,uStack_48,&uStack_44);
          if (-1 < lVar1) {
            lVar1 = (**(int (***)())(*piStack_50 + 0x10))();
            if (-1 < lVar1) {
              iStack_4c = 0;
              lVar1 = (**(int (***)())(*piStack_50 + 0x18))(piStack_50,uStack_44);
              if (-1 < lVar1) {
                lVar1 = (**(int (***)())(*param_3 + 0xc))(param_3,piStack_50,param_4);
              }
            }
          }
        }
      }
    }
  }
  if (iStack_4c != 0) {
    (**(int (***)())(*piStack_50 + 0x10))();
  }
  if (piStack_50 != (int *)0x0) {
    (**(int (***)())(*piStack_50 + 8))();
    piStack_50 = (int *)0x0;
  }
  (**(int (***)())(*param_2 + 0x1c))(param_2,auStack_40);
  return lVar1;
}

