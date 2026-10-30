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
extern int ExGetXConfigSetting(int, int, void *, int, unsigned short *);
extern unsigned int XGetGameRegion(void);

int fn_82A1E230(void)
{
  unsigned short size;
  unsigned int val;
  int hr;
  unsigned int region;
  unsigned int r;
  size = 0;
  hr = ExGetXConfigSetting(3, 9, &val, 4, &size);
  val = (hr >= 0) ? val : 0;
  r = val;
  if (r == 0 || r > 0xc) {
    region = XGetGameRegion();
    if ((region & 0xff00) == 0x100) {
      if (region == 0x101) {
        return 2;
      }
      return 7;
    }
    return 1;
  }
  return r;
}
