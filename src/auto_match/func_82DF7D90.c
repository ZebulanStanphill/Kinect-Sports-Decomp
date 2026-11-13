typedef unsigned char bool;
extern unsigned int *auStack_3120;
extern unsigned int fStack_3144;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_f0;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CFC050();
extern int fn_82D7BF58();
extern int fn_82D8E938();
extern int fn_82D92F30();
extern int fn_82DAD000();
extern int fn_82DAD288();
extern int fn_82DAE118();
extern int fn_82DAEFD0();
extern int fn_82DB0258();
extern int fn_82DC73A8();
extern int fn_82DC74A8();
extern int fn_82DF6E88();
extern int fn_82DF7968();
extern unsigned int iStack_315c;
extern unsigned int iStack_3160;
extern unsigned int iStack_3178;
extern unsigned int iStack_3188;
extern unsigned int iStack_3198;
extern unsigned int iStack_319c;
extern unsigned int iStack_31a4;
extern unsigned int iStack_31a8;
extern unsigned int iStack_31ac;
extern unsigned int iStack_31b0;
extern unsigned int iStack_31c0;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_311c;
extern unsigned int uStack_312e;
extern unsigned int uStack_3130;
extern unsigned int uStack_3138;
extern unsigned int uStack_3140;
extern unsigned int uStack_3148;
extern unsigned int uStack_314c;
extern unsigned int uStack_3150;
extern unsigned int uStack_3158;
extern unsigned int uStack_3170;
extern unsigned int uStack_3174;
extern unsigned int uStack_317c;
extern unsigned int uStack_3180;
extern unsigned int uStack_3182;
extern unsigned int uStack_3183;
extern unsigned int uStack_3184;
extern unsigned int uStack_318c;
extern unsigned int uStack_3190;
extern unsigned int uStack_31a0;
extern unsigned int uStack_31b8;
extern unsigned int uStack_31bc;


