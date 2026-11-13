extern unsigned int *auStack_20;
extern int fn_8223C680();


void fn_82259D18(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned char auStack_20 [16];
  
  (*(int (**)())(**(int **)(param_1 + 0x58) + 0x14))(*(int **)(param_1 + 0x58),param_3,auStack_20);
  if (param_4 != 0) {
    *(unsigned int *)(param_4 + 4) = 7;
    *(unsigned int *)(param_4 + 0xc) = 4;
    *(unsigned int *)(param_4 + 8) = 0;
    fn_8223C680(param_4,0,auStack_20);
  }
  return;
}

