extern int fn_8223C478();
extern int fn_828D9DC8();
extern int fn_828E9DB8();


void fn_828DA068(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x80);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,uVar1,1);
  if (*(int *)(param_1 + 0x80) == 1) {
    uVar1 = *(unsigned int *)(param_1 + 0x94);
    fn_8223C478(param_2,7,0);
    fn_828E9DB8(param_2,uVar1,7);
    uVar2 = *(unsigned int *)(param_1 + 0x84);
    if (uVar2 != *(unsigned int *)(param_1 + 0x88)) {
      do {
        fn_8223C478(param_2,1,0);
        fn_828E9DB8(param_2,1,1);
        fn_828D9DC8(uVar2,param_2);
        uVar2 = uVar2 + 0xc;
      } while (uVar2 != *(unsigned int *)(param_1 + 0x88));
    }
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,0,1);
  }
  return;
}

