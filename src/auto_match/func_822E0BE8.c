extern unsigned int *auStack_68;
extern int fn_822315A0();
extern int fn_822CF260();
extern int fn_822E0E38();
extern int fn_82365BD8();
extern int fn_824D6498();


unsigned __int64 fn_822E0BE8(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int in_r9;
  unsigned char auStack_68 [104];
  
  iVar1 = *(int *)(param_1 + 0x14);
  uVar2 = *(unsigned int *)(iVar1 + 0x24);
  if ((in_r9 == 0) && (*(int *)(iVar1 + 0x340) == 0)) {
    fn_822CF260(iVar1,0);
  }
  fn_82365BD8(auStack_68,param_2);
  fn_822E0E38();
  uVar3 = fn_824D6498(uVar2,param_3);
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0(*(int *)(param_2 + 4));
  }
  return uVar3;
}

