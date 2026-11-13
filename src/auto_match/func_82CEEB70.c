extern unsigned int *auStack_40;
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CFBBF0();
extern int fn_82CFFC68();
extern int fn_82CFFD88();
extern int fn_82CFFD98();


unsigned __int64 fn_82CEEB70(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned char auStack_40 [16];
  
  iVar1 = fn_82CEAF18(param_2);
  lVar5 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = (unsigned int *)fn_82CEAF20(param_2,lVar5);
      iVar3 = fn_82CFBBF0(*puVar2,0xffffffff820d2ac0);
      if (iVar3 == 0) {
        fn_82CFFC68(auStack_40,param_1,puVar2);
        if (*(char *)(puVar2 + 3) == '\x1d') {
          puVar4 = (unsigned int *)fn_82CFFD88(auStack_40,0);
          if ((unsigned __int64)*puVar4 != 0) {
            return (unsigned __int64)*puVar4;
          }
          return 0xffffffff82132fbc;
        }
        if (*(char *)(puVar2 + 3) == '!') {
          puVar4 = (unsigned int *)fn_82CFFD98(auStack_40,0);
          if ((*puVar4 & 0xfffffffe) != 0) {
            return (unsigned __int64)*puVar4 & 0xfffffffe;
          }
          return 0xffffffff82132fbc;
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar1);
  }
  return 0;
}

