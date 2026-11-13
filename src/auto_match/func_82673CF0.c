extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8251F718();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern int fn_8266C890();
extern int fn_8266EC60();
extern int fn_8266F818();
extern int fn_82671070();
extern int fn_82671D48();
extern int fn_82673A28();
extern int fn_8267C4F0();
extern int fn_82683F30();
extern int fn_82687270();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int iStack_9c;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_821AAD20;
extern unsigned int *lbl_831E7B40;
extern unsigned int lbl_831E7B44;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;


unsigned __int64
fn_82673CF0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int *param_5,
             unsigned __int64 param_6)

{
  int iVar2;
  int *piVar3;
  __int64 lVar1;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  struct { unsigned int first; int second; } stack_pair_a0;

  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  
  uVar5 = 0;
  stack_pair_a0.first = 0;
  uVar4 = 1;
  iVar2 = fn_82A1BB18();
  if (iVar2 == lbl_831E7B44) {
    iVar2 = fn_8251F718(param_1 + 0xd4);
    uVar5 = fn_8266EC60();
    fn_8266C890(uVar5,iVar2);
    piVar3 = (int *)fn_82683F30(param_2,**(unsigned int **)(iVar2 + 4),2,0);
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_82687270();
    }
    *(int **)(param_1 + 0xc) = piVar3;
    if (piVar3 != (int *)0x0) {
      uStack_90 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_80 = 0xffffffff;
      uStack_6c = 0xffffffff;
      uStack_68 = 0xffffffff;
      uStack_70 = lbl_82002C28;
      uStack_74 = 0;
      uStack_88 = 0x2000;
      uStack_8c = 0x10;
      uStack_84 = 0x2000;
      piVar3 = (int *)(**(int (***)())(*piVar3 + 0x54))(piVar3,&uStack_90,1);
      if (*(int *)(param_1 + 0x10) != 0) {
        fn_8267C4F0();
      }
      *(int **)(param_1 + 0x10) = piVar3;
      if (piVar3 != (int *)0x0) {
        *(int *)(param_1 + 0xe4) = (int)param_3;
        (**(int (***)())(*piVar3 + 0x9c))((double)lbl_821AAD20);
        (**(int (***)())(**(int **)(param_1 + 0x10) + 0x6c))(*(int **)(param_1 + 0x10),1);
        uVar5 = fn_8266EC60();
        fn_8266C890(uVar5,0);
        fn_8251FA58(iVar2);
        fn_82673A28(param_1,0xffffffff82673aa0,param_1);
        if (-1 < (int)param_4) {
          fn_8266F818(param_1,param_4,param_6);
        }
        if (((param_5 != (int *)0x0) && (0 < param_5[1])) && (0 < *param_5)) {
          fn_82671D48(param_1,param_5);
        }
        *(unsigned int *)(param_1 + 0xf0) = 1;
        return 1;
      }
    }
    uVar4 = 0;
  }
  else {
    lVar1 = fn_8265C9E0(0x58);
    if (lVar1 != 0) {
      stack_pair_a0.first = 0;
      stack_pair_a0.second = 0;
      fn_82517978(&stack_pair_a0.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
      uVar5 = fn_82671070(lVar1,&stack_pair_a0.first,param_2,param_3,param_4,param_5,param_6);
      if (stack_pair_a0.second != 0) {
        fn_822315A0();
      }
    }
    fn_82BFE128(*lbl_831E7B40,uVar5);
  }
  return uVar4;
}

