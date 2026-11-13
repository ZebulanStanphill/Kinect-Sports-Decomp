extern int RtlTryEnterCriticalSection();


void fn_82A40110(__int64 param_1)

{
  RtlTryEnterCriticalSection(param_1 + 4);
  return;
}
