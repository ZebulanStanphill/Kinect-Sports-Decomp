extern unsigned int *auStack_3c;
extern int fn_827D9ED0();
extern int fn_827D9ED8();
extern int fn_827E4210();
extern int fn_8281C448();
extern int fn_82A1E6A0();
extern int fn_82A29B68();
extern int fn_82A29CD8();
extern int fn_82A29D80();
extern int fn_82A29FE0();
extern unsigned int uStack_40;


unsigned __int64 fn_827DD228(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar7;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uStack_40;
  unsigned char auStack_3c [1];
  
  uVar1 = *param_2;
  puVar2 = (unsigned int *)param_2[7];
  iVar7 = fn_827D9ED8(uVar1);
  puVar2[2] = iVar7 + param_2[3];
  lVar4 = fn_827E4210(param_1);
  uVar3 = param_2[4];
  lVar5 = fn_827E4210(param_1);
  uVar9 = lVar4 + ((unsigned __int64)uVar3 - 1) & ~(lVar5 - 1U);
  uVar6 = fn_827D9ED0(uVar1);
  fn_82A29D80(uVar6,&uStack_40);
  uVar10 = (unsigned int)puVar2[2] + uVar9;
  if ((unsigned __int64)uStack_40 < (uVar10 & 0xffffffff)) {
    uVar6 = fn_827D9ED0(uVar1);
    iVar7 = fn_82A29B68(uVar6,uVar10,0,0);
    if (iVar7 == -1) goto LAB_827dd2c0;
    fn_827D9ED0(uVar1);
    iVar7 = fn_82A29CD8();
    if (iVar7 == 0) goto LAB_827dd2c0;
  }
  uVar8 = fn_82A1E6A0(0,1,0,0);
  puVar2[4] = uVar8;
  puVar2[3] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  uVar8 = puVar2[2];
  uVar6 = fn_827D9ED0(uVar1);
  iVar7 = fn_82A29B68(uVar6,uVar8,0,0);
  if (iVar7 != -1) {
    uVar8 = param_2[5];
    uVar6 = fn_827D9ED0(uVar1);
    iVar7 = fn_82A29FE0(uVar6,uVar8,uVar9,auStack_3c,puVar2);
    if (iVar7 != 0) {
      fn_8281C448(0xffffffff8201c4c4);
      return 0;
    }
  }
LAB_827dd2c0:
  uVar6 = thunk_FUN_82a2b798();
  return uVar6;
}

