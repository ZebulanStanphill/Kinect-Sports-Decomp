#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_58;
extern int fn_82E39C50();
extern int fn_82E4FE40();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


__int64 fn_82E51A98(int *param_1)

{
  int iVar1;
  __int64 lVar2;
  unsigned short *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned short *puStack_60;
  unsigned short *puStack_5c;
  unsigned int auStack_58 [2];
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  
  puStack_5c = (unsigned short *)0x0;
  auStack_58[0] = 0;
  lVar2 = 0;
  iVar1 = (**(int (***)())(*param_1 + 0x40))(param_1,0xffffffff8214c730,&puStack_5c,auStack_58);
  if ((-1 < iVar1) && (auStack_58[0] != 0)) {
    (**(int (***)())(*param_1 + 0xa4))(param_1);
    puStack_60 = puStack_5c;
    for (uVar4 = auStack_58[0]; (uVar4 != 0 && (0x15 < uVar4)); uVar4 = (uVar4 - 0x16) - uVar5) {
      stack_pair_50.first = lbl_8202E618;
      stack_pair_50.second = lbl_8202E61C;
      uStack_48 = lbl_8202E620;
      uStack_44 = lbl_8202E624;
      fn_82E39C50(&stack_pair_50.first,&puStack_60);
      puVar3 = puStack_60 + 3;
      uVar5 = (unsigned int)*(unsigned char *)((int)puStack_60 + 5) << 0x18 | (unsigned int)*(unsigned char *)(puStack_60 + 2) << 0x10
              | (unsigned int)*(unsigned char *)((int)puStack_60 + 3) << 8 | (unsigned int)*(unsigned char *)(puStack_60 + 1);
      uVar5 = -(unsigned int)(uVar5 <= uVar4 - 0x16) & uVar5;
      lVar2 = (**(int (***)())(*param_1 + 0xa0))
                        (param_1,CONCAT44(stack_pair_50.first,stack_pair_50.second),CONCAT44(uStack_48,uStack_44),
                         *puStack_60 << 8 | *puStack_60 >> 8,puVar3,uVar5);
      if (lVar2 < 0) break;
      puStack_60 = (unsigned short *)(uVar5 + (int)puVar3);
    }
  }
  fn_82E4FE40(puStack_5c);
  puStack_5c = (unsigned short *)0x0;
  if ((int)lVar2 < 0) {
    (**(int (***)())(*param_1 + 0xa4))(param_1);
  }
  return lVar2;
}

