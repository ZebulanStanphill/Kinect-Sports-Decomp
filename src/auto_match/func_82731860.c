typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_480;
extern unsigned int *auStack_888;
extern unsigned int *auStack_8d0;
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_8268B8E8();
extern int fn_8268F7C0();
extern int fn_8269F500();
extern int fn_826BD6B0();
extern int fn_826BD758();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82722C50();
extern int fn_82726458();
extern int fn_827266E8();
extern int fn_82728090();
extern int fn_82729B90();
extern int fn_827314A0();
extern int fn_8276A220();
extern int fn_82773930();
extern int fn_82773958();
extern int fn_82773A88();
extern int fn_8278B290();
extern int fn_827912D8();
extern int fn_82791420();
extern int fn_82793908();
extern int fn_82794DC0();
extern int fn_82799D18();
extern int fn_82799D60();
extern int fn_82799EB8();
extern int fn_82799F60();
extern int fn_827A3A50();
extern unsigned int iStack_93c;
extern unsigned int iStack_94c;
extern unsigned int lbl_82010C6C;
extern unsigned int lbl_82196582;
extern unsigned int uStack_484;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_88c;
extern unsigned int uStack_8d4;
extern unsigned int uStack_8d8;
extern unsigned int uStack_8da;
extern unsigned int uStack_8dc;
extern unsigned int uStack_8de;
extern unsigned int uStack_8e0;
extern unsigned int uStack_8e2;
extern unsigned int uStack_8e4;
extern unsigned int uStack_8e8;
extern unsigned int uStack_8ec;
extern unsigned int uStack_8fa;
extern unsigned int uStack_8fc;
extern unsigned int uStack_8fe;
extern unsigned int uStack_900;
extern unsigned int uStack_902;
extern unsigned int uStack_904;
extern unsigned int uStack_908;
extern unsigned int uStack_90c;
extern unsigned int uStack_91a;
extern unsigned int uStack_91c;
extern unsigned int uStack_91e;
extern unsigned int uStack_920;
extern unsigned int uStack_922;
extern unsigned int uStack_924;
extern unsigned int uStack_928;
extern unsigned int uStack_92c;
extern unsigned int uStack_934;
extern unsigned int uStack_938;
extern unsigned int uStack_940;
extern unsigned int uStack_944;
extern unsigned int uStack_948;
extern unsigned int uStack_950;


void fn_82731860(int *param_1,unsigned __int64 param_2,char param_3,char param_4)

