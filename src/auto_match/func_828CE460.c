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
typedef struct { unsigned int first; unsigned int second; } Pair_828CE460;
typedef struct { void *ptr; void *rc; } SP_828CE460;
extern void fn_822315A0(void *);
extern void *fn_823F2E20(void *, void *);
extern void *fn_8265C9E0(unsigned int);
extern void fn_828A6130(void *, void *, unsigned int, unsigned int);
extern void fn_828CCDD8(Pair_828CE460 *, void *, unsigned int *);
extern void fn_828CD0D8(unsigned int *, void *, unsigned int *);
extern SP_828CE460 *fn_828CD4E0(SP_828CE460 *, void *);
extern unsigned char fn_828CD8A8(void *, void *);
extern void **fn_828CE388(void *, unsigned int *);

typedef struct { char pad[0x84]; unsigned int key; char pad2[0xc0 - 0x88]; unsigned char flag; } Obj_828CE460;
typedef struct { int pad0; unsigned int cur; char map[4]; unsigned int end; } Mgr_828CE460;

void fn_828CE460(Mgr_828CE460 *param_1, Obj_828CE460 *param_2)
{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar7;
  void *map;
  void **pp;
  struct { unsigned int key; unsigned int it; unsigned int er[2]; Pair_828CE460 pr; SP_828CE460 sp; } L;
  void *q;

  uVar1 = param_1->cur;
  L.key = param_2->key;
  uVar7 = (uVar1 + 0x40) & 0xff;
  uVar2 = (uVar1 - 0x40) & 0xff;
  if (((uVar2 < uVar7) && (L.key >= uVar2) && (L.key < uVar7)) ||
      ((uVar7 < uVar2) && ((L.key >= uVar2) || (L.key < uVar7)))) {
    if (L.key != uVar1) {
      param_1->cur = L.key;
      uVar2 = (L.key - 0x40) & 0xff;
      uVar7 = ((L.key + 0x40) & 0xff) + 1;
      if (uVar7 != uVar2) {
        do {
          L.it = uVar7;
          fn_828CCDD8(&L.pr, (char *)param_1 + 8, &L.it);
          fn_828A6130(L.er, (char *)param_1 + 8, L.pr.first, L.pr.second);
          uVar7 = (uVar7 + 1) & 0xff;
        } while (uVar7 != uVar2);
      }
    }
    map = (char *)param_1 + 8;
    fn_828CD0D8(&L.it, map, &L.key);
    if (L.it == param_1->end) {
      unsigned int *p = fn_8265C9E0(0x14);
      if (p != 0) {
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;
        p[3] = 0;
        q = p;
      } else {
        q = 0;
      }
      fn_823F2E20(fn_828CE388(map, &L.key), fn_828CD4E0(&L.sp, q));
      if (L.sp.rc != 0) {
        fn_822315A0(L.sp.rc);
      }
    }
    pp = fn_828CE388(map, &L.key);
    if (fn_828CD8A8(*pp, param_2) != 0) {
      fn_828CCDD8(&L.pr, map, &L.key);
      fn_828A6130(L.er, map, L.pr.first, L.pr.second);
    }
  }
  else {
    param_2->flag = 1;
  }
}
