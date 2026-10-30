extern void *memset(void *, int, unsigned int);
extern void (*lbl_8320A4E8[])(void *, void *);
typedef struct Sub_82814BF0 { int f0; void *f4; int pad[3]; } Sub;
typedef struct In_82814BF0 { char pad[0x6c]; Sub sub; } In;
typedef struct Self_82814BF0 { char pad[0x18]; void *f18; In *f1c; } Self;
void fn_82814BF0(Self *s)
{
  In *in = s->f1c;
  Sub *sub = &in->sub;
  if (sub->f4 != 0) lbl_8320A4E8[4](s->f18, sub->f4);
  memset(sub, 0, 0x14);
}
