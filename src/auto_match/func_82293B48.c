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
extern int fn_822315A0(void *);
extern int fn_82273C88(void *);
extern int fn_82273CD8(void *, int);
extern int *fn_8229AE10(void *, void *);
extern int fn_82672C20(int, const char *, void *, int);

typedef struct Val_82293B48 {
  int m0;
  int m4;
  union {
    double d;
    int i;
  } v;
} Val_82293B48;

typedef struct Ref_82293B48 {
  int m0;
  void *rc;
} Ref_82293B48;

void fn_82293B48(int *self, int count)
{
  Val_82293B48 arg;
  Ref_82293B48 ref;

  self[0x610] = count;
  if (count > 0) {
    arg.m0 = 0;
    arg.m4 = 0;
    fn_82273CD8(&arg, 3);
    arg.v.d = (double)count;
    fn_82672C20(*fn_8229AE10(&ref, self), "_root.scorecardCtrl.setNumberTeams", &arg, 1);
    if (ref.rc != 0) {
      fn_822315A0(ref.rc);
    }
    fn_82273C88(&arg);
  }
}
