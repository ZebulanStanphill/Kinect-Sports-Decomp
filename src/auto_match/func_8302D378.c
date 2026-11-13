extern int fn_82FA5060();
extern int fn_8302CCB0();
extern int fn_8302D240();
extern unsigned int lbl_831BC768;


int * fn_8302D378(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = fn_82FA5060(lbl_831BC768,0x124);
  if ((uVar1 & 0xffffffff) != 0) {
    piVar2 = (int *)fn_8302D240(uVar1,param_1,param_2);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar3 = fn_8302CCB0();
    if (iVar3 == 1) {
      return piVar2;
    }
    (**(int (***)())(*piVar2 + 8))(piVar2);
  }
  return (int *)0x0;
}

