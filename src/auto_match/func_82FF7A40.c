extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FB60A0();
extern int fn_82FF78F8();
extern int fn_83013B98();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC768;


unsigned __int64 fn_82FF7A40(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int *puVar6;
  
  for (puVar6 = *(unsigned int **)(param_1 + 4);
      (puVar6 != *(unsigned int **)(param_1 + 8) && ((unsigned __int64)*puVar6 != (param_2 & 0xffffffff)));
      puVar6 = puVar6 + 2) {
  }
  uVar1 = (unsigned int)(*(unsigned int **)(param_1 + 8) != puVar6);
  if ((-(unsigned int)(uVar1 != 0) & (unsigned int)(puVar6 + 1)) == 0) {
    puVar4 = (unsigned int *)fn_82FA5060(lbl_831BC768,0x48,param_3,-uVar1);
    if (puVar4 == (unsigned int *)0x0) {
      uVar3 = 2;
    }
    else {
      puVar4[1] = 0;
      *puVar4 = &lbl_8217D040;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xe] = 0xffffffff;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      uVar3 = fn_82FB60A0(puVar4 + 7,0xc,0xffffffffffffffff,lbl_831BC768);
      if ((int)uVar3 == 1) {
        iVar5 = fn_83013B98(param_1 + 4,param_2,puVar4);
        if (iVar5 != 0) {
          return uVar3;
        }
        uVar3 = 2;
      }
      fn_82FF78F8(puVar4);
      uVar2 = lbl_831BC768;
      (**(int (***)())*puVar4)(puVar4,0);
      fn_82FA5190(uVar2,puVar4);
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

