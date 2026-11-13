extern int fn_82631578();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82639380();
extern int fn_82639480();
extern int fn_82639528();
extern int fn_82639628();
extern int fn_826397C8();
extern unsigned int ltcg_pool_0_0f;


void fn_825417C0(int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  
  if (param_2 == 8) {
    fn_82637B30(*param_1,1);
    fn_82637C50(*param_1,6);
    fn_82637CE0(*param_1,7);
    uVar2 = ltcg_pool_0_0f;
    iVar5 = *param_1;
    *(unsigned int *)(iVar5 + 0x293c) = *(unsigned int *)(iVar5 + 0x293c) | 8;
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x40200;
    iVar5 = *param_1;
    *(unsigned int *)(iVar5 + 0x2904) = uVar2;
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x8000000;
    iVar5 = *param_1;
    *(unsigned int *)(iVar5 + 0x293c) = *(unsigned int *)(iVar5 + 0x293c) & 0xfffffff8 | 4;
    uVar3 = *(unsigned __int64 *)(iVar5 + 0x10);
  }
  else {
    if ((param_2 != 4) && (param_2 != 0x10)) {
      if (((param_2 == 1) || (param_2 == 0x80)) || (param_2 == 0x20)) {
                    /* WARNING: Subroutine does not return */
        fn_82631578(*param_1,0);
      }
      goto LAB_825418f0;
    }
    iVar5 = *param_1;
    *(unsigned int *)(iVar5 + 0x293c) = *(unsigned int *)(iVar5 + 0x293c) & 0xfffffff7;
    uVar3 = *(unsigned __int64 *)(iVar5 + 0x10) | 0x40000;
  }
  *(unsigned __int64 *)(iVar5 + 0x10) = uVar3 | 0x200;
  iVar5 = *param_1;
  *(unsigned int *)(iVar5 + 0x293c) = *(unsigned int *)(iVar5 + 0x293c) & 0xffffffef;
  *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x200;
LAB_825418f0:
  lVar6 = 0;
  iVar5 = 0;
  do {
    fn_82639380(*param_1,lVar6,1);
    fn_82639528(*param_1,lVar6);
    iVar1 = *param_1;
    uVar3 = 0x8000000000000000 >> (lVar6 + 0x20U & 0x7f);
    *(unsigned int *)(iVar5 + iVar1 + 0x48c) = *(unsigned int *)(iVar5 + iVar1 + 0x48c) & 0xfe7fffff | 0x800000;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | uVar3;
    fn_826397C8(*param_1,lVar6,2);
    iVar1 = *param_1;
    *(unsigned int *)(iVar5 + iVar1 + 0x480) = *(unsigned int *)(iVar5 + iVar1 + 0x480) & 0xfff8ffff | 0x20000;
    *(unsigned __int64 *)(iVar1 + 0x18) = uVar3 | *(unsigned __int64 *)(iVar1 + 0x18);
    fn_82639628(*param_1);
    fn_82639480(*param_1,lVar6,0);
    iVar1 = *param_1;
    lVar6 = lVar6 + 1;
    iVar4 = iVar5 + iVar1;
    iVar5 = iVar5 + 0x18;
    *(unsigned int *)(iVar4 + 0x494) = *(unsigned int *)(iVar4 + 0x494) | 0x18;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | uVar3;
  } while (iVar5 < 0x180);
  return;
}

