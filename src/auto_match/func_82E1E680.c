extern int fn_82E21098();
extern int fn_82E21778();


void fn_82E1E680(int param_1,unsigned __int64 param_2)

{
  if (*(char *)(param_1 + 0xe) != '\0') {
    RtlEnterCriticalSection(param_1 + 0x20);
  }
  fn_82E21098(*(unsigned int *)(param_1 + 0x48));
  fn_82E21778(*(unsigned int *)(param_1 + 0x48),param_2,*(unsigned int *)(param_1 + 4));
  return;
}

