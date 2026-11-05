typedef struct { char pad[0xfc]; struct { char pad[8]; void *f8; } *fc; } Inner_8300D3B0;
typedef struct { char pad[4]; struct { char pad[0x14]; Inner_8300D3B0 *f14; } *f4; } Hdr_8300D3B0;
typedef struct { char pad[0xc]; float fc; char pad2[0x2c - 0x10]; unsigned short f2c; unsigned short f2e; } Info_8300D3B0;
typedef struct { void *data; } Buf_8300D3B0;

typedef struct {
  char pad0[4];
  struct { char pad[0x14]; Inner_8300D3B0 *f14; } *f4;
  char pad8[8];
  void *f10;
  char pad14[8];
  unsigned short f1c;
  unsigned short f1e;
  char pad20[0x3a0 - 0x20];
  Buf_8300D3B0 *f3a0;
  char f3a4;
} Obj_8300D3B0;

extern unsigned fn_8300D348(char *, void *);
extern Info_8300D3B0 *fn_82FEFD50(void *);
extern void *fn_82FA5060(unsigned, int);
extern int fn_83037510(Buf_8300D3B0 *, unsigned short, unsigned short);
extern void *memcpy(void *, const void *, unsigned);
extern unsigned lbl_831BC770;

int fn_8300D3B0(char *self, Obj_8300D3B0 *o)
{
  Inner_8300D3B0 *in;
  void *key;
  Info_8300D3B0 *info;
  void *src;
  unsigned short cnt;
  Buf_8300D3B0 *b;

  if (o->f3a4 == 0) {
    in = o->f4->f14;
    if (in != 0)
      key = in->fc->f8;
    else
      key = 0;
    info = fn_82FEFD50(key);
    if (info != 0 && *(unsigned char *)(self + 0x4d) != 0 && fn_8300D348(self, key) != 0) {
      src = o->f10;
      cnt = o->f1c;
      b = (Buf_8300D3B0 *)fn_82FA5060(lbl_831BC770, 0x10);
      if (b != 0) {
        b->data = 0;
        if (0.1f < info->fc && fn_83037510(b, cnt, info->f2c) == 1) {
          memcpy(b->data, src, (info->f2e >> 13) * cnt * 4);
          *(unsigned short *)((char *)b + 0xe) = o->f1e;
        }
        o->f3a0 = b;
        return 1;
      }
    }
  }
  return 0;
}
