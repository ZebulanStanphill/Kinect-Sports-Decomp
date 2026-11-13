extern unsigned int *auStack_28;
extern int fn_82F72F40();
extern int fn_82F73988();
extern int fn_82F739E8();
extern int fn_82F74120();
extern int fn_82F78108();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_30;


unsigned __int64 * fn_82F74AF8(unsigned __int64 *param_1,int *param_2,int param_3)

{
  char cVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uStack_30;
  unsigned char auStack_28 [1];
  
  cVar1 = *lbl_832635C0;
  if (cVar1 == '\0') {
    fn_82F73988(param_1,1,param_2);
    return param_1;
  }
  if ((param_3 != 0) && (cVar1 == 'X')) {
    lbl_832635C0 = lbl_832635C0 + 1;
    if (*param_2 == 0) {
      fn_82F72F40(param_1,0xffffffff8202f48c);
      return param_1;
    }
    fn_82F739E8(param_1,0xffffffff82169e5c,param_2);
    return param_1;
  }
  if (cVar1 == 'Y') {
    lbl_832635C0 = lbl_832635C0 + 1;
    fn_82F74120(param_1);
    return param_1;
  }
  fn_82F78108(&uStack_30,param_2);
  if ((param_2[1] & 0x20000U) == 0) {
    if ((param_2[1] & 0x40000U) == 0) goto LAB_82f74bd8;
    uVar3 = 0xffffffff82169e40;
  }
  else {
    uVar3 = 0xffffffff82169e50;
  }
  puVar2 = (unsigned __int64 *)fn_82F739E8(auStack_28,uVar3,&uStack_30);
  uStack_30 = *puVar2;
LAB_82f74bd8:
  *param_1 = uStack_30;
  return param_1;
}

