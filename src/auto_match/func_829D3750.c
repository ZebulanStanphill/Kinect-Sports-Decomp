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


typedef struct Ent_829D36D8 { char pad0[0x1c]; unsigned key; char pad20[0x38]; } Ent_829D36D8;
typedef struct Pool_829D36D8 { char pad[0x8a0]; Ent_829D36D8 e[2]; } Pool_829D36D8;

Ent_829D36D8 *fn_829D3750(Pool_829D36D8 *p, unsigned key)
{
  unsigned i;
  Ent_829D36D8 *e;
  unsigned *k;
  unsigned *k0;

  e = 0;
  k0 = &p->e[0].key;
  for (i = 0, k = k0; i < 2; i++, k += 0x16) {
    if (*k == key) {
      return 0;
    }
  }
  for (i = 0, k = k0; i < 2; i++, k += 0x16) {
    if (*k == 0) {
      e = &p->e[i];
      if (e != 0) {
        e->key = key;
      }
      break;
    }
  }
  return e;
}
