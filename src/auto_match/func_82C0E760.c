#define true 1
extern int fn_82647538();
extern int fn_82647578();
extern int fn_82A1E2C0();


int fn_82C0E760(int *param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int uVar3;
  
  param_1[0x37] = param_2;
  uVar1 = (*(int (**)())(*param_1 + 0xa0))(param_1);
  iVar2 = (int)uVar1;
  while( true ) {
    if (iVar2 < 0) {
      return uVar1;
    }
    fn_82647578(param_1[0xc]);
    (*(int (**)())(*param_1 + 0xc))(param_1);
    (*(int (**)())(*param_1 + 0x108))(param_1,2);
    (*(int (**)())(*param_1 + 0x10c))(param_1,2);
    fn_82A1E2C0(param_1[0x42]);
    fn_82A1E2C0(param_1[0x43]);
    fn_82A1E2C0(param_1[0x45]);
    (*(int (**)())(*param_1 + 0x14))(param_1);
    (*(int (**)())(*param_1 + 0xb4))(param_1);
    (*(int (**)())(*param_1 + 0xb8))(param_1);
    (*(int (**)())(*param_1 + 0xbc))(param_1);
    (*(int (**)())(*param_1 + 0xc0))(param_1);
    fn_82647538(param_1[0xc]);
    (*(int (**)())(*param_1 + 0xc))(param_1);
    uVar3 = (*(int (**)())(*param_1 + 0xfc))(param_1);
    if ((((uVar3 & 2) == 0) || (uVar3 = (*(int (**)())(*param_1 + 0x100))(param_1), (uVar3 & 2) != 0))
       || (uVar3 = (*(int (**)())(*param_1 + 0x104))(param_1), (uVar3 & 2) != 0)) break;
    (*(int (**)())(*param_1 + 0x14))(param_1);
    uVar1 = (*(int (**)())(*param_1 + 0xa0))(param_1);
    iVar2 = (int)uVar1;
  }
  (*(int (**)())(*param_1 + 0x14))(param_1);
  return uVar1;
}

