extern int fn_8223C478();
extern int fn_82897E60();
extern int fn_828E9DB8();


void fn_828CC800(int param_1,unsigned __int64 param_2)

{
  unsigned char uVar1;
  
  fn_82897E60(*(unsigned int *)(param_1 + 0x80),*(unsigned int *)(param_1 + 0x6c),param_2,
                    param_1 + 0x98);
  uVar1 = *(unsigned char *)(param_1 + 0xac);
  fn_8223C478(param_2,8,0);
  fn_828E9DB8(param_2,uVar1,8);
  (*(int (**)())(**(int **)(param_1 + 0x80) + 4))
            (*(int **)(param_1 + 0x80),*(unsigned int *)(param_1 + 0x6c),param_2,param_1 + 0x88);
  return;
}

