typedef unsigned char bool;
extern int fn_82686278();
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


unsigned __int64 fn_82686500(unsigned __int64 param_1,int *param_2)

{
  bool bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int *piStack_40;
  unsigned int uStack_3c;
  int *piStack_38;
  unsigned int uStack_34;
  int *piStack_30;
  unsigned int uStack_2c;
  
  uVar3 = 0;
  bVar1 = *param_2 != 0;
  if (bVar1) {
    uVar2 = fn_82686278(&piStack_40,(unsigned __int64)(unsigned int)param_2[1] + 0x14);
  }
  else {
    uVar2 = (**(int (***)())(*(int *)param_2[1] + 4))(&piStack_38);
  }
  fn_82686278(&piStack_30,uVar2);
  if (bVar1) {
    if (piStack_40 != (int *)0x0) {
      (**(int (***)())(*piStack_40 + 8))(piStack_40,uStack_3c);
    }
  }
  if (!bVar1) {
    if (piStack_38 != (int *)0x0) {
      (**(int (***)())(*piStack_38 + 8))(piStack_38,uStack_34);
    }
  }
  if ((piStack_30 != (int *)0x0) &&
     (uVar3 = (**(int (***)())(*piStack_30 + 0x10))(piStack_30,uStack_2c), piStack_30 != (int *)0x0)) {
    (**(int (***)())(*piStack_30 + 8))(piStack_30,uStack_2c);
  }
  return uVar3;
}

