extern int fn_82BC0088();
extern int fn_82BC08A0();
extern int fn_82BC5E78();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_82BC6160(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  char cVar3;
  unsigned int *puVar2;
  unsigned int uStack0000001c;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  uStack0000001c = (int)param_2;
  cVar3 = fn_82BC5E78(iVar1,&stack0x0000001c);
  if (cVar3 == '\0') {
    puVar2 = (unsigned int *)fn_82BC0088(iVar1,*(unsigned int *)(iVar1 + 4));
    *puVar2 = (int)param_2;
  }
  fn_82BC08A0(param_2,*(unsigned int *)(param_1 + 0x30),param_3);
  return;
}

