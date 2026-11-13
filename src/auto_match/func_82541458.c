extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637D70();
extern int fn_82637DE0();
extern int fn_82637E50();
extern int fn_82637EC0();
extern int fn_82637FF0();
extern unsigned int lbl_82195644;


void fn_82541458(int *param_1,unsigned __int64 param_2,int param_3,__int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  double dVar4;
  
  iVar1 = *param_1;
  *(unsigned int *)(iVar1 + 0x293c) = *(unsigned int *)(iVar1 + 0x293c) | 0x10;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x200;
  iVar1 = *param_1;
  *(unsigned char *)(iVar1 + 0x293c) = 0xaa;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x200;
  fn_82637B30(*param_1,1);
  fn_82637EC0(*param_1);
  dVar4 = (double)fn_82637BC0(*param_1,0);
  if (param_3 == 0x40) {
    uVar3 = (__int64)(dVar4 * (double)lbl_82195644) & 0xffffffff;
    if (uVar3 < 0x100) {
      uVar3 = ((((__int64)(dVar4 * (double)lbl_82195644) & 0xffU) << 8 | 0xffff0000 | uVar3) &
              0xffffff) << 8 | uVar3;
    }
    else {
      uVar3 = 0xffffffffffffffff;
    }
    fn_82637FF0(*param_1,uVar3);
    fn_82637C50(*param_1,0xc);
    uVar2 = 0xd;
  }
  else {
    fn_82637C50(*param_1,1);
    uVar2 = 0;
  }
  fn_82637CE0(*param_1,uVar2);
  fn_82637D70(*param_1,-(param_4 == 0) & 4);
  fn_82637DE0(*param_1,6);
  fn_82637E50(*param_1,1);
  return;
}

