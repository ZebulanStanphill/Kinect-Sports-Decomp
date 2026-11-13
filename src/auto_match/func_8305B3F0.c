extern int fn_82F6E7A8();


void fn_8305B3F0(int param_1,unsigned int param_2)

{
  if (param_2 == 0) {
    fn_82F6E7A8("WwiseMemoryProvider::SetAllocator( - allocator set to NULL. Is this really what's intended?\n");
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