unsigned __int64
fn_82DF7D90(int param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,int param_6)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  int *piVar5;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar6;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar12;
  unsigned int *puVar13;
  unsigned __int64 uVar11;
  int iVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  struct { int first; unsigned int second; } stack_pair_31c0;

  unsigned int uStack_31b8;
  struct { int first; int second; } stack_pair_31b0;

  int iStack_31a8;
  int iStack_31a4;
  unsigned int uStack_31a0;
  int iStack_319c;
  int iStack_3198;
  int *piStack_3194;
  unsigned int uStack_3190;
  unsigned int uStack_318c;
  int iStack_3188;
  unsigned char uStack_3184;
  unsigned char uStack_3183;
  unsigned char uStack_3182;
  unsigned int uStack_3180;
  unsigned int uStack_317c;
  int iStack_3178;
  unsigned int uStack_3174;
  unsigned int uStack_3170;
  int iStack_3160;
  int iStack_315c;
  unsigned int uStack_3158;
  unsigned int uStack_3150;
  unsigned int uStack_314c;
  unsigned int uStack_3148;
  float fStack_3144;
  unsigned int uStack_3140;
  int *piStack_313c;
  unsigned int uStack_3138;
  unsigned char *puStack_3134;
  unsigned short uStack_3130;
  unsigned short uStack_312e;
  unsigned char auStack_3120 [4];
  unsigned int uStack_311c;
  float fStack_f0;
  float fStack_d0;
  float fStack_cc;

  uVar10 = (unsigned __int64)*(unsigned int *)(param_3 + 0xcc);
  piVar5 = *(int **)(param_6 + 8);
  uVar11 = uVar10;
  if (((uVar10 != *(unsigned int *)(param_4 + 0xcc)) &&
      (uVar11 = (unsigned __int64)*(unsigned int *)(param_4 + 0xcc), *(char *)(param_3 + 0xe8) != '\x05')) &&
     (uVar11 = uVar10, *(char *)(param_4 + 0xe8) != '\x05')) {
    uVar11 = fn_82DB0258(param_6);
  }
  iVar7 = fn_82DF6E88(*(unsigned char *)(param_2 + 0x19),param_5,piVar5,uVar11,param_6);
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_6 + 0x10);
    if (*(char *)(iVar7 + 0x18) == '\x01') {
      iVar7 = *(char *)(iVar7 + 0x10) + iVar7;
    }
    else {
      iVar7 = 0;
    }
    if (param_3 != iVar7) {
      uVar9 = *(unsigned int *)(param_6 + 0x10);
      *(unsigned int *)(param_6 + 0x10) = *(unsigned int *)(param_6 + 0x14);
      *(unsigned int *)(param_6 + 0x14) = uVar9;
      uVar2 = *(unsigned short *)(param_6 + 4);
      *(unsigned short *)(param_6 + 4) = *(unsigned short *)(param_6 + 6);
      *(unsigned short *)(param_6 + 6) = uVar2;
      iVar7 = piVar5[0x16];
      piVar5[0x16] = piVar5[0x17];
      piVar5[0x17] = iVar7;
      if (piVar5[0x1d] != 0) {
        iVar7 = piVar5[0x1d];
        uVar9 = *(unsigned int *)(iVar7 + 4);
        *(unsigned int *)(iVar7 + 4) = *(unsigned int *)(iVar7 + 8);
        *(unsigned int *)(iVar7 + 8) = uVar9;
        *(bool *)(piVar5[0x1d] + 0x1a) = *(char *)(piVar5[0x1d] + 0x1a) == '\0';
      }
    }
    iVar7 = fn_82DF7968(param_2,*(unsigned char *)(param_2 + 0x19),param_2 + 0xf4,param_5,param_6);
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_2 + 0x6c);
      iVar8 = fn_82CE5410();
      if ((int)(piVar5[10] & 0x3fffffffU) < iVar7) {
        iVar14 = (piVar5[10] & 0x3fffffffU) << 1;
        if (iVar14 <= iVar7) {
          iVar14 = iVar7;
        }
        fn_82CE6310(*(unsigned int *)(iVar8 + 0x10),piVar5 + 8,iVar14,1);
      }
      piVar5[9] = iVar7;
      iVar7 = 0;
      if (0 < piVar5[9]) {
        do {
          *(unsigned char *)(piVar5[8] + iVar7) = *(unsigned char *)(*(int *)(param_2 + 0x68) + iVar7);
          iVar7 = iVar7 + 1;
        } while (iVar7 < piVar5[9]);
      }
      if (*(short *)(piVar5[0xf] + 4) == 0) {
        iVar7 = *(int *)(param_6 + 0x10);
        if (*(char *)(iVar7 + 0x18) == '\x01') {
          iVar7 = *(char *)(iVar7 + 0x10) + iVar7;
        }
        else {
          iVar7 = 0;
        }
        iVar7 = *(int *)(iVar7 + 8);
        *(unsigned char *)(iVar7 + 0x9c) = 1;
        *(int *)(iVar7 + 0x94) = *(int *)(iVar7 + 0x94) + -1;
        fn_82D8E938(iVar7,piVar5 + 0x11,1);
        *(unsigned char *)(iVar7 + 0x9c) = 0;
        *(int *)(iVar7 + 0x94) = *(int *)(iVar7 + 0x94) + 1;
      }
      uVar3 = *(unsigned short *)(piVar5[0xf] + 4);
      uVar12 = (unsigned int)uVar3;
      iVar8 = uVar12 + 2;
      iVar14 = ((int)(unsigned int)uVar3 >> 1) * 0x70 + ((uVar12 & 1) + (uVar12 & 1) * 2) * 0x10;
      iVar7 = uVar12 + 3;
      iVar15 = iVar14 + 0x80;
      if (1 < uVar3) {
        iVar15 = iVar14 + 0xa0;
        iVar8 = uVar12 + 3;
        iVar7 = uVar12 + 4;
      }
      iVar14 = piVar5[0x1d];
      if (iVar14 != 0) {
        iVar14 = *(int *)(*(int *)((*(unsigned char *)(iVar14 + 0x1a) + 1) * 4 + iVar14) + 0xcc);
        *(int *)(iVar14 + 0x10) = *(int *)(iVar14 + 0x10) - iVar8;
        *(int *)(iVar14 + 0x14) = *(int *)(iVar14 + 0x14) - iVar7;
        *(int *)(iVar14 + 0xc) = *(int *)(iVar14 + 0xc) - iVar15;
        iVar14 = piVar5[0x1d];
        *(short *)(iVar14 + 0x18) = *(short *)(iVar14 + 0x18) - (short)iVar7;
        *(short *)(iVar14 + 0x14) = *(short *)(iVar14 + 0x14) - (short)iVar15;
        *(short *)(iVar14 + 0x16) = *(short *)(iVar14 + 0x16) - (short)iVar8;
      }
      iVar7 = piVar5[0xf];
      uVar6 = fn_82DC73A8(*(unsigned short *)(iVar7 + 2));
      iVar8 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),iVar7,uVar6);
      uVar3 = *(unsigned short *)(param_2 + 0x24);
      iVar7 = fn_82DC74A8((unsigned __int64)uVar3,*(unsigned char *)(param_2 + 0x28),
                                *(unsigned char *)(param_2 + 0x29),*(unsigned short *)(param_2 + 0x2c));
      piVar5[0xf] = iVar7;
      *(unsigned short *)(iVar7 + 4) = uVar3;
      iVar7 = piVar5[0xf];
      *(unsigned __int64 *)(iVar7 + 0x10) = *(unsigned __int64 *)(param_2 + 0x30);
      *(unsigned __int64 *)(iVar7 + 0x18) = *(unsigned __int64 *)(param_2 + 0x38);
      *(unsigned __int64 *)(iVar7 + 0x20) = *(unsigned __int64 *)(param_2 + 0x40);
      *(unsigned __int64 *)(iVar7 + 0x28) = *(unsigned __int64 *)(param_2 + 0x48);
      *(int *)(piVar5[0x1d] + 0xc) = piVar5[0xf];
      *(unsigned short *)(piVar5[0x1d] + 0x10) = *(unsigned short *)(piVar5[0xf] + 2);
      uVar4 = *(unsigned short *)(piVar5[0xf] + 4);
      iStack_31a8 = uVar4 + 2;
      stack_pair_31b0.first = ((int)(unsigned int)uVar4 >> 1) * 0x70 + ((uVar4 & 1) + (uVar4 & 1) * 2) * 0x10;
      iStack_31a4 = uVar4 + 3;
      stack_pair_31b0.second = stack_pair_31b0.first + 0x80;
      stack_pair_31b0.first = stack_pair_31b0.first + 0xa0;
      if (1 < uVar4) {
        iStack_31a8 = uVar4 + 3;
        iStack_31a4 = uVar4 + 4;
        stack_pair_31b0.second = stack_pair_31b0.first;
      }
      fn_82D92F30(*(unsigned int *)
                    (*(int *)((*(unsigned char *)(piVar5[0x1d] + 0x1a) + 1) * 4 + piVar5[0x1d]) + 0xcc),
                   piVar5 + 0x11,&stack_pair_31b0.first);
      iVar7 = piVar5[0xf];
      fn_82CFC050((unsigned int)*(unsigned short *)(iVar7 + 6) * 0x20 + iVar7 + 0x30,
                   *(unsigned int *)(param_2 + 0x50),
                   (__int64)(int)(unsigned int)*(unsigned char *)(iVar7 + 10) * (__int64)(int)(unsigned int)uVar3);
      fn_82CFC050((unsigned __int64)(unsigned int)piVar5[0xf] + 0x30,*(unsigned int *)(param_2 + 0x5c),
                   (unsigned __int64)uVar3 << 5);
      if (*(char *)(param_1 + 1) != '\0') {
        iVar7 = piVar5[0xf];
        iVar8 = 0;
        bVar1 = *(unsigned char *)(iVar7 + 10);
        if (*(short *)(iVar7 + 4) != 0) {
          puVar13 = (unsigned int *)
                    ((((unsigned int)*(unsigned short *)(iVar7 + 6) * 0x20 + iVar7) - (unsigned int)bVar1) + 0x38);
          do {
            puVar13 = (unsigned int *)((int)puVar13 + (unsigned int)bVar1);
            *puVar13 = 0;
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)(unsigned int)*(unsigned short *)(piVar5[0xf] + 4));
        }
      }
      stack_pair_31c0.first = 0;
      stack_pair_31c0.second = 0;
      uStack_31b8 = 0x80000000;
      (**(int (***)())(*piVar5 + 0x30))(piVar5,&stack_pair_31c0.first);
      uVar11 = (unsigned __int64)stack_pair_31c0.second;
      if ((*(char *)(param_1 + 8) != '\0') && (iVar7 = 0, 0 < (int)stack_pair_31c0.second)) {
        iVar8 = 0;
        dVar17 = (double)lbl_821AAD20;
        dVar16 = (double)lbl_82134508;
        do {
          iVar15 = 0;
          iVar14 = 0;
          uVar2 = *(unsigned short *)(iVar8 + stack_pair_31c0.first);
          fStack_f0 = (float)dVar16;
          fStack_d0 = (float)dVar17;
          uStack_311c = 0;
          fStack_cc = (float)dVar17;
          if (*(char *)(param_1 + 10) != '\0') {
            iVar15 = param_3 + 0x10;
            iVar14 = param_4 + 0x10;
          }
          uVar9 = (**(int (***)())(*piVar5 + 0x28))(piVar5,uVar2);
          uStack_3150 = (**(int (***)())(*piVar5 + 0x2c))(piVar5,uVar2);
          puStack_3134 = auStack_3120;
          uStack_3158 = 1;
          uStack_314c = 0;
          fStack_3144 = (float)dVar17;
          uStack_3140 = 0;
          uStack_3138 = (unsigned int)param_5;
          if (piVar5[2] == 0) {
            uStack_312e = *(unsigned short *)((int)piVar5 + 0x12);
          }
          else {
            uStack_312e = 0;
          }
          iStack_3160 = iVar15;
          iStack_315c = iVar14;
          uStack_3148 = uVar9;
          piStack_313c = piVar5;
          uStack_3130 = uVar2;
          fn_82DAEFD0(*(unsigned int *)(param_3 + 8),&iStack_3160);
          if (*(short *)(param_3 + 0x204) != 0) {
            fn_82DAD288(param_3,&iStack_3160);
          }
          if (*(short *)(param_4 + 0x204) != 0) {
            fn_82DAD288(param_4,&iStack_3160);
          }
          uVar11 = (unsigned __int64)stack_pair_31c0.second;
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 2;
        } while (iVar7 < (int)stack_pair_31c0.second);
      }
      if ((*(char *)(param_1 + 9) != '\0') && (0 < (int)uVar11)) {
        iVar7 = 0;
        do {
          uVar2 = *(unsigned short *)(iVar7 + stack_pair_31c0.first);
          iVar8 = (**(int (***)())(*piVar5 + 0x28))(piVar5,uVar2);
          if ((*(unsigned char *)(iVar8 + 0xf) & 1) == 0) {
            iVar8 = (**(int (***)())(*piVar5 + 0x28))(piVar5,uVar2);
            uStack_318c = (**(int (***)())(*piVar5 + 0x2c))(piVar5,uVar2);
            iStack_3178 = iVar8 + 0x14;
            uStack_31a0 = 2;
            uStack_3190 = 4;
            uStack_3184 = 0;
            uStack_3183 = 0;
            uStack_3182 = 0;
            uStack_3180 = 0;
            uStack_317c = 0;
            uStack_3174 = 0;
            uStack_3170 = 0;
            iStack_319c = param_3;
            iStack_3198 = param_4;
            piStack_3194 = piVar5;
            iStack_3188 = iVar8;
            fn_82DAE118(*(unsigned int *)(param_3 + 8),&uStack_31a0);
            uStack_31a0 = 0;
            if (*(short *)(param_3 + 0x204) != 0) {
              fn_82DAD000(param_3,&uStack_31a0);
            }
            uStack_31a0 = 1;
            if (*(short *)(param_4 + 0x204) != 0) {
              fn_82DAD000(param_4,&uStack_31a0);
            }
          }
          uVar11 = uVar11 - 1;
          iVar7 = iVar7 + 2;
        } while (uVar11 != 0);
      }
      fn_82D7BF58(param_6,param_5);
      iVar7 = fn_82CE5410();
      stack_pair_31c0.second = 0;
      if ((uStack_31b8 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar7 + 0x10) + 0x10))
                  (*(int **)(iVar7 + 0x10),stack_pair_31c0.first,uStack_31b8 & 0x3fffffff,2);
      }
      return 0;
    }
  }
  return 1;
}
