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
extern void *fn_82E4FE08(unsigned int);
extern int fn_82E50F00(void *, int);
extern int fn_82E51028(void *, int);
extern unsigned char *fn_82E52428(void *, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82E4B390(unsigned char *self, unsigned int key, void **out, unsigned int *outSize)
{
  unsigned char *rec;
  void *buf;
  int hr;

  hr = 0;
  fn_82E50F00(self + 4, 1);
  rec = fn_82E52428(self, key);
  if (rec != 0) {
    if (*(unsigned short *)rec == 0x1011) {
      if (outSize != 0) {
        *outSize = *(unsigned int *)(rec + 8);
      }
      buf = fn_82E4FE08(*(unsigned int *)(rec + 8));
      *out = buf;
      if (buf == 0) {
        hr = 0x8007000e;
      } else {
        memcpy(buf, *(void **)(rec + 0xc), *(unsigned int *)(rec + 8));
      }
    } else {
      hr = 0xc00d36bd;
    }
  } else {
    hr = 0xc00d36e6;
  }
  fn_82E51028(self + 4, 1);
  return hr;
}
