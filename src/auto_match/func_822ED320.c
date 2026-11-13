extern unsigned int *auStack_60;
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_822ED920();
extern int fn_822EF458();
extern int fn_82F63658();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000028;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


unsigned __int64 *
fn_822ED320(unsigned __int64 *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             int param_5,unsigned int *param_6,unsigned __int64 *param_7)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  char cVar4;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  int iStack_70;
  int iStack_6c;
  unsigned char *apuStack_68 [2];
  unsigned char auStack_60 [96];
  
  iStack_70 = 0;
  iVar1 = **(int **)(param_5 + 0x30);
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  iStack_6c = iVar1;
  fn_8223F508(iVar1);
  uVar2 = fn_822ED920(param_2,auStack_60,&stack0x00000020,&stack0x00000028,
                          *(unsigned int *)(param_5 + 0x14),&iStack_6c);
  uVar2 = fn_82F63658(auStack_60,apuStack_68,uVar2,&iStack_70);
  if (iVar1 != 0) {
    puVar3 = (unsigned int *)fn_8223F5A0(iVar1);
    if (puVar3 != (unsigned int *)0x0) {
      (**(int (***)())*puVar3)(puVar3,1);
    }
  }
  cVar4 = fn_822EF458(&stack0x00000020,&stack0x00000028);
  if (cVar4 != '\0') {
    *param_6 = *param_6 | 1;
  }
  if ((apuStack_68[0] == auStack_60) || (iStack_70 != 0)) {
    *param_6 = *param_6 | 2;
  }
  else {
    *param_7 = uVar2;
  }
  *param_1 = uStack00000020;
  return param_1;
}

