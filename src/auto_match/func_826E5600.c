extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826E4B08();
extern int fn_826E4CA8();
extern int fn_826E4D70();


unsigned __int64 fn_826E5600(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  if (param_2 == (int *)0x0) {
LAB_826e5640:
    if ((param_3 & 0xffffffff) != 0) {
      fn_826E4CA8(param_3 + 0xc,0xffffffff8200d5d8,param_1);
    }
    uVar1 = fn_826E4B08();
    if (uVar1 != 0) goto LAB_826e5668;
  }
  else {
    uVar1 = (**(int (***)())(*param_2 + 4))(param_2,param_1);
    if (uVar1 == 0) goto LAB_826e5640;
LAB_826e5668:
    uVar2 = fn_8267B890(param_4,0x1c,0);
    if ((uVar2 & 0xffffffff) != 0) {
      uVar3 = fn_826E4D70(uVar2,uVar1,1);
      goto LAB_826e5698;
    }
  }
  uVar3 = 0;
LAB_826e5698:
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8267C498(uVar1);
  }
  return uVar3;
}

