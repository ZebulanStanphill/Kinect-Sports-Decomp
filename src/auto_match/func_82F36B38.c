extern int fn_82F35400();
extern int fn_82F37588();


unsigned __int64 fn_82F36B38(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int *piStack_50;
  unsigned int *apuStack_4c [19];
  
  uVar1 = *(unsigned int *)(param_1 + 0xc4);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      fn_82F35400(param_1 + 0x5c,uVar4,apuStack_4c);
      piVar2 = (int *)*apuStack_4c[0];
      iVar3 = (**(int (***)())*piVar2)(piVar2,0xffffffff8214c740,&piStack_50);
      if (-1 < iVar3) {
        (**(int (***)())(*piStack_50 + 0x10))();
        if (piStack_50 != (int *)0x0) {
          (**(int (***)())(*piStack_50 + 8))();
          piStack_50 = (int *)0x0;
        }
      }
      (**(int (***)())(*piVar2 + 8))(piVar2);
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (unsigned __int64)uVar1);
  }
  fn_82F37588(param_1 + 0x5c,0);
  *(unsigned int *)(param_1 + 0xc4) = 0;
  *(unsigned int *)(param_1 + 0x13c) = 0;
  return 0;
}

