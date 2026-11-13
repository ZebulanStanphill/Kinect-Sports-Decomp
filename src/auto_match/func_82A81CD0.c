extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern __int64 fn_828E0268();
extern int fn_82A83B90();


unsigned char fn_82A81CD0(unsigned int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char uVar3;
  unsigned char auStack_20 [4];
  unsigned char auStack_1c [4];
  
  if (((param_1 & 0xffffffff) == 0) || (param_2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar1 = fn_828E0268(auStack_20);
    uVar2 = fn_828E0268(auStack_1c,param_1);
    uVar3 = fn_82A83B90(uVar2,uVar1);
  }
  return uVar3;
}

