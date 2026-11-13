extern int fn_828ACCE8();
extern int fn_828AD740();
extern int fn_828D2DB8();
extern int fn_828EDEB8();


void fn_828D31C8(int param_1,unsigned __int64 param_2)

{
  unsigned char cVar1;
  
  if (((*(int *)(param_1 + 0xc) == 0) &&
      (cVar1 = fn_828ACCE8(*(unsigned int *)(param_1 + 8)), cVar1 != '\0')) &&
     (cVar1 = fn_828AD740(*(unsigned int *)(param_1 + 8)), cVar1 == '\0')) {
    fn_828EDEB8(*(unsigned int *)(*(int *)(param_1 + 8) + 0x8c),param_2);
    fn_828D2DB8(param_1,1);
  }
  return;
}

