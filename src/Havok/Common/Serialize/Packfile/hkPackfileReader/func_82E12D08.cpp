#include "havok/hkOstream.h"

extern "C" unsigned int *auStack_220;
extern "C" unsigned int *auStack_230;
extern "C" int fn_82CEE578(...);
extern "C" int fn_82E0E658(...);
extern "C" unsigned int *lbl_8323B464;

extern "C" void fn_82E12D08(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned char auStack_230 [16];
  unsigned char auStack_220 [512];
  
  uVar2 = fn_82E0E658();
  iVar4 = hkString::strCmp(reinterpret_cast<const char *>(*(unsigned int *)(param_1 + 0x14)), reinterpret_cast<const char *>(uVar2));
  if (iVar4 != 0) {
    fn_82CEE578(auStack_230,auStack_220,0x200);
    uVar2 = fn_82E0E658();
    uVar1 = *(unsigned int *)(param_1 + 0x14);
    *(hkOstream *)auStack_230 << "Loaded data contains version " << (const char *)uVar1
                              << " but the current version is " << (const char *)uVar2
                              << ". Did you call hkVersionUtil::updateToCurrentVersion() or did it fail?";
    (*(int (**)(unsigned int *, int, unsigned int, const void *, const char *, int))(*lbl_8323B464 + 0xc))
              (lbl_8323B464,1,0x7aef6c06,auStack_220,".\\Packfile\\hkPackfileReader.cpp",0x76);
                    /* WARNING: Subroutine does not return */
    ((hkOstream *)auStack_230)->hkOstream::~hkOstream();
  }
  return;
}

