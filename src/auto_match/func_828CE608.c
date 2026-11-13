extern int fn_823AA970();
extern int fn_8288E0C8();
extern int fn_8289F2E0();
extern int fn_828CE460();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_828CE608(int param_1,int param_2)

{
  int iVar1;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  iVar1 = fn_8289F2E0(*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_2 + 0x18));
  if (iVar1 != 0) {
    uStack_20 = fn_823AA970();
    fn_8288E0C8(&uStack_1c,param_1,&uStack_20);
    if ((unsigned __int64)uStack_1c != (unsigned __int64)*(unsigned int *)(param_1 + 4)) {
      fn_828CE460((unsigned __int64)uStack_1c + 0x10,param_2);
    }
  }
  return;
}

