extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822A9580();
extern int fn_82526AF8();
extern int fn_8265C9E0();
extern unsigned int lbl_821AE598;
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A3C;


unsigned int * fn_822A9460(unsigned int *param_1,int param_2,__int64 param_3)

{
  unsigned int *puVar2;
  __int64 lVar1;
  char cVar3;
  
  puVar2 = (unsigned int *)fn_8265C9E0(0xb0);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821AE598;
    puVar2[2] = 1;
  }
  fn_822A9580(puVar2 + 3,param_3 + 4);
  lVar1 = fn_82526AF8((unsigned __int64)lbl_83265A38 - 1,(unsigned __int64)lbl_83265A3C + 4,param_3 + 0xa0);
  puVar2[0x2b] = -(unsigned int)(lVar1 != -1) & (int)lVar1 + 1U;
  if (*(int *)(param_2 + 0x3c) == 0) {
    lVar1 = fn_82526AF8((unsigned __int64)lbl_83265A38 - 1,(unsigned __int64)lbl_83265A3C + 4,param_3 + 0xe0
                             );
    *(unsigned int *)(param_2 + 0x3c) = -(unsigned int)(lVar1 != -1) & (int)lVar1 + 1U;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (puVar2 != (unsigned int *)0x0) {
    cVar3 = fn_8223AAC0(puVar2);
    if (cVar3 != '\0') {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = puVar2;
      *param_1 = puVar2 + 3;
    }
    fn_822315A0(puVar2);
  }
  return param_1;
}

