typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_140;
extern unsigned int *auStack_1a0;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826800F0();
extern int fn_826806B8();
extern int fn_8273D528();
extern unsigned int lbl_82002BE8;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;


unsigned int * fn_82681320(int *param_1,unsigned __int64 param_2)

{
  unsigned short *puVar1;
  bool bVar2;
  char cVar9;
  __int64 lVar3;
  unsigned int uVar5;
  int iVar6;
  unsigned int *puVar7;
  __int64 lVar4;
  int iVar8;
  unsigned short *puVar10;
  unsigned __int64 uVar11;
  int iVar12;
  int iVar13;
  unsigned int auStack_1a0;
  unsigned int uStack_190;
  unsigned int uStack_18c;
  unsigned int uStack_188;
  unsigned int uStack_184;
  unsigned int uStack_180;
  unsigned int uStack_17c;
  unsigned int uStack_178;
  unsigned int uStack_174;
  unsigned int uStack_170;
  unsigned int uStack_16c;
  struct { unsigned int first; unsigned int second; } stack_pair_160;

  unsigned int uStack_158;
  unsigned int uStack_154;
  unsigned int uStack_150;
  unsigned char uStack_14c;
  unsigned char auStack_140 [320];
  
  if (param_1 == (int *)0x0) {
    return (unsigned int *)0x0;
  }
  cVar9 = (**(int (***)())(*param_1 + 8))();
  if (cVar9 == '\0') {
    return (unsigned int *)0x0;
  }
  iVar13 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  lVar3 = (**(int (***)())(*param_1 + 0x18))(param_1);
  auStack_1a0 = 0;
  (**(int (***)())(*param_1 + 0x28))(param_1,&auStack_1a0,4);
  if ((((unsigned __int64)(auStack_1a0 >> 0x10) | (unsigned __int64)auStack_1a0 & 0xffffffffffff0000) >> 8 &
       0xffff | ((((unsigned __int64)auStack_1a0 & 0xffff) << 0x10 |
                 (unsigned __int64)auStack_1a0 & 0xffffffff0000ffff) & 0xffff00) << 8) == 0x20534444) {
    auStack_1a0 = 0;
    (**(int (***)())(*param_1 + 0x28))(param_1,&auStack_1a0,4);
    if (((((unsigned __int64)(auStack_1a0 >> 0x10) | (unsigned __int64)auStack_1a0 & 0xffffffffffff0000) >>
          8 & 0xffff |
         ((((unsigned __int64)auStack_1a0 & 0xffff) << 0x10 |
          (unsigned __int64)auStack_1a0 & 0xffffffff0000ffff) & 0xffff00) << 8) == 0x7c) &&
       (iVar6 = (**(int (***)())(*param_1 + 0x28))(param_1,auStack_140,0x78), iVar6 == 0x78)) {
      uStack_190 = 0;
      uStack_184 = 0;
      uStack_188 = 0;
      uStack_18c = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_178 = 1;
      fn_8273D528(&uStack_174,0);
      uStack_150 = 0;
      uStack_154 = 0;
      uStack_158 = 0;
      stack_pair_160.second = 0;
      stack_pair_160.first = 0;
      uStack_14c = 0;
      cVar9 = fn_826800F0(&uStack_190,auStack_140,0,&stack_pair_160.first);
      uVar5 = uStack_174;
      if (cVar9 != '\0') {
        puVar7 = (unsigned int *)fn_8267B890(lbl_831E7E64,0x30,0);
        if (puVar7 == (unsigned int *)0x0) {
          puVar7 = (unsigned int *)0x0;
        }
        else {
          puVar7[1] = 1;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = 0;
          *puVar7 = &lbl_82002BE8;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[3] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[8] = 1;
        }
        uVar5 = uStack_174;
        if (puVar7 != (unsigned int *)0x0) {
          puVar7[4] = uStack_188;
          puVar7[3] = uStack_18c;
          puVar7[5] = uStack_184;
          puVar7[8] = uStack_178;
          puVar7[2] = uStack_190;
          if ((param_2 & 0xffffffff) == 0) {
            param_2 = (unsigned __int64)lbl_831E7E64;
          }
          lVar4 = (**(int (***)())(*param_1 + 0x10))(param_1);
          uVar11 = lVar3 - lVar4;
          iVar6 = fn_8267B890(param_2,uVar11,0);
          if (iVar6 != 0) {
            iVar8 = (**(int (***)())(*param_1 + 0x28))(param_1,iVar6,uVar11);
            iVar12 = (int)uVar11;
            if (iVar8 != iVar12) {
              fn_8267C498(puVar7);
              fn_8267BE38(iVar6);
              uVar5 = uStack_174;
              goto LAB_826813d0;
            }
            if (((int)puVar7[2] < 10) || (bVar2 = true, 0xc < (int)puVar7[2])) {
              bVar2 = false;
            }
            if ((bVar2) &&
               (lVar3 = (__int64)(iVar12 >> 1) + (unsigned __int64)(iVar12 < 0 && (uVar11 & 1) != 0),
               0 < lVar3)) {
              puVar10 = (unsigned short *)(iVar6 + -2);
              do {
                puVar1 = puVar10 + 1;
                iVar13 = iVar13 + 1;
                puVar10 = puVar10 + 1;
                *puVar10 = *puVar1 << 8 | *puVar1 >> 8;
              } while (iVar13 < (int)lVar3);
            }
            puVar7[6] = iVar6;
            puVar7[7] = iVar12;
            cVar9 = fn_826806B8(puVar7,&stack_pair_160.first);
            if (cVar9 != '\0') {
              fn_8267BE38(uStack_174);
              return puVar7;
            }
          }
          fn_8267C498(puVar7);
          uVar5 = uStack_174;
        }
      }
      goto LAB_826813d0;
    }
  }
  uVar5 = 0;
LAB_826813d0:
  fn_8267BE38(uVar5);
  return (unsigned int *)0x0;
}

