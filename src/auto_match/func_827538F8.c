extern unsigned int *auStack_20;
extern int fn_82752CD8();
extern int fn_827537C8();


unsigned __int64 fn_827538F8(int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned char auStack_20 [8];
  
  if (*param_1 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar2 = fn_82752CD8(auStack_20,param_2);
    uVar1 = fn_827537C8(param_1,param_2,uVar2 & *(unsigned int *)(*param_1 + 4));
  }
  return uVar1;
}

