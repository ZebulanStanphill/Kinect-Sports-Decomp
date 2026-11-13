typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_100;
extern unsigned int *auStack_94;
extern unsigned int *auStack_e4;
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D7D9D8();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D85148();
extern int fn_82D8A4F0();
extern int fn_82D8EC40();
extern int fn_82D8F080();
extern int fn_82D8F4C8();
extern int fn_82D8F620();
extern int fn_82D8F6B0();
extern int fn_82D901D0();
extern int fn_82D909F0();
extern int fn_82D914D8();
extern int fn_82D916B8();
extern int fn_82DA4850();
extern int fn_82DAEEF8();
extern int fn_82DBC148();
extern int fn_83081390();
extern int fn_83089DD8();
extern int fn_83089E78();
extern unsigned int iStack00000014;
extern unsigned int iStack_124;
extern unsigned int iStack_128;
extern unsigned int iStack_ec;
extern unsigned int stack0x00000014;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_120;
extern unsigned int uStack_12f;
extern unsigned int uStack_130;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_e8;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82D929B0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  unsigned int uVar2;
  bool bVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  __int64 lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iStack00000014;
  unsigned char uStack_130;
  unsigned char uStack_12f;
  struct { int first; int second; } stack_pair_128;

  unsigned int uStack_120;
  unsigned int uStack_110;
  unsigned char *puStack_10c;
  unsigned int uStack_108;
  unsigned int uStack_104;
  unsigned char auStack_100 [16];
  unsigned char *puStack_f0;
  int iStack_ec;
  unsigned int uStack_e8;
  unsigned char auStack_e4 [68];
  unsigned char *puStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned char auStack_94 [84];
  
  bVar1 = *(unsigned char *)(param_1 + 0xe8);
  uVar7 = (unsigned int)param_2;
  if (bVar1 != uVar7) {
    iStack00000014 = param_1;
    if (bVar1 == 5) {
      fn_83089DD8(param_1 + 0x10);
      fn_82D8A4F0(iStack00000014);
    }
    if ((uVar7 == 5) || (bVar4 = true, uVar7 == 4)) {
      bVar4 = false;
    }
    if ((bVar1 == 5) || (bVar3 = true, bVar1 == 4)) {
      bVar3 = false;
    }
    if (((!bVar4) || (bVar3)) || (*(int *)(iStack00000014 + 0x1f8) != 0)) {
      fn_82CE4040();
      iVar6 = *(int *)(iStack00000014 + 8);
      if ((iVar6 == 0) || ((unsigned int)LZCOUNT(bVar1 - 5) >> 5 == (unsigned int)LZCOUNT(uVar7 - 5) >> 5)) {
        fn_82D8F080(iStack00000014,param_2,bVar4,uStack_12f,iVar6);
        if (iVar6 != 0) {
          fn_82D85148(iVar6,iStack00000014,param_4,1);
        }
        fn_82CE4118(iStack00000014);
      }
      else {
        iStack_ec = 0;
        uStack_9c = 0;
        puStack_f0 = auStack_e4;
        uStack_108 = 0;
        puStack_a0 = auStack_94;
        puStack_10c = auStack_100;
        uStack_e8 = 0x80000010;
        uStack_98 = 0x80000010;
        uStack_104 = 0x80000001;
        uStack_110 = 0x200;
        *(unsigned char *)(iVar6 + 0x9c) = 1;
        *(unsigned char *)(iVar6 + 0x9d) = 0;
        fn_82D901D0(iStack00000014,&puStack_f0);
        if (uVar7 == 5) {
          fn_82D914D8(iVar6,iStack00000014,&puStack_a0);
        }
        else {
          fn_82D8F6B0();
        }
        fn_82D8EC40((unsigned __int64)*(unsigned int *)(iStack00000014 + 0xcc) + 0x58,iStack00000014,&uStack_110,
                      param_2);
        if ((bVar1 != 5) && (iVar10 = *(int *)(iStack00000014 + 0xcc), 2 < *(int *)(iVar10 + 0x4c)))
        {
          *(unsigned char *)(iVar10 + 0x25) = *(unsigned char *)(iVar10 + 0x25) & 0x3f | 0x40;
        }
        fn_82D8F620(iVar6,iStack00000014);
        fn_82D8F080(iStack00000014,param_2,bVar4,uStack_130,iVar6);
        fn_82D8F4C8(iVar6,iStack00000014,param_3);
        fn_82D916B8(iVar6,iStack00000014,&puStack_a0);
        *(unsigned char *)(iVar6 + 0x9d) = 1;
        iVar10 = 0;
        stack_pair_128.first = 0;
        stack_pair_128.second = 0;
        uStack_120 = 0x80000000;
        if (0 < iStack_ec) {
          iVar11 = 0;
          do {
            uVar2 = *(unsigned int *)(puStack_f0 + iVar11);
            *(int *)(iVar6 + 0x94) = *(int *)(iVar6 + 0x94) + 1;
            fn_82DBC148(iVar6,uVar2);
            lVar8 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x94) - 1;
            *(int *)(iVar6 + 0x94) = (int)lVar8;
            if ((lVar8 == 0) && (*(char *)(iVar6 + 0x9c) == '\0')) {
              if (*(int *)(iVar6 + 0x8c) != 0) {
                fn_82D80C18(iVar6);
              }
              if ((*(int *)(iVar6 + 0xa4) == 1) && (*(int *)(iVar6 + 0x90) != 0)) {
                fn_82D80C30(iVar6);
              }
            }
            fn_82CE4118(uVar2);
            iVar10 = iVar10 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar10 < iStack_ec);
        }
        iVar10 = iStack00000014;
        if (uVar7 != 5) {
          fn_83089E78(iStack00000014 + 0x10,&stack_pair_128.first);
          iVar11 = 0;
          iVar10 = iStack00000014;
          if (0 < stack_pair_128.second) {
            iVar12 = 0;
            iVar9 = stack_pair_128.first;
            do {
              iVar9 = (int)*(char *)(*(int *)(iVar9 + 4) + 0x10) + *(int *)(iVar9 + 4);
              if (((*(char *)(iVar10 + 0xe8) != '\x05') && (*(char *)(iVar9 + 0xe8) != '\x05')) &&
                 (*(int *)(iVar10 + 0xcc) != *(int *)(iVar9 + 0xcc))) {
                fn_82D909F0(*(unsigned int *)(iVar10 + 8));
                iVar10 = iStack00000014;
              }
              iVar11 = iVar11 + 1;
              iVar12 = iVar12 + 8;
              iVar9 = stack_pair_128.first + iVar12;
            } while (iVar11 < stack_pair_128.second);
          }
        }
        uVar5 = fn_82D7D9D8((unsigned __int64)*(unsigned int *)(iVar10 + 0xcc) + 0x58,&uStack_110);
        if (uVar7 == 5) {
          fn_83081390((double)*(float *)(iVar6 + 0x1d0),uVar5,iStack00000014 + 0xf0);
          *(int *)(iVar6 + 0x94) = *(int *)(iVar6 + 0x94) + 1;
          (**(int (***)())(**(int **)(iVar6 + 8) + 0x20))
                    (*(int **)(iVar6 + 8),&stack0x00000014,1,iVar6,7);
          fn_82DA4850(&stack0x00000014,1,iVar6);
          fn_82DAEEF8(*(unsigned int *)(iStack00000014 + 8));
          *(int *)(iVar6 + 0x94) = *(int *)(iVar6 + 0x94) + -1;
        }
        fn_82D85148(iVar6,iStack00000014,param_4,1);
        *(unsigned char *)(iVar6 + 0x9c) = 0;
        if (*(int *)(iVar6 + 0x94) == 0) {
          if (*(int *)(iVar6 + 0x8c) != 0) {
            fn_82D80C18(iVar6);
          }
          if ((*(int *)(iVar6 + 0xa4) == 1) && (*(int *)(iVar6 + 0x90) != 0)) {
            fn_82D80C30(iVar6);
          }
        }
        iVar6 = fn_82CE5410();
        stack_pair_128.second = 0;
        if ((uStack_120 & 0x80000000) == 0) {
          (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                    (*(int **)(iVar6 + 0x10),stack_pair_128.first,uStack_120 & 0x3fffffff,8);
        }
        stack_pair_128.first = 0;
        uStack_120 = 0x80000000;
        iVar6 = fn_82CE5410();
        uStack_108 = 0;
        if ((uStack_104 & 0x80000000) == 0) {
          (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                    (*(int **)(iVar6 + 0x10),puStack_10c,uStack_104 & 0x3fffffff,4);
        }
        puStack_10c = (unsigned char *)0x0;
        uStack_104 = 0x80000000;
        iVar6 = fn_82CE5410();
        uStack_9c = 0;
        if ((uStack_98 & 0x80000000) == 0) {
          (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                    (*(int **)(iVar6 + 0x10),puStack_a0,uStack_98 & 0x3fffffff,4);
        }
        puStack_a0 = (unsigned char *)0x0;
        uStack_98 = 0x80000000;
        iVar6 = fn_82CE5410();
        iStack_ec = 0;
        if ((uStack_e8 & 0x80000000) == 0) {
          (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                    (*(int **)(iVar6 + 0x10),puStack_f0,uStack_e8 & 0x3fffffff,4);
        }
        puStack_f0 = (unsigned char *)0x0;
        uStack_e8 = 0x80000000;
        fn_82CE4118(iStack00000014);
      }
    }
  }
  return;
}

