#include "havok/hkString.h"
#include "havok/hkClassMember.h"

extern "C" int fn_82CFFC80(void *, unsigned __int64, unsigned __int64);
extern "C" char *fn_82CFFD50(void *, void *);
extern "C" void *fn_82CFFD68(void *);
extern "C" const hkClassMember *fn_82CFFEF0(void *);

extern "C" void fn_82E0E668(unsigned __int64 param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned __int64 param_4)
{
  char *pcVar4;
  unsigned int uVar1;
  void *uVar2;
  struct { unsigned char c [8]; unsigned char b [8]; unsigned char a [8]; } L;

  fn_82CFFC80(L.a, param_1, param_2);
  fn_82CFFC80(L.b, param_3, param_4);
  pcVar4 = fn_82CFFD50(L.c, L.a);
  if ((*pcVar4 != '\0') && (pcVar4 = fn_82CFFD50(L.c, L.b), *pcVar4 != '\0'))
  {
    uVar1 = fn_82CFFEF0(L.b)->getSizeInBytes();
    uVar2 = fn_82CFFD68(L.a);
    hkString::memCpy(fn_82CFFD68(L.b), uVar2, uVar1);
  }
  return;
}
