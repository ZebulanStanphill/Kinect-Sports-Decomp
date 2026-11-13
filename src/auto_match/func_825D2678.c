extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82639380();
extern int fn_82639528();
extern unsigned int lbl_821954D0;
extern unsigned int lbl_831C1CEC;
extern unsigned int uRam8327f90c;
extern unsigned int uRam8327f98c;


void fn_825D2678(unsigned __int64 param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  iVar1 = *(int *)*param_2;
  *(unsigned int *)(iVar1 + 0x2f14) = 1;
  *(unsigned int *)(iVar1 + 0x2934) =
       (-(unsigned int)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffd;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x20800;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffb;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
  uVar3 = fn_82637B30(iVar1,1);
  uVar2 = lbl_821954D0;
  *(unsigned int *)(iVar1 + 0x293c) = *(unsigned int *)(iVar1 + 0x293c) | 8;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40200;
  *(unsigned int *)(iVar1 + 0x2904) = uVar2;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x8000000;
  uVar3 = fn_82637BC0(uVar3,0);
  uVar3 = fn_82637C50(uVar3,6);
  uVar3 = fn_82637CE0(uVar3,7);
  *(unsigned int *)(iVar1 + 0x2948) = *(unsigned int *)(iVar1 + 0x2948) & 0xfffffff8;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40;
  *(unsigned int *)(iVar1 + 0x480) = *(unsigned int *)(iVar1 + 0x480) & 0xffffe3ff | 0x800;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x80000000;
  *(unsigned int *)(iVar1 + 0x480) = *(unsigned int *)(iVar1 + 0x480) & 0xffff1fff | 0x4000;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x80000000;
  *(unsigned int *)(iVar1 + 0x498) = *(unsigned int *)(iVar1 + 0x498) & 0xffffe3ff | 0x800;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x40000000;
  *(unsigned int *)(iVar1 + 0x498) = *(unsigned int *)(iVar1 + 0x498) & 0xffff1fff | 0x4000;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x40000000;
  *(unsigned int *)(iVar1 + 0x498) = *(unsigned int *)(iVar1 + 0x498) & 0xfff8ffff | 0x20000;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x40000000;
  uVar3 = fn_82639380(uVar3,0,1);
  uVar3 = fn_82639528(uVar3,0);
  *(unsigned int *)(iVar1 + 0x48c) = *(unsigned int *)(iVar1 + 0x48c) & 0xfe7fffff | 0x800000;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x80000000;
  fn_82631920(uVar3,uRam8327f90c);
  *(unsigned int *)(iVar1 + 0x2ed8) = lbl_831C1CEC;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
                    /* WARNING: Subroutine does not return */
  fn_82631578(iVar1,uRam8327f98c);
}

