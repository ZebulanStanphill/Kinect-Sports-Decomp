extern int fn_82E66740();
extern int fn_82E66BD8();


/* WARNING: Removing unreachable block (ram,0x82e3208c) */

unsigned __int64 fn_82E320B8(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  if (param_1 == 0x10070) {
    uVar1 = fn_82E66740();
    uVar1 = fn_82E66BD8(uVar1,param_2);
    return uVar1;
  }
  return 0xffffffffc00d36e3;
}

