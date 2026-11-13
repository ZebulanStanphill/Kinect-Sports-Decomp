extern int fn_8223C478();
extern int fn_82517978();
extern int fn_828BBA90();
extern int fn_828C27D8();
extern int fn_828E9DB8();
extern unsigned int lbl_83295F34;
extern unsigned int lbl_83295F38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82516A50(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  
  uVar3 = lbl_83295F34;
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 8);
  fn_8223C478(param_3,lbl_83295F34,0);
  fn_828E9DB8(param_3,iVar1 - iVar2 >> 4,uVar3);
  for (puVar4 = *(unsigned int **)(param_1 + 8); uVar3 = lbl_83295F38, puVar4 != *(unsigned int **)(param_1 + 0xc);
      puVar4 = puVar4 + 4) {
    fn_828C27D8(param_2,(unsigned __int64)*puVar4 + 0xc,(unsigned __int64)puVar4[2] + 8,param_3);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x18);
  fn_8223C478(param_3,lbl_83295F38,0);
  fn_828E9DB8(param_3,iVar1 - iVar2 >> 4,uVar3);
  puVar4 = *(unsigned int **)(param_1 + 0x18);
  if (puVar4 != *(unsigned int **)(param_1 + 0x1c)) {
    do {
      stack_pair_40.first = 0;
      stack_pair_40.second = 0;
      fn_82517978(&stack_pair_40.first,puVar4[2],puVar4[3],0);
      fn_828BBA90(param_2,(unsigned __int64)*puVar4 + 0xc,&stack_pair_40.first,param_3);
      puVar4 = puVar4 + 4;
    } while (puVar4 != *(unsigned int **)(param_1 + 0x1c));
  }
  return;
}