{
  unsigned int *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar7;
  int *piVar8;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned char bVar12;
  struct { unsigned int first; int second; } stack_pair_950;

  unsigned int uStack_948;
  unsigned int uStack_944;
  struct { unsigned int first; int second; } stack_pair_940;

  unsigned int uStack_938;
  unsigned int uStack_934;
  unsigned char **ppuStack_930;
  unsigned int uStack_92c;
  unsigned int uStack_928;
  unsigned short uStack_924;
  unsigned short uStack_922;
  unsigned short uStack_920;
  unsigned short uStack_91e;
  unsigned short uStack_91c;
  unsigned short uStack_91a;
  unsigned char **ppuStack_910;
  unsigned int uStack_90c;
  unsigned int uStack_908;
  unsigned short uStack_904;
  unsigned short uStack_902;
  unsigned short uStack_900;
  unsigned short uStack_8fe;
  unsigned short uStack_8fc;
  unsigned short uStack_8fa;
  unsigned char **ppuStack_8f0;
  unsigned int uStack_8ec;
  unsigned int uStack_8e8;
  unsigned short uStack_8e4;
  unsigned short uStack_8e2;
  unsigned short uStack_8e0;
  unsigned short uStack_8de;
  unsigned short uStack_8dc;
  unsigned short uStack_8da;
  unsigned int uStack_8d8;
  unsigned int uStack_8d4;
  unsigned char auStack_8d0 [48];
  unsigned char *puStack_8a0;
  unsigned char **ppuStack_89c;
  unsigned char *puStack_898;
  unsigned char bStack_894;
  unsigned char *puStack_890;
  unsigned int uStack_88c;
  unsigned char auStack_888 [1024];
  unsigned char *puStack_488;
  unsigned int uStack_484;
  unsigned char auStack_480 [1024];
  unsigned char *puStack_80;
  unsigned int uStack_7c;
  unsigned char *puStack_78;
  unsigned int uStack_74;
  unsigned char *puStack_70;
  unsigned int uStack_6c;
  unsigned char *puStack_68;
  unsigned int uStack_64;

  bVar4 = false;
  if (((int *)param_1[0x34] == (int *)0x0) || (bVar2 = true, *(int *)param_1[0x34] == 0)) {
    bVar2 = false;
  }
  if (bVar2) {
    param_3 = '\x01';
  }
  fn_8268B8E8(param_1 + 0x33);
  if (param_3 == '\0') {
    uVar10 = (unsigned __int64)*(unsigned short *)(param_1 + 0x32) & 0xefff;
  }
  else {
    uVar10 = (unsigned __int64)*(unsigned short *)(param_1 + 0x32) | 0x1000;
  }
  *(short *)(param_1 + 0x32) = (short)uVar10;
  bVar2 = false;
  bVar12 = 0;
  lVar11 = ((unsigned __int64)(unsigned int)param_1[0x33] & 0xfffffffc) + 8;
  if ((uVar10 >> 3 & 1) == 0) {
    iVar7 = (**(int (***)())(*param_1 + 0x40))(param_1);
    piVar8 = (int *)(**(int (***)())(*(int *)(iVar7 + 8) + 0xc))((int *)(iVar7 + 8),3);
    if (piVar8 != (int *)0x0) {
      if (((unsigned int)param_1[0x23] >> 0xe & 1) == 0) {
        iVar7 = param_1[0x20];
        if (iVar7 == 0) {
          iVar7 = fn_8269F500(param_1);
        }
        if (iVar7 == 0) {
          iVar7 = (**(int (***)())(*param_1 + 0x58))(param_1);
          iVar7 = *(int *)(iVar7 + 0x78);
        }
        puStack_898 = (unsigned char *)**(unsigned int **)(iVar7 + 8);
      }
      else {
        puStack_898 = &lbl_82196582;
      }
      puStack_890 = auStack_888;
      puStack_488 = auStack_480;
      puStack_8a0 = (unsigned char *)0x0;
      puStack_80 = auStack_888;
      puStack_78 = auStack_888;
      bStack_894 = 0;
      puStack_70 = auStack_480;
      uStack_88c = 0x200;
      puStack_68 = auStack_480;
      uStack_484 = 0x200;
      ppuStack_89c = &puStack_80;
      uStack_7c = 0;
      uStack_74 = 0x200;
      uStack_6c = 0;
      uStack_64 = 0x200;
      if ((param_3 == '\0') || (uVar10 = (**(int (***)())(*piVar8 + 4))(piVar8), (uVar10 & 1) != 0)) {
        lVar9 = fn_826BD758(lVar11,0xffffffffffffffff);
        fn_82773958(&puStack_70,lVar9 + 1);
        fn_826BD6B0(puStack_70,lVar11,0xffffffffffffffff);
        puStack_8a0 = puStack_70;
        if (param_3 != '\0') {
          bStack_894 = bStack_894 | 4;
        }
        (**(int (***)())(*piVar8 + 8))(piVar8,&puStack_8a0);
      }
      else {
        uVar5 = fn_8267BF50(param_1);
        fn_826FDED0(auStack_8d0,uVar5);
        ppuStack_930 = &lbl_82010C6C;
        uStack_92c = 1;
        uStack_928 = 0;
        uStack_924 = 0;
        uStack_922 = 0;
        uStack_920 = 0;
        uStack_91e = 0;
        uStack_91c = 0;
        uStack_91a = 0;
        fn_827266E8(param_1,auStack_8d0,&ppuStack_930);
        puVar1 = (unsigned int *)param_1[0x34];
        if ((puVar1 == (unsigned int *)0x0) || (bVar3 = true, *puVar1 == 0)) {
          bVar3 = false;
        }
        if (bVar3) {
          lVar9 = (unsigned __int64)*puVar1 + 0x30;
        }
        else {
          lVar9 = 0;
        }
        fn_82799EB8(param_1[0x28],lVar11,0xffffffffffffffff,*(unsigned short *)(param_1 + 0x32) >> 4 & 1
                        ,0,lVar9,auStack_8d0,&ppuStack_930);
        fn_82791420(*(unsigned int *)(param_1[0x28] + 8),&puStack_70);
        uVar10 = (**(int (***)())(*piVar8 + 4))(piVar8);
        if (((uVar10 & 0xffffffff) >> 1 & 1) != 0) {
          fn_82773A88(&puStack_70);
        }
        puStack_8a0 = puStack_70;
        (**(int (***)())(*piVar8 + 8))(piVar8,&puStack_8a0);
        ppuStack_930 = &lbl_82010C6C;
        fn_8278B290(&ppuStack_930);
        fn_8267C488(&ppuStack_930);
        fn_826FDF58(auStack_8d0);
      }
      bVar12 = bStack_894 & 1;
      if ((bStack_894 & 1) != 0) {
        if ((bStack_894 & 2) == 0) {
          fn_82793908(*(unsigned int *)(param_1[0x28] + 8),&uStack_8d8,&uStack_8d4,0);
          fn_82794DC0(*(unsigned int *)(param_1[0x28] + 8),uStack_8d8);
          fn_8276A220(*(unsigned int *)(param_1[0x28] + 8),uStack_8d4);
          uVar10 = ZEXT48(puStack_80);
          if (uVar10 == 0) {
            uVar10 = 0xffffffff820e975c;
          }
          fn_82799D60(param_1[0x28],uVar10,0xffffffffffffffff);
        }
        else {
          uVar5 = fn_8267BF50(param_1);
          fn_826FDED0(auStack_8d0,uVar5);
          ppuStack_910 = &lbl_82010C6C;
          uStack_90c = 1;
          uStack_908 = 0;
          uStack_904 = 0;
          uStack_902 = 0;
          uStack_900 = 0;
          uStack_8fe = 0;
          uStack_8fc = 0;
          uStack_8fa = 0;
          fn_827266E8(param_1,auStack_8d0,&ppuStack_910);
          uStack_934 = fn_8267BF50(param_1);
          puVar1 = (unsigned int *)param_1[0x34];
          stack_pair_940.first = 0;
          stack_pair_940.second = 0;
          uStack_938 = 0;
          if ((puVar1 == (unsigned int *)0x0) || (bVar2 = true, *puVar1 == 0)) {
            bVar2 = false;
          }
          if (bVar2) {
            lVar9 = (unsigned __int64)*puVar1 + 0x30;
          }
          else {
            lVar9 = 0;
          }
          uVar10 = ZEXT48(puStack_80);
          if (uVar10 == 0) {
            uVar10 = 0xffffffff820e975c;
          }
          fn_82799F60(param_1[0x28],uVar10,0xffffffffffffffff,
                            *(unsigned short *)(param_1 + 0x32) >> 4 & 1,&stack_pair_940.first,lVar9,auStack_8d0,
                            &ppuStack_910);
          if (stack_pair_940.second != 0) {
            fn_82728090(param_1,&stack_pair_940.first);
          }
          fn_82726458(stack_pair_940.first,stack_pair_940.second);
          fn_8267BE38(stack_pair_940.first);
          ppuStack_910 = &lbl_82010C6C;
          fn_8278B290(&ppuStack_910);
          fn_8267C488(&ppuStack_910);
          fn_826FDF58(auStack_8d0);
        }
        bVar2 = true;
      }
      fn_82773930(&puStack_70);
      fn_82773930(&puStack_80);
      fn_8267C4F0(piVar8);
    }
  }
  if (bVar12 == 0) {
    if (param_3 == '\0') {
      fn_82799D18(param_1[0x28],lVar11,0xffffffffffffffff);
    }
    else {
      uVar5 = fn_8267BF50(param_1);
      fn_826FDED0(auStack_8d0,uVar5);
      ppuStack_8f0 = &lbl_82010C6C;
      uStack_8ec = 1;
      uStack_8e8 = 0;
      uStack_8e4 = 0;
      uStack_8e2 = 0;
      uStack_8e0 = 0;
      uStack_8de = 0;
      uStack_8dc = 0;
      uStack_8da = 0;
      fn_827266E8(param_1,auStack_8d0,&ppuStack_8f0);
      uStack_944 = fn_8267BF50(param_1);
      puVar1 = (unsigned int *)param_1[0x34];
      stack_pair_950.first = 0;
      stack_pair_950.second = 0;
      uStack_948 = 0;
      if ((puVar1 == (unsigned int *)0x0) || (bVar3 = true, *puVar1 == 0)) {
        bVar3 = false;
      }
      if (bVar3) {
        lVar9 = (unsigned __int64)*puVar1 + 0x30;
      }
      else {
        lVar9 = 0;
      }
      fn_82799EB8(param_1[0x28],lVar11,0xffffffffffffffff,*(unsigned short *)(param_1 + 0x32) >> 4 & 1,
                      &stack_pair_950.first,lVar9,auStack_8d0,&ppuStack_8f0);
      if (stack_pair_950.second != 0) {
        fn_82728090(param_1,&stack_pair_950.first);
      }
      fn_82726458(stack_pair_950.first,stack_pair_950.second);
      fn_8267BE38(stack_pair_950.first);
      ppuStack_8f0 = &lbl_82010C6C;
      fn_8278B290(&ppuStack_8f0);
      fn_8267C488(&ppuStack_8f0);
      fn_826FDF58(auStack_8d0);
    }
  }
  iVar7 = *(int *)(param_1[0x28] + 0x114);
  if ((iVar7 != 0) && ((*(unsigned short *)(iVar7 + 0x68) & 1) == 0)) {
    uVar10 = fn_827912D8(*(unsigned int *)(param_1[0x28] + 8));
    uVar6 = fn_8268F7C0(*(unsigned int *)(param_1[0x28] + 0x114));
    if ((uVar10 & 0xffffffff) < (uVar6 & 0xffffffff)) {
      fn_827A3A50(*(unsigned int *)(param_1[0x28] + 0x114),uVar10,0);
    }
  }
  if (((int *)param_1[0x34] != (int *)0x0) && (*(int *)param_1[0x34] != 0)) {
    bVar4 = true;
  }
  if ((bVar4) && ((*(unsigned char *)(*(int *)(param_1[0x28] + 8) + 0x20) & 1) != 0)) {
    fn_827314A0(param_1);
  }
  if (param_4 != '\0') {
    fn_82722C50(param_1);
  }
  if (bVar2) {
    fn_82729B90(param_1);
  }
  (**(int (***)())(*param_1 + 0x13c))(param_1);
  return;
}
