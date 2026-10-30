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
extern int fn_82FA9DC8();
extern unsigned char fn_8301A4F8();
typedef struct T_82FAA820 { char pad[0x14]; unsigned int f14; } T_82FAA820;
typedef struct E_82FAA820 { int key; int a; T_82FAA820 *b; } E_82FAA820;
typedef struct V_82FAA820 { E_82FAA820 *first; E_82FAA820 *last; unsigned int cap; } V_82FAA820;
typedef struct O_82FAA820 { char pad[0xc]; unsigned int f0c; int pad2; V_82FAA820 v; } O_82FAA820;

static void Erase_82FAA820(V_82FAA820 *v, E_82FAA820 *e)
{
  if ((unsigned int)(v->last - v->first) > 1) {
    *e = v->last[-1];
  }
  v->last = v->last - 1;
}

void fn_82FAA820(O_82FAA820 *self, V_82FAA820 *out, int limit)
{
  E_82FAA820 *e;
  unsigned int n;
  unsigned char any = 0;

  e = self->v.first;
  if (e != self->v.last) {
    do {
      if (e->key > limit && (e->a != 0 || (e->b->f14 & 0x80000000) == 0)) {
        n = out->last - out->first;
        if (n < out->cap || fn_8301A4F8(out, 5)) {
          if (n < out->cap) {
            E_82FAA820 *d = out->last;
            out->last = d + 1;
            if (d != 0) {
              *d = *e;
            }
          }
        }
        Erase_82FAA820(&self->v, e);
        any = 1;
      }
      else {
        e = e + 1;
      }
    } while (e != self->v.last);
  }
  if (any) {
    fn_82FA9DC8(self, -(int)self->f0c);
  }
}
