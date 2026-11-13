extern unsigned int *auStack_68;
extern int fn_8265C9E0();
extern int fn_8288B2D8();
extern int fn_8288C1B8();
extern int fn_8288CBD8();
extern int fn_8288CD40();
extern int fn_82897B50();
extern int fn_82897BA8();
extern int fn_828A12E8();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern int fn_828C7F70();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_8288F730(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  __int64 lVar2;
  int *piVar5;
  char cVar8;
  unsigned __int64 uVar3;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar4;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned char auStack_68 [8];
  
  stack_pair_70.second = fn_828B55F8(param_2);
  lVar2 = fn_828A12E8(param_1);
  piVar5 = (int *)fn_8288CD40(auStack_68,lVar2 + 0x94,&stack_pair_70.second);
  iVar1 = *(int *)(*piVar5 + 0x40);
  uVar9 = (unsigned __int64)*(unsigned int *)(iVar1 + 8);
  fn_8288C1B8(param_5,uVar9);
  uVar10 = 0;
  if (uVar9 != 0) {
    do {
      stack_pair_70.first = 0;
      fn_8288B2D8(iVar1,uVar10);
      cVar8 = fn_82897BA8();
      if (cVar8 == '\0') {
        stack_pair_70.second = 0;
        uVar3 = fn_828B55F8(param_2);
        fn_82897B50(param_1,uVar3,uVar10,1,&stack_pair_70.second);
        iVar6 = fn_828E9DA8(param_4);
        iVar7 = fn_828E9D90(param_4);
        if ((0 < iVar6 - iVar7) && (iVar6 = fn_828E9FF8(param_4,1), iVar6 != 0)) {
          uVar4 = fn_8265C9E0(0x24);
          if ((uVar4 & 0xffffffff) == 0) {
            stack_pair_70.first = 0;
          }
          else {
            stack_pair_70.first = fn_828C7F70(uVar4,param_1,param_3,param_4,stack_pair_70.second);
          }
        }
      }
      fn_8288CBD8(param_5,&stack_pair_70.first);
      uVar10 = uVar10 + 1;
    } while ((uVar10 & 0xffffffff) < uVar9);
  }
  fn_828B55B0(param_2);
  return;
}

