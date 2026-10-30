typedef struct CRITICAL_SECTION { int v[7]; } CRITICAL_SECTION;
extern void RtlEnterCriticalSection(CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(CRITICAL_SECTION *cs);
typedef struct Lock { int pad[3]; CRITICAL_SECTION cs; } Lock;
typedef struct Inner { char pad[0x20]; int h; } Inner;
typedef struct S {
  char pad0[0xc]; Inner *inner; int x10; char pad14[4];
  Lock lock;            /* 0x18, cs at 0x24 */
  char pad40[4]; int x44; char pad48[0xc];
  CRITICAL_SECTION cs54; /* 0x54 */
  char pad70[0xc]; unsigned int x7c; char pad80[0xc]; unsigned char x8c;
} S;
extern void fn_826D6D40(int h);
void fn_826D7428(S *s)
{
  Lock *l = &s->lock; RtlEnterCriticalSection(&l->cs); s->x44 = 0; RtlLeaveCriticalSection(&l->cs); RtlEnterCriticalSection(&s->cs54); s->x10 = 0; RtlLeaveCriticalSection(&s->cs54);
  if ((int)(s->x7c & 0xf) <= 1) s->x8c = 1;
  fn_826D6D40(s->inner->h);
}
