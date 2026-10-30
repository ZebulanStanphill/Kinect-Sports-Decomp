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
typedef struct { unsigned f0; unsigned f4; unsigned f8; char pad[0x18 - 0xc]; unsigned f18; unsigned f1c; } Mon_82653918;
typedef struct { char pad[0x20]; Mon_82653918 *f20; } Dbg_82653918;
typedef struct { unsigned f0; char pad[0x14 - 4]; unsigned f14; char pad2[0x6c - 0x18]; } Ev_82653918;
extern Dbg_82653918 **__imp_KeDebugMonitorData;
extern unsigned *__imp_VdGlobalDevice;
extern unsigned *__imp_VdGlobalXamDevice;
extern void fn_82645688();
extern void fn_826458F8(void *, int);
extern void fn_82647620(void *);
extern void fn_82652910(void *);
extern void fn_82653408(void *);
extern void fn_826534B8(unsigned);
extern void fn_82653510(void *);
extern void fn_82657168(void *);
extern void fn_8265C990(unsigned, unsigned);
extern void fn_82A1E650(unsigned, int);
extern void fn_82A1E658(unsigned);
extern unsigned char lbl_83275D96;
extern char lbl_831BEA50[];
extern char lbl_831BEA60[];
extern int KeGetCurrentProcessType(void);
extern int KeSetEvent(void *, int, int);
extern void VdSetSystemCommandBufferGpuIdentifierAddress(int);
extern void VdSetGraphicsInterruptCallback(int, int);
extern void VdShutdownEngines(void);
extern int ExRegisterTitleTerminateNotification(void *, int);

void fn_82653918(char *p)
{
  int t;
  int n;
  char *ev;
  unsigned *pp;
  Mon_82653918 *mon;
  Dbg_82653918 *dbg;
  unsigned q;

  if (*(unsigned *)(p + 0x30) != 0) {
    fn_82647620(p);
  }
  if ((*(unsigned char *)(p + 0x2abc) & 0x80) == 0) {
    fn_82653510(p);
    if (*(unsigned *)(p + 0x30) != 0) {
      fn_82645688();
    }
    if (*(unsigned *)(p + 0x30) != 0) {
      fn_82645688(p);
    }
    if (*(unsigned *)(p + 0x5560) != 0) {
      fn_8265C990(*(unsigned *)(p + 0x5560), 0x24800000);
      *(unsigned *)(p + 0x5560) = 0;
    }
    if (*(unsigned *)(p + 0x555c) != 0) {
      fn_8265C990(*(unsigned *)(p + 0x555c), 0xb1800000);
      *(unsigned *)(p + 0x555c) = 0;
      *(unsigned *)(p + 0x5564) = 0;
    }
    *(unsigned *)(p + 0x5568) = 0;
    t = KeGetCurrentProcessType();
    if (t != 2) {
      fn_82657168(p);
      lbl_83275D96 = 0;
    }
    fn_82652910(p);
    VdSetSystemCommandBufferGpuIdentifierAddress(0);
    fn_82653408(p);
    fn_8265C990(*(unsigned *)(p + 0x5e90), 0xb1800000);
    fn_8265C990(*(unsigned *)(p + 0x5e98), 0x24800000);
    *(unsigned *)(p + 0x5e90) = 0;
    *(unsigned *)(p + 0x5e98) = 0;
    *(unsigned __int64 *)(p + 0x5ea0) = 0;
    fn_8265C990(*(unsigned *)(p + 0x5ea8), 0xb1800000);
    *(unsigned *)(p + 0x5ea8) = 0;
    fn_8265C990(*(unsigned *)(p + 0x5eb0), 0x24800000);
    *(unsigned *)(p + 0x5eb0) = 0;
    *(unsigned *)(p + 0x2ac8) = 0;
    fn_8265C990(*(unsigned *)(p + 0x2ec8), 0xb1800000);
    ev = p + 0x2c7c;
    n = 6;
    do {
      if (*(unsigned *)(ev + 0x10) != 0) {
        KeSetEvent(ev, 1, 0);
      }
      n = n - 1;
      ev = ev + 0x6c;
    } while (n != 0);
    pp = (unsigned *)(p + 0x2c8c);
    n = 6;
    do {
      if (*pp != 0) {
        fn_82A1E650(*pp, -1);
        fn_82A1E658(*pp);
      }
      n = n - 1;
      pp = pp + 0x1b;
    } while (n != 0);
    *(unsigned *)(p + 0x2aec) = 0;
    *(unsigned *)(p + 0x2af0) = 0;
    fn_8265C990(*(unsigned *)(p + 0x36a8), 0xb1800000);
    dbg = *__imp_KeDebugMonitorData;
    mon = dbg ? dbg->f20 : 0;
    if (mon != 0) {
      if (8 < mon->f0) {
        mon->f4 = 0;
        mon->f8 = 0;
      }
      mon->f18 = 0;
      mon->f1c = 0;
    }
    VdSetGraphicsInterruptCallback(0, 0);
    fn_826458F8(p, 0);
    fn_8265C990(*(unsigned *)(p + 0x2a94), 0xb1800000);
    fn_8265C990(*(unsigned *)(p + 0x2a90), 0xb1800000);
    *(unsigned *)(p + 0x2a94) = 0;
    *(unsigned *)(p + 0x2a90) = 0;
    t = KeGetCurrentProcessType();
    if (t != 2) {
      *__imp_VdGlobalDevice = 0;
      ExRegisterTitleTerminateNotification(lbl_831BEA50, 0);
      ExRegisterTitleTerminateNotification(lbl_831BEA60, 0);
    } else {
      *__imp_VdGlobalXamDevice = 0;
    }
    VdShutdownEngines();
  }
  if (*(unsigned *)(p + 0x4230) != 0) {
    fn_8265C990(*(unsigned *)(p + 0x4230), 0xb1800000);
  }
  q = *(unsigned *)(p + 0x551c);
  if (q != 0) {
    fn_826534B8(*(unsigned *)(q + 0xc));
    *(unsigned *)(q + 0xc) = 0;
    fn_8265C990(*(unsigned *)(q + 8), 0xb1800000);
    fn_8265C990(q, 0x24800000);
  }
}
