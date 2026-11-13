extern int fn_8263C538();
extern int fn_8265C9E0();
extern int fn_8267A0E0();
extern int fn_82F65E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;


void fn_8266F818(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  unsigned int uStack_8c;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  
  dVar7 = (double)(**(int (***)())(**(int **)(param_1 + 0xc) + 0x18))();
  uStack_8c = (unsigned int)(__int64)dVar7;
  uVar1 = uStack_8c;
  uVar6 = (__int64)dVar7 & 0xffffffff;
  dVar7 = (double)(**(int (***)())(**(int **)(param_1 + 0xc) + 0x1c))();
  uStack_8c = (unsigned int)(__int64)dVar7;
  uVar5 = (__int64)dVar7 & 0xffffffff;
  if ((uVar6 != 0) && (uVar5 != 0)) {
    if ((int)param_2 < 1) {
      uVar4 = uVar6;
      if (uVar5 <= uVar6) {
        uVar4 = uVar5;
      }
      dVar7 = (double)fn_82F65E20((double)uVar4);
      dVar8 = (double)(float)dVar7;
      dVar7 = (double)fn_82F65E20(lbl_82002C40);
      uVar4 = (__int64)(dVar8 / (double)(float)dVar7) & 0xffffffff;
      param_2 = uVar4 - 4;
      if (uVar4 < 5) {
        param_2 = 1;
      }
    }
    puVar2 = (unsigned int *)fn_8265C9E0(0xc);
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    *(unsigned int **)(param_1 + 0xb8) = puVar2;
    fn_8267A0E0(uVar6,uVar5,param_2,0,param_3);
    uVar3 = fn_8263C538(**(unsigned int **)(param_1 + 0xb8));
    *(unsigned int *)(param_1 + 0xd8) = uVar3;
    uVar3 = lbl_821AAD20;
    stack_pair_80.first = uVar1;
    stack_pair_80.second = uStack_8c;
    uStack_70 = uVar1;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_6c = uStack_8c;
    uStack_54 = lbl_82002AE0;
    uStack_50 = 0;
    uStack_58 = lbl_82002AE0;
    uStack_5c = 0;
    *(unsigned int *)(param_1 + 0xcc) = lbl_82002AE0;
    *(unsigned int *)(param_1 + 0xc4) = uVar1;
    *(unsigned int *)(param_1 + 0xd0) = uVar3;
    uStack_60 = 0;
    *(unsigned int *)(param_1 + 200) = uStack_8c;
    uStack_64 = 0;
    uStack_68 = 0;
    *(unsigned int *)(param_1 + 0xbc) = 0;
    *(unsigned int *)(param_1 + 0xc0) = 0;
    (**(int (***)())(**(int **)(param_1 + 0x10) + 100))(*(int **)(param_1 + 0x10),&stack_pair_80.first);
  }
  return;
}

