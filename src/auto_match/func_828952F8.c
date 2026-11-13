#define true 1
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern int fn_82248B90();
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_8265CA20();
extern int fn_8288B408();
extern int fn_8288B7E8();
extern int fn_8288FAF8();
extern int fn_82892F98();
extern int fn_82893F40();
extern int fn_82897780();
extern int fn_828977F0();
extern int fn_8289EEE0();
extern int fn_8289EF40();
extern int fn_828A12E8();
extern int fn_828ACD00();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5650();
extern int fn_82A4AAA8();
extern int fn_82F622E0();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_828952F8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar7;
  unsigned __int64 uVar5;
  int iVar8;
  char cVar10;
  int *piVar9;
  unsigned __int64 uVar6;
  unsigned int **ppuVar11;
  unsigned __int64 uVar12;
  unsigned int *puVar13;
  unsigned int *puStack_90;
  unsigned int *puStack_8c;
  unsigned char auStack_88 [8];
  unsigned char auStack_80 [8];
  unsigned char auStack_78 [8];
  unsigned char auStack_70 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  
  iVar7 = fn_828A12E8(param_2);
  *(unsigned char *)(iVar7 + 0x90) = 1;
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  uStack_58 = 0;
  iVar7 = fn_828A12E8(param_2);
  puStack_90 = (unsigned int *)**(unsigned int **)(iVar7 + 8);
  do {
    while( true ) {
      puVar13 = puStack_90;
      iVar7 = fn_828A12E8(param_2);
      if (puVar13 == *(unsigned int **)(iVar7 + 8)) {
        iVar7 = fn_828A12E8(param_2);
        uVar3 = stack_pair_60.second;
        uVar12 = (unsigned __int64)stack_pair_60.first;
        *(unsigned char *)(iVar7 + 0x90) = 0;
        uVar5 = uVar12;
        if (uVar12 != stack_pair_60.second) {
          do {
            iVar7 = fn_828A12E8(param_2);
            puVar13 = (unsigned int *)(*(unsigned int **)(iVar7 + 8))[1];
            cVar10 = *(char *)((int)puVar13 + 0x19);
            puVar4 = *(unsigned int **)(iVar7 + 8);
            while (cVar10 == '\0') {
              cVar10 = fn_828B5650(puVar13 + 3,uVar5);
              if (cVar10 == '\0') {
                puVar2 = (unsigned int *)*puVar13;
              }
              else {
                puVar2 = (unsigned int *)puVar13[2];
                puVar13 = puVar4;
              }
              puVar4 = puVar13;
              puVar13 = puVar2;
              cVar10 = *(char *)((int)puVar2 + 0x19);
            }
            puStack_90 = puVar4;
            if ((puVar4 == *(unsigned int **)(iVar7 + 8)) ||
               (cVar10 = fn_828B5650(uVar5,puVar4 + 3), cVar10 != '\0')) {
              puStack_8c = *(unsigned int **)(iVar7 + 8);
              ppuVar11 = &puStack_8c;
            }
            else {
              ppuVar11 = &puStack_90;
            }
            if ((*ppuVar11 != *(unsigned int **)(iVar7 + 8)) &&
               (puVar13 = (unsigned int *)(*ppuVar11)[5], puVar13 != (unsigned int *)0x0)) {
              if (*(int (***)())(puVar13[0xe] + 0x2c) == (int (**)())0x0) {
                (**(int (***)())*puVar13)(puVar13,1);
              }
              else {
                (**(int (***)())(puVar13[0xe] + 0x2c))();
              }
            }
            uVar5 = uVar5 + 8;
          } while ((uVar5 & 0xffffffff) != (unsigned __int64)uVar3);
        }
        if (uVar12 != 0) {
          uVar5 = uVar12;
          if (uVar12 != uVar3) {
            do {
              fn_828B55B0(uVar5);
              uVar5 = uVar5 + 8;
            } while ((uVar5 & 0xffffffff) != (unsigned __int64)uVar3);
          }
          fn_8265CA20(uVar12);
        }
        return;
      }
      piVar1 = (int *)puVar13[5];
      uVar5 = fn_8240D928(param_3);
      if (-1 < (int)(unsigned int)uVar5) {
        if ((unsigned __int64)(unsigned int)piVar1[0x13] <= (uVar5 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82F622E0(0xffffffff82023604);
        }
        uVar3 = (unsigned int)((uVar5 & 0xffffffff) >> 3) & 0x1ffffffc;
        *(unsigned int *)(uVar3 + piVar1[0xf]) =
             *(unsigned int *)(uVar3 + piVar1[0xf]) & ~(1 << ((unsigned int)uVar5 & 0x1f));
      }
      fn_82897780(piVar1[0xd],param_3);
      iVar7 = fn_823AA970(*(unsigned int *)(piVar1[0xd] + 0x38));
      iVar8 = fn_823AA970(param_3);
      if (iVar8 == iVar7) break;
LAB_82895578:
      fn_82248B90(&puStack_90);
    }
    if ((*(char *)(param_3 + 0x26) != '\0') || (cVar10 = fn_828ACD00(param_2), cVar10 != '\0')) {
      fn_828B5580(auStack_70,piVar1 + 5);
      fn_82892F98(&stack_pair_60.first,auStack_70);
      fn_828B55B0(auStack_70);
      goto LAB_82895578;
    }
    cVar10 = (**(int (***)())(*piVar1 + 0x14))(piVar1);
    if ((cVar10 == '\0') || (cVar10 = fn_8289EF40(param_2), cVar10 == '\0')) {
      fn_828B5580(auStack_78,piVar1 + 5);
      fn_82892F98(&stack_pair_60.first,auStack_78);
      fn_828B55B0(auStack_78);
      fn_82248B90(&puStack_90);
    }
    else {
      piVar9 = (int *)fn_8289EEE0(param_2);
      iVar7 = fn_823AA970();
      iVar8 = fn_823AA970(param_3);
      if (iVar7 == iVar8) {
        fn_828B5580(auStack_88,piVar1 + 5);
        fn_82892F98(&stack_pair_60.first,auStack_88);
        fn_828B55B0(auStack_88);
        fn_82248B90(&puStack_90);
      }
      else if (*(char *)((int)piVar9 + 0x26) == '\0') {
        uVar6 = (**(int (***)())(*piVar9 + 0xc))(piVar9);
        iVar7 = fn_82A4AAA8();
        if (iVar7 == 1) {
          fn_8288B408(piVar1[0xd],uVar6);
          fn_828977F0(piVar1[0xd],*(unsigned int *)(piVar1[0xd] + 0x38),0);
          fn_8288B7E8(piVar1);
          uVar6 = fn_828A12E8(param_2);
          fn_8288FAF8(uVar6,piVar1);
          fn_82248B90(&puStack_90);
        }
        else {
          fn_828B5580(auStack_80,piVar1 + 5);
          fn_82892F98(&stack_pair_60.first,auStack_80);
          fn_828B55B0(auStack_80);
          fn_82248B90(&puStack_90);
        }
      }
      else {
        fn_82893F40(piVar1,piVar9,1);
        fn_82248B90(&puStack_90);
      }
    }
  } while( true );
}

