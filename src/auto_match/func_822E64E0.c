extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B91F8();
extern int fn_822B9390();
extern int fn_8234C258();
extern int fn_8234C320();
extern int fn_823ABE98();
extern int fn_8265C9E0();


unsigned int * fn_822E64E0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  char cVar3;
  unsigned char auStack_60 [96];
  
  cVar3 = (param_4 == 0) + ' ';
  uVar1 = fn_8265C9E0(0x80);
  if ((uVar1 & 0xffffffff) == 0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2 = (unsigned int *)
             fn_823ABE98(param_1,uVar1,param_2 + 0x1b8,
                               *(unsigned int *)(*(int *)(param_2 + 0x1bc) + 0x174));
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    fn_822B91F8(*(unsigned int *)(param_2 + 0x11c),*(unsigned int *)(param_2 + 0x14),*puVar2,cVar3);
    if (*(int *)(param_2 + 0x24) != 0) {
      fn_82230110(auStack_60,0xffffffff821adefc);
      fn_8234C258((unsigned __int64)*(unsigned int *)(param_2 + 0x118) + 0x150,(unsigned int)(param_4 == 0),auStack_60)
      ;
      fn_82230300(auStack_60,1,0);
      if (*(int *)(((param_4 == 0) + 0xe) * 0x2c + *(int *)(param_2 + 0x118) + 0x18) != 1) {
        fn_8234C320(1);
      }
    }
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  fn_822B9390(*(unsigned int *)(param_2 + 0x11c),*puVar2,cVar3);
}

