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
extern int fn_8267C4F0();
extern int fn_82683F88();


struct Stream_82684D98;
typedef struct VtS_82684D98 { char pad[0x20]; int (*check)(struct Stream_82684D98 *); } VtS_82684D98;
typedef struct Stream_82684D98 { VtS_82684D98 *vt; } Stream_82684D98;
struct Fs_82684D98;
typedef struct VtF_82684D98 { int pad; Stream_82684D98 *(*open)(struct Fs_82684D98 *, const char *, int, int); } VtF_82684D98;
typedef struct Fs_82684D98 { VtF_82684D98 *vt; } Fs_82684D98;
typedef struct Loader_82684D98 { char pad[0xc]; char log[1]; } Loader_82684D98;

Stream_82684D98 *fn_82684D98(Fs_82684D98 *fs, const char *name, Loader_82684D98 *ld, int a, int b)
{
  Stream_82684D98 *p;

  p = fs->vt->open(fs, name, a, b);
  if (p != 0 && p->vt->check(p) == 0) {
    return p;
  }
  if (ld != 0) {
    fn_82683F88(ld->log, "Error: GFxLoader failed to open '%s'\n", name);
  }
  if (p != 0) {
    fn_8267C4F0(p);
  }
  return 0;
}
