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
extern unsigned char fn_82695608(char *, int);
extern void fn_82696330(char *);

struct Ctx_82717A90;
typedef struct Sink_82717A90 {
  struct SinkVt_82717A90 *vt;
} Sink_82717A90;
typedef struct SinkVt_82717A90 {
  int pad[11];
  void (*f2c)(Sink_82717A90 *, int, int, char *);
} SinkVt_82717A90;
typedef struct Obj_82717A90 {
  struct ObjVt_82717A90 *vt;
  int pad4[0x19];
  Sink_82717A90 sink;
  Sink_82717A90 *sinkp;
  int pad70[0x7];
  struct { unsigned pad : 27; unsigned f : 1; unsigned rest : 4; } flags;
  int pad90[0xb];
  int alt;
} Obj_82717A90;
typedef struct ObjVt_82717A90 {
  int pad[22];
  int (*f58)(Obj_82717A90 *);
} ObjVt_82717A90;

int fn_82717A90(Obj_82717A90 *self)
{
  int iVar3;
  int ok;
  int sp;
  char buf[24];

  iVar3 = self->vt->f58(self);
  buf[0] = 0;
  if (iVar3 != 0) {
    if ((unsigned char)self->flags.f != 0) {
      if (self->alt != 0) {
        self->sink.vt->f2c(&self->sink, iVar3 + 0x78, *(unsigned *)(iVar3 + 0x78) + 0x1e8, buf);
      }
      else {
        sp = (int)self->sinkp;
        if (sp != 0) {
          Sink_82717A90 *s = (Sink_82717A90 *)(sp + 0x10);
          s->vt->f2c(s, iVar3 + 0x78, *(unsigned *)(iVar3 + 0x78) + 0x1e8, buf);
        }
      }
      if (fn_82695608(buf, iVar3) != 0) {
        fn_82696330(buf);
        return 1;
      }
    }
  }
  fn_82696330(buf);
  return 0;
}
