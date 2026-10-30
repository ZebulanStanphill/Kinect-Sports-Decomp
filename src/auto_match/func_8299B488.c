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
extern void *memcpy(void *, const void *, unsigned int);
typedef struct Buf_8299B488 { int pad; unsigned int n1; void *p1; unsigned int n2; void *p2; } Buf_8299B488;
typedef struct Dst_8299B488 { int pad[2]; void *p1; int pad2; void *p2; } Dst_8299B488;
typedef struct Ent_8299B488 { char pad[0x38]; int v; } Ent_8299B488;
typedef struct Obj_8299B488 {
  char pad[0x14]; Ent_8299B488 **ents; Buf_8299B488 **dst; char pad2[0x29c]; Buf_8299B488 **src; Ent_8299B488 **sents; unsigned int nents; unsigned int nbufs;
} Obj_8299B488;

int fn_8299B488(Obj_8299B488 *o)
{
  unsigned int i;
  for (i = 0; i < o->nbufs; i++) {
    memcpy(o->dst[i]->p1, o->src[i]->p1, o->src[i]->n1 << 2);
    memcpy(o->dst[i]->p2, o->src[i]->p2, o->src[i]->n2 << 2);
  }
  for (i = 0; i < o->nents; i++) {
    Ent_8299B488 *s = o->sents[i];
    Ent_8299B488 *d = o->ents[i];
    d->v = s->v;
  }
  return 0;
}
