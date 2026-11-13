extern unsigned int *auStack_60;
extern int fn_8223C478();
extern int fn_828ABF58();
extern int fn_828E9DB8();
extern unsigned int lbl_821B8C0C;
extern unsigned int uStack_4c;


/* WARNING: Removing unreachable block (ram,0x82429e54) */

void fn_82429D88(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int auStack_60 [4];
  unsigned char **ppuStack_50;
  unsigned int uStack_4c;
  int aiStack_48 [10];
  
  uVar2 = 0;
  uStack_4c = 0;
  ppuStack_50 = &lbl_821B8C0C;
  fn_828ABF58(aiStack_48,0,0,3);
  auStack_60[0] = *(unsigned int *)(param_3 + 8);
  (**(int (***)())(aiStack_48[0] + 0x10))(aiStack_48,param_2,auStack_60);
  do {
    uVar1 = *(unsigned int *)(((uVar2 >> 5) + 3) * 4 + param_3);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,(1 << (uVar2 & 0x1f) & uVar1) != 0,1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  return;
}

