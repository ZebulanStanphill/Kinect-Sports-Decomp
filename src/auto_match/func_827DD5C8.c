extern int fn_827D50B8();
extern int fn_827D50C0();
extern int fn_827D9ED0();
extern int fn_827D9ED8();
extern int fn_827E4210();
extern int fn_8281C448();
extern int fn_82A1E6A0();
extern int fn_82A2A108();


unsigned __int64 fn_827DD5C8(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar7;
  __int64 lVar4;
  __int64 lVar5;
  unsigned int uVar8;
  unsigned __int64 uVar6;
  int aiStack_40 [16];
  
  uVar1 = *param_2;
  puVar2 = (unsigned int *)param_2[7];
  iVar7 = fn_827D9ED8(uVar1);
  puVar2[2] = iVar7 + param_2[3];
  lVar4 = fn_827E4210(param_1);
  uVar3 = param_2[4];
  lVar5 = fn_827E4210(param_1);
  uVar8 = fn_82A1E6A0(0,1,0,0);
  puVar2[4] = uVar8;
  puVar2[3] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  uVar8 = param_2[5];
  uVar6 = fn_827D9ED0(uVar1);
  iVar7 = fn_82A2A108(uVar6,uVar8,lVar4 + ((unsigned __int64)uVar3 - 1) & ~(lVar5 - 1U),aiStack_40,
                            puVar2);
  if (iVar7 == 0) {
LAB_827dd66c:
    uVar6 = thunk_FUN_82a2b798();
  }
  else {
    if (aiStack_40[0] == 0) {
      fn_8281C448(0xffffffff8201c478);
      uVar1 = param_2[1];
      uVar6 = thunk_FUN_82a2b798();
      fn_827D50C0(uVar1,uVar6);
      iVar7 = fn_827D50B8(param_2[1]);
      if (((iVar7 != 0) && (iVar7 = fn_827D50B8(param_2[1]), iVar7 != 0x3e5)) &&
         (iVar7 = fn_827D50B8(param_2[1]), iVar7 != 0x3e4)) goto LAB_827dd66c;
      uVar6 = 0xffffffff8201c494;
    }
    else {
      uVar6 = 0xffffffff8201c4b0;
    }
    fn_8281C448(uVar6);
    uVar6 = 0;
  }
  return uVar6;
}

