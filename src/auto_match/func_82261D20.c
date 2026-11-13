extern int fn_8225F670();
extern int fn_8225FD88();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB40();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern int fn_82E1CD08();
extern unsigned int lbl_832660F8;
extern unsigned int lbl_832660FC;
extern unsigned int lbl_832760AA;
extern unsigned int lbl_832760AB;
extern unsigned int lbl_832760B8;
extern unsigned int lbl_832760BC;


void fn_82261D20(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  char *pcVar2;
  int iVar3;
  char cVar4;
  unsigned __int64 uVar1;
  unsigned char in_stack_00000057;
  unsigned char in_stack_0000005f;
  
  pcVar2 = (char *)fn_8225F670();
  if (*pcVar2 != '\0') {
    iVar3 = fn_8225FDE0(0x42,1);
    if ((iVar3 == 0) && (cVar4 = fn_82E1CAD0(0x42), cVar4 != '\0')) {
      fn_82E1CD08();
      fn_82E1CB88(0xffffffff821a6fd0,param_1);
      fn_82E1CB08(0xffffffff82196130,param_2,0);
      uVar1 = fn_8225FD88(param_3);
      fn_82E1CB08(0xffffffff821a6874,uVar1,0);
      fn_82E1CB40(0xffffffff821a685c,param_4);
      fn_82E1CB40(0xffffffff821a6868,param_5);
      fn_82E1CB88(0xffffffff821a6fd8,param_6);
      fn_82E1CB40(0xffffffff821a6f50,param_7);
      fn_82E1CB40(0xffffffff821a6f60,param_8);
      fn_82E1CB40(0xffffffff821a6f70,in_stack_00000057);
      fn_82E1CB40(0xffffffff821a6f80,in_stack_0000005f);
      fn_82E1CCA8();
    }
  }
  lbl_832760AA = 1;
  lbl_832760AB = 0;
  lbl_832760B8 = lbl_832660F8;
  lbl_832760BC = lbl_832660FC;
  return;
}

