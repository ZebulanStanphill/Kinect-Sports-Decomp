extern int fn_82F6E7A8();


int fn_830570A8(unsigned int *param_1)

{
  if (*param_1 == 0) {
    fn_82F6E7A8("Error: NULL memory provider, MemoryAllocator::SetCurrentMemoryProvider() must be called at launch\n");
  }
  return *param_1;
}

