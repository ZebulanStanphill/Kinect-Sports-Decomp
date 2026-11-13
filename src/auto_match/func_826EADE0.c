extern unsigned int *auStack_20;
extern void *fn_8267BED0(int,int,void *);
extern int fn_826EAC58();


int fn_826EADE0(int param_1,int *param_2)

{
  unsigned char cVar3;
  void *uVar1;
  int uVar2;
  unsigned int auStack_20 [2];
  
  if ((param_2 != (int *)0x0) && (cVar3 = (*(unsigned char (**)(int *))(*param_2 + 8))(param_2), cVar3 != '\0')) {
    auStack_20[0] = 2;
    uVar1 = fn_8267BED0(param_1,0x310,auStack_20);
    if (uVar1 != 0) {
      uVar2 = fn_826EAC58(uVar1,0,param_2);
      return uVar2;
    }
  }
  return 0;
}

