typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
typedef struct { int a; void (*assertFn)(int, int, int, const char *, const char *, int); } Glob_83276774;
extern Glob_83276774 lbl_83276774;
typedef struct { int f0; int state; int f8; int fc; float f10; float f14; int f18; } Obj_82465160;

void fn_82465160(Obj_82465160 *o, int state)
{
  if (state == 0xb) {
    o->f10 = o->f14;
    if (lbl_83276774.assertFn != 0) {
      lbl_83276774.assertFn(0,0,1,"PlayerCalibration::Wipe::SetState","D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\scenecontroller\\scenecontroller_playercalibration\\scenecontroller_playercalibration_effect\\scenecontroller_playercalibration_effect_wipe.cpp",0x4a);
    }
    o->f18 = 1;
  }
  o->state = state;
}
