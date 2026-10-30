extern int fn_82A5D578(void);
struct Cl_82A5D768 { void *cb; int ctx; };
extern int XAudioGetSpeakerConfig(unsigned *);
extern int XAudioRegisterRenderDriverClient(struct Cl_82A5D768 *, int *);
struct O_82A5D768 { char p0[0x1c]; int f1c; unsigned f20; char p1[0x10]; };
int fn_82A5D768(struct O_82A5D768 *o)
{
  unsigned cfg;
  struct Cl_82A5D768 cl;
  XAudioGetSpeakerConfig(&cfg);
  cl.ctx = (int)o - 4;
  *(unsigned __int64 *)((char *)o + 0x34) = 0;
  cl.cb = fn_82A5D578;
  o->f20 = (((cfg & 0x80000000u) ? 2 : 4) * 0x100);
  XAudioRegisterRenderDriverClient(&cl, &o->f1c);
  return 0;
}
