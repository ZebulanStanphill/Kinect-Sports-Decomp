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
typedef struct Impl_823EFE68 Impl_823EFE68;
typedef struct ImplVT_823EFE68 {
  void *s0, *s4, *s8;
  void (*fc)(Impl_823EFE68 *, int);
} ImplVT_823EFE68;
struct Impl_823EFE68 {
  ImplVT_823EFE68 *vt;
};
typedef struct Fn_823EFE68 {
  int w[4];
  Impl_823EFE68 *impl;
} Fn_823EFE68;

extern void fn_82359C18(Fn_823EFE68 *);
extern void fn_82329730(void *, Fn_823EFE68 *);
extern void fn_823F2E90(void *, Fn_823EFE68 *);
extern void fn_823F2F20(void *, Fn_823EFE68 *);
extern void fn_82383300(void *, Fn_823EFE68 *);

void fn_823EFE68(char *p)
{
  Fn_823EFE68 tmp;
  tmp.impl = 0;
  {
    Fn_823EFE68 *m = (Fn_823EFE68 *)(p + 0x60);
    if (m != &tmp) {
      Impl_823EFE68 *i = m->impl;
      if (i != 0) {
        i->vt->fc(i, (void *)i != (void *)m);
        m->impl = 0;
      }
      m->impl = 0;
    }
  }
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x28, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0xa8, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0xa8, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  {
    Fn_823EFE68 *m = (Fn_823EFE68 *)(p + 0x158);
    if (m != &tmp) {
      Impl_823EFE68 *i = m->impl;
      if (i != 0) {
        i->vt->fc(i, (void *)i != (void *)m);
        m->impl = 0;
      }
      m->impl = 0;
    }
  }
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x120, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  {
    Fn_823EFE68 *m = (Fn_823EFE68 *)(p + 0x1c8);
    if (m != &tmp) {
      Impl_823EFE68 *i = m->impl;
      if (i != 0) {
        i->vt->fc(i, (void *)i != (void *)m);
        m->impl = 0;
      }
      m->impl = 0;
    }
  }
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x190, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0x270, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x270, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0x2e8, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x2e8, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0x360, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x360, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0x3d8, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x3d8, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  {
    Fn_823EFE68 *m = (Fn_823EFE68 *)(p + 0x238);
    if (m != &tmp) {
      Impl_823EFE68 *i = m->impl;
      if (i != 0) {
        i->vt->fc(i, (void *)i != (void *)m);
        m->impl = 0;
      }
      m->impl = 0;
    }
  }
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x200, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0x450, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x450, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0x4c8, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x4c8, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  {
    Fn_823EFE68 *m = (Fn_823EFE68 *)(p + 0x578);
    if (m != &tmp) {
      Impl_823EFE68 *i = m->impl;
      if (i != 0) {
        i->vt->fc(i, (void *)i != (void *)m);
        m->impl = 0;
      }
      m->impl = 0;
    }
  }
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x540, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2E90(p + 0x5b0, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82383300(p + 0x5b0, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0x618, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x618, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0x690, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x690, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2E90(p + 0x710, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82383300(p + 0x710, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  {
    Fn_823EFE68 *m = (Fn_823EFE68 *)(p + 0x7b0);
    if (m != &tmp) {
      Impl_823EFE68 *i = m->impl;
      if (i != 0) {
        i->vt->fc(i, (void *)i != (void *)m);
        m->impl = 0;
      }
      m->impl = 0;
    }
  }
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x778, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  {
    Fn_823EFE68 *m = (Fn_823EFE68 *)(p + 0x828);
    if (m != &tmp) {
      Impl_823EFE68 *i = m->impl;
      if (i != 0) {
        i->vt->fc(i, (void *)i != (void *)m);
        m->impl = 0;
      }
      m->impl = 0;
    }
  }
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x7f0, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0x890, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x890, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  {
    Fn_823EFE68 *m = (Fn_823EFE68 *)(p + 0x968);
    if (m != &tmp) {
      Impl_823EFE68 *i = m->impl;
      if (i != 0) {
        i->vt->fc(i, (void *)i != (void *)m);
        m->impl = 0;
      }
      m->impl = 0;
    }
  }
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x930, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0x9c0, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0x9c0, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0xa58, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0xa58, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0xaf8, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0xaf8, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0xb98, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0xb98, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0xc38, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0xc38, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0xcd0, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0xcd0, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0xd40, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0xd40, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_823F2F20(p + 0xdb0, &tmp);
  fn_82359C18(&tmp);
  tmp.impl = 0;
  fn_82329730(p + 0xdb0, &tmp);
  fn_82359C18(&tmp);
}
