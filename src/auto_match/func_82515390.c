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
extern void fn_82230110(int, const char *);
extern void fn_8288ACA0(int);
extern char lbl_82196582[];

int fn_82515390(int param_1, int param_2, unsigned int param_3)
{
  const char *s;

  if (param_3 < 0x17) {
    fn_8288ACA0(param_1);
  }
  else {
    switch (param_3) {
    case 0x17: s = "liveMainRelease()"; break;
    case 0x18: s = "Jumping scene"; break;
    case 0x19: s = "Invalid profile"; break;
    case 0x1a: s = "Profiles changed"; break;
    case 0x1b: s = "Profile not gold or connected to live"; break;
    case 0x1c: s = "Migration during arbitration"; break;
    case 0x1e: s = "Matchmaking stop"; break;
    case 0x1f: s = "User requested to change session parameters"; break;
    case 0x1d: s = "Manual left game from pause screen"; break;
    case 0x20: s = "Left session with scene lifetime because the scene was killed"; break;
    default: s = lbl_82196582;
    }
    fn_82230110(param_1, s);
  }
  return param_1;
}
