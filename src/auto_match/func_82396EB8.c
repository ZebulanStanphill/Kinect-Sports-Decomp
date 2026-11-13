extern int fn_8223AAC0();
extern int fn_822E4330();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_82396EB8(int param_1,unsigned __int64 param_2)

{
  unsigned int iVar1;
  unsigned int uVar2;
  unsigned char cVar3;
  struct { unsigned int first; int second; } stack_pair_30;

  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = *(unsigned int *)(param_1 + 8);
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
    stack_pair_30.second = iVar1;
    stack_pair_30.first = uVar2;
  }
  fn_822E4330(param_2,*(unsigned int *)(param_1 + 4),&stack_pair_30.first,param_1 + 0x10,param_1 + 0x14,
                    *(unsigned int *)(param_1 + 0x18));
  return 1;
}

