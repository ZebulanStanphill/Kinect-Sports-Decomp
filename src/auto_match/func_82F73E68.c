extern unsigned int *auStack_18;
extern int fn_82F72DD0();
extern int fn_82F72F40();
extern int fn_82F735D8();
extern int fn_82F739E8();
extern int fn_82F73D20();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_20;


unsigned __int64 * fn_82F73E68(unsigned __int64 *param_1)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 uStack_20;
  unsigned char auStack_18 [8];
  
  if (*lbl_832635C0 == '\0') {
    puVar3 = (unsigned __int64 *)fn_82F72F40(auStack_18,0xffffffff82169e1c);
    uStack_20 = *puVar3;
    fn_82F72DD0(&uStack_20,1);
    *param_1 = uStack_20;
  }
  else {
    if (*lbl_832635C0 == 'Z') {
      lbl_832635C0 = lbl_832635C0 + 1;
      uStack_20 = uStack_20 & 0xffff;
      *param_1 = uStack_20;
      return param_1;
    }
    uVar1 = fn_82F73D20(&uStack_20);
    puVar2 = (unsigned int *)fn_82F739E8(auStack_18,0xffffffff82169e1c,uVar1);
    *(unsigned int *)param_1 = *puVar2;
    *(unsigned int *)((int)param_1 + 4) = puVar2[1];
  }
  fn_82F735D8(param_1,0x29);
  return param_1;
}

