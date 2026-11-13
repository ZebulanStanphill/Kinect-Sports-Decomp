extern unsigned int *auStack_30;
extern int fn_826944C8();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_82698190();
extern int fn_826B44A0();


unsigned __int64 fn_8272C1E0(int *param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  char cVar4;
  unsigned __int64 uVar3;
  unsigned int *apuStack_40 [4];
  unsigned char auStack_30 [48];
  
  if (*(int *)(param_1[0x2d] + 0x10) == 0) {
LAB_8272c2d4:
    uVar3 = 1;
  }
  else {
    lVar2 = (**(int (***)())(*param_1 + 0x5c))();
    if (lVar2 != 0) {
      auStack_30[0] = 0;
      cVar4 = fn_826B44A0(lVar2,param_1 + 0x2d,auStack_30,0,0,0,0);
      if (cVar4 == '\0') {
        (**(int (***)())(*param_1 + 0x1ac))(param_1,0xffffffff82196582,0,0);
      }
      else {
        cVar4 = fn_82698190(auStack_30,lVar2,param_1 + 0x2e);
        if (cVar4 == '\0') {
          fn_82695FA0(param_1 + 0x2e,auStack_30);
          fn_82696D38(apuStack_40,auStack_30,lVar2,0xffffffffffffffff,0);
          (**(int (***)())(*param_1 + 0x1ac))(param_1,*apuStack_40[0],0,0);
          uVar1 = apuStack_40[0][2];
          apuStack_40[0][2] = (int)((unsigned __int64)uVar1 - 1);
          if ((unsigned __int64)uVar1 - 1 == 0) {
            fn_826944C8(apuStack_40[0]);
          }
          fn_82696330(auStack_30);
          goto LAB_8272c2d4;
        }
      }
      fn_82696330(auStack_30);
    }
    uVar3 = 0;
  }
  return uVar3;
}

