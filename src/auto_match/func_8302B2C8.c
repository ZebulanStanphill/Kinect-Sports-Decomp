extern int fn_82FA5060();
extern int fn_8302ADA8();
extern int fn_8302B4C8();
extern unsigned int lbl_831BC768;


int * fn_8302B2C8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = fn_82FA5060(lbl_831BC768,0x30);
  if ((uVar1 & 0xffffffff) != 0) {
    piVar2 = (int *)fn_8302ADA8(uVar1,param_1,param_2,param_3);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar3 = fn_8302B4C8();
    if (iVar3 == 1) {
      return piVar2;
    }
    (**(int (***)())(*piVar2 + 8))(piVar2);
  }
  return (int *)0x0;
}

