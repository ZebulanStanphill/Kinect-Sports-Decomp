extern int fn_82AB15D0();


unsigned int fn_82B694C8(int param_1,unsigned int param_2)

{
  if (param_2 >= *(unsigned int *)(param_1 + 0x4c)) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","uStateBlk < pAS_Object->ASMapInfo.uNumStateBlks","E:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\AbstractState\\AS_Interface.h",0xbf);
  }
  return *(unsigned int *)((param_2 >> 3 & 0x1ffffffc) + *(int *)(param_1 + 0xc)) >> (param_2 & 0x1f) & 1;
}

