extern unsigned int *auStack_50;
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_822ED920();
extern int fn_822EF458();
extern int fn_82F632D8();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000028;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


unsigned __int64 *
fn_822ED7D0(unsigned __int64 *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             int param_5,unsigned int *param_6,unsigned int *param_7)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  char cVar5;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  int iStack_60;
  int iStack_5c;
  unsigned char *apuStack_58 [2];
  unsigned char auStack_50 [80];
  
  iStack_60 = 0;
  iVar1 = **(int **)(param_5 + 0x30);
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  iStack_5c = iVar1;
  fn_8223F508(iVar1);
  uVar2 = fn_822ED920(param_2,auStack_50,&stack0x00000020,&stack0x00000028,0x800,&iStack_5c);
  if (iVar1 != 0) {
    puVar3 = (unsigned int *)fn_8223F5A0(iVar1);
    if (puVar3 != (unsigned int *)0x0) {
      (**(int (***)())*puVar3)(puVar3,1);
    }
  }
  uVar4 = fn_82F632D8(auStack_50,apuStack_58,uVar2,&iStack_60);
  cVar5 = fn_822EF458(&stack0x00000020,&stack0x00000028);
  if (cVar5 != '\0') {
    *param_6 = *param_6 | 1;
  }
  if ((apuStack_58[0] == auStack_50) || (iStack_60 != 0)) {
    *param_6 = *param_6 | 2;
  }
  else {
    *param_7 = uVar4;
  }
  *param_1 = uStack00000020;
  return param_1;
}

