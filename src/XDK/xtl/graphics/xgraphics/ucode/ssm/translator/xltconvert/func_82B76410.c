extern int fn_82AB15D0();
extern int fn_82B6EB98();
extern int fn_82B6EC28();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82B76410(int param_1,unsigned int *param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  struct { unsigned a,b,c; } args;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (((*(unsigned short *)param_2 & 0x3f) != 5) && ((*(unsigned short *)param_2 & 0x3f) != 4)) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","(pDst->bits.register_type == IL_REGTYPE_VERTEX) || (pDst->bits.register_type == IL_REGTYPE_TEMP)","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\translator\\xltconvert.cpp",0x2eaf);
  }
  if (0x1f < (param_3 & 0xffffffff)) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","vertex_element <= 0x1f","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\translator\\xltconvert.cpp",0x2eb2);
  }
  uVar2 = *param_2 & 0xffff;
  if (*(int *)(((*param_2 >> 10 & 0xfc0) + uVar2 + 0x1068) * 4 + iVar1) == -1) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pCtxAssm->symTable[pDst->bits.register_type][regnum] != XLT_SYM_UNDEF","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\translator\\xltconvert.cpp",0x2eb7);
  }
  fn_82B6EC28(param_1,*(unsigned int *)
                         (((*(unsigned short *)param_2 & 0x3f) * 0x40 + uVar2 + 0x1068) * 4 + iVar1),param_3
                ,0,0);
  args.a = *(unsigned int *)(iVar1 + 0xc);
  args.b = 1;
  args.c = args.a;
  fn_82B6EB98(param_1,iVar1 + 0x3360,args.a,0x10000,&args.a);
  *(int *)(param_1 + 0x664) = *(int *)(param_1 + 0x664) + 1;
  return;
}

