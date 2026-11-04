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
extern int fn_82A371C8(void *, unsigned int *, unsigned int, int);
extern int NtWaitForSingleObjectEx(void *, int, int, void *);

typedef struct Buf_82A37298 {
  unsigned int k0;
  unsigned int k1;
  unsigned int m8;
  unsigned int mc;
  int m10;
  int m14;
  unsigned int m18;
  unsigned int m1c;
  unsigned int m20;
  void *event;
} Buf_82A37298;

typedef struct Obj_82A37298 {
  int pad0;
  Buf_82A37298 bufs[2];
  unsigned int cur;
} Obj_82A37298;

typedef struct Tmp_82A37298 {
  int a;
  int b;
} Tmp_82A37298;

typedef int (*Decomp_82A37298)(const char *, int, int, int, int, Tmp_82A37298 *, int, int *);
typedef void (*Post_82A37298)(int, int);

Buf_82A37298 *fn_82A37298(Obj_82A37298 *obj, unsigned int *key, int u, unsigned int *key2, int size,
                          Decomp_82A37298 decomp, Post_82A37298 post, int ctx)
{
  int hr;
  int out;
  int flag;
  Tmp_82A37298 tmp;
  Buf_82A37298 *b;

  b = &obj->bufs[obj->cur];
  if (key[0] != b->k0 || key[1] != b->k1) {
    obj->cur = obj->cur ^ 1;
    b = &obj->bufs[obj->cur];
    if (key[0] != b->k0 || key[1] != b->k1) {
      fn_82A371C8(obj, key, obj->cur, u);
    }
  }
  if (key2[0] != 0 &&
      (key2[0] != obj->bufs[obj->cur ^ 1].k0 || key2[1] != obj->bufs[obj->cur ^ 1].k1)) {
    hr = 0xc0000001;
    out = 0;
    flag = decomp != 0 && key2[2] != key[2];
    if (flag) {
      tmp.b = key2[1] * size;
      hr = decomp("XctdDecompression", ctx, 0, 0, size, &tmp, 0, &out);
    }
    fn_82A371C8(obj, key2, obj->cur ^ 1, size);
    if (flag && hr >= 0) {
      post(obj->bufs[obj->cur ^ 1].m10, out);
    }
  }
  b = &obj->bufs[obj->cur];
  if (b->m10 == 0x103) {
    NtWaitForSingleObjectEx(b->event, 1, 0, 0);
    b = &obj->bufs[obj->cur];
    b->m10 = b->m14;
    b = &obj->bufs[obj->cur];
    b->mc = b->m18;
  }
  return &obj->bufs[obj->cur];
}
