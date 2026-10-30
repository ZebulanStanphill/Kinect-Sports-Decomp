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
typedef struct { int pad; int count; } RC_826C9460;
typedef struct { char pad[8]; unsigned f8; char pad2[0x18 - 0xc]; unsigned f18; } Self_826C9460;
typedef struct { void *vt; unsigned id; RC_826C9460 *rc; } Arg_826C9460;
typedef struct { int pad[8]; void (*f20)(void *, unsigned, void *, int, int); } VT_826C9460;
typedef struct { VT_826C9460 *vt; } Tgt_826C9460;
extern void fn_8267C498(RC_826C9460 *);
extern int fn_826957D0(void *, int);
extern Tgt_826C9460 *fn_82696AD0(int, unsigned);
extern RC_826C9460 *fn_826BD928(unsigned);
extern char lbl_8200BDA0[];
extern char lbl_8200C4D4[];

void fn_826C9460(Self_826C9460 *self)
{
  RC_826C9460 *rc;
  Tgt_826C9460 *t;
  Arg_826C9460 a;
  rc = fn_826BD928(self->f8);
  if (rc != 0) {
    rc->count = rc->count + 1;
  }
  t = fn_82696AD0(fn_826957D0(self, 0), self->f18);
  a.vt = lbl_8200BDA0;
  a.id = self->f18;
  a.rc = rc;
  t->vt->f20(t, self->f18 + 0x78, &a, 0, 0);
  a.vt = lbl_8200C4D4;
  if (rc != 0) {
    fn_8267C498(rc);
  }
}
