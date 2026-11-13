extern unsigned int __imp_ExLoadedCommandLine;


unsigned int GetCommandLineA(void)

{
  return __imp_ExLoadedCommandLine;
}

