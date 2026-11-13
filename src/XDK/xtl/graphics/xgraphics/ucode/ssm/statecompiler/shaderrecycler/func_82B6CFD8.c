extern unsigned int *auStack_50;
extern int fn_82AB15D0();
extern int fn_82AB60F0();
extern int fn_82AB6148();
extern int fn_82AB63F8();
extern int fn_82AB6648();
extern int fn_82AB66F8();
extern int fn_82AB67A8();
extern int fn_82AB6DA0();
extern int fn_82AB6EC0();
extern int fn_82AB7718();
extern int fn_82B69A00();
extern int fn_82B6CD48();
extern int fn_82B7FEE0();
extern int fn_82B7FFE8();
extern int fn_82B9F338();
extern int fn_82B9F3F8();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


unsigned __int64 fn_82B6CFD8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar5;
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int *puVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int auStack_50;
  struct { unsigned int first; unsigned int second; } stack_pair_48;

  
  auStack_50 = 0;
  iVar5 = fn_82B69A00(*(unsigned int *)(param_1 + 0x10),10);
  if (iVar5 != 0) {
    stack_pair_48.first = fn_82AB6EC0(param_2,1);
    stack_pair_48.second = fn_82AB6EC0(param_2,0);
    iVar5 = fn_82B9F338(*(unsigned int *)(param_1 + 0x14),&stack_pair_48.first,2,&auStack_50);
    if (iVar5 != 0) {
      uVar1 = fn_82B9F3F8(auStack_50);
      iVar5 = fn_82AB60F0();
      if (iVar5 == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f00,0xffffffff820d9c18,0x2ad);
      }
      for (lVar2 = fn_82AB63F8(uVar1); lVar2 != 0; lVar2 = fn_82AB66F8(uVar1,lVar2)) {
        puVar6 = (unsigned int *)fn_82AB67A8(lVar2);
        iVar5 = fn_82AB7718(*puVar6,param_2);
        if ((iVar5 != 0) && (iVar5 = fn_82AB7718(puVar6[1],param_2), iVar5 != 0)) {
          uVar3 = fn_82B6CD48(*puVar6,puVar6[1]);
          if ((uVar3 & 0xffffffff) == 0) {
            fn_82AB15D0(uVar3,0xffffffff820d2ea4,0xffffffff820d9ec0,0xffffffff820d9c18,699);
          }
          fn_82AB6DA0(*puVar6);
          fn_82AB6DA0(puVar6[1]);
          fn_82B7FEE0(param_3,*puVar6,param_2);
          fn_82B7FFE8(param_3,puVar6[1],param_2);
          uVar4 = fn_82AB6648(uVar1,lVar2);
          fn_82AB6148(uVar1,uVar4);
          return 1;
        }
      }
    }
  }
  return 0;
}

