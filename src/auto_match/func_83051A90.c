typedef struct CS {
  int v[7];
} CS;

typedef struct Dev {
  char pad0[0x10];
  CS cs;
  char pad2c[0x50 - 0x2c];
  __int64 stamp;
} Dev;

typedef struct Base {
  char pad0[0x38];
  CS cs;
  __int64 stamp;
  Dev *dev;
  char pad64[0x74 - 0x64];
  unsigned int pad74 : 3;
  unsigned int a : 1;
  unsigned int b : 1;
  unsigned int pad74b : 2;
  unsigned int c : 1;
  unsigned int rest74 : 24;
  char pad78[0x31];
  unsigned char f80 : 1;
  unsigned char f40 : 1;
  unsigned char restf : 6;
} Base;

#define B(p) ((Base *)((char *)(p) - 0x78))

extern void RtlEnterCriticalSection(CS *cs);
extern void RtlLeaveCriticalSection(CS *cs);
extern void fn_830514A8(Base *b);
static void refresh(Base *b) { b->f80 = 1; b->c = (unsigned char)(!b->a && !b->b); fn_830514A8(b); }
extern void fn_83055E98(Dev *d);

char fn_83051A90(char *p)
{
  CS *cs;

  if (!B(p)->f80) {
    RtlEnterCriticalSection(&B(p)->cs);
    refresh(B(p));
    RtlLeaveCriticalSection(&B(p)->cs);
    cs = &B(p)->dev->cs;
    RtlEnterCriticalSection(cs);
    fn_83055E98(B(p)->dev);
    RtlLeaveCriticalSection(cs);
    B(p)->stamp = B(p)->dev->stamp;
  }
  return B(p)->f40 ? 2 : 1;
}
