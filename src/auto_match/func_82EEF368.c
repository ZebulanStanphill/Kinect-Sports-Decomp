extern int fn_82EEF208();


/* WARNING: Removing unreachable block (ram,0x82eef3c0) */

unsigned __int64 fn_82EEF368(int param_1)

{
  unsigned __int64 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = 0xffffffff8000ffff;
  }
  else {
    uVar1 = fn_82EEF208();
  }
  return uVar1;
}

