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
typedef struct Y_8240B0C8 { char pad[0xd4]; unsigned f; } Y_8240B0C8;
typedef struct X_8240B0C8 { char pad[0x168]; Y_8240B0C8 *y; } X_8240B0C8;
struct Owner_8240B0C8;
typedef struct Vt_8240B0C8 { void *s0; X_8240B0C8 *(*s1)(struct Owner_8240B0C8 *); X_8240B0C8 *(*s2)(struct Owner_8240B0C8 *); } Vt_8240B0C8;
typedef struct Owner_8240B0C8 { Vt_8240B0C8 *vt; } Owner_8240B0C8;
typedef struct Obj_8240B0C8 { char pad[0xc]; Owner_8240B0C8 *owner; int pad2; int state; } Obj_8240B0C8;
typedef struct Cfg_8240B0C8 { char pad[4]; char flag; } Cfg_8240B0C8;
extern Cfg_8240B0C8 *fn_82250A18(void);
extern Cfg_8240B0C8 *lbl_832975B0;

static Cfg_8240B0C8 *get(void) { if (lbl_832975B0 != 0) return lbl_832975B0; return fn_82250A18(); }
int fn_8240B0C8(Obj_8240B0C8 *o)
{
  Y_8240B0C8 *a, *b; X_8240B0C8 *x1, *x2;
  if (o->state == 1) {
    if (get()->flag != 0) {
      x1 = o->owner->vt->s1(o->owner); a = x1->y;
      x2 = o->owner->vt->s2(o->owner); b = x2->y;
      if (a != 0 && a->f != 0) return 0;
      if (b != 0 && b->f != 0) return 0;
    }
  }
  return o->state;
}
