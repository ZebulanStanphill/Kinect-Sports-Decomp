#include "havok/hkString.h"

typedef struct Stream_82CEDA50 Stream_82CEDA50;
typedef struct {
  void *f0, *f4, *f8, *fc;
  void (*write)(Stream_82CEDA50 *, const char *, unsigned);
} StreamVtbl_82CEDA50;
struct Stream_82CEDA50 { StreamVtbl_82CEDA50 *vt; };
typedef struct Ostream_82CEDA50 {
  void *vt;
  int f4;
  Stream_82CEDA50 *writer;
} Ostream_82CEDA50;
extern "C" char lbl_82196F18[];
extern "C" char lbl_82196F10[];

static __forceinline Ostream_82CEDA50 *WriteString(Ostream_82CEDA50 *self, const char *str)
{
  Stream_82CEDA50 *s = self->writer;
  if (str != 0) {
    s->vt->write(s, str, hkString::strLen(str));
  } else {
    s->vt->write(s, "(null)", 6);
  }
  return self;
}

extern "C" Ostream_82CEDA50 *fn_82CEDA50(Ostream_82CEDA50 *self, char b)
{
  return WriteString(self, b ? lbl_82196F18 : lbl_82196F10);
}
