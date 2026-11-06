typedef struct Ansi_82A1F740 { unsigned short len, max; char *buf; int pad[2]; } Ansi_82A1F740;
typedef struct Info_82A1F740 { char pad[0x28]; long long off; long long x; } Info_82A1F740;
typedef struct Oa_82A1F740 { int root; Ansi_82A1F740 *name; int attrs; } Oa_82A1F740;
typedef struct Tab_82A1F740 {
  int pad0[3];
  int (*create)(void **, unsigned int, Oa_82A1F740 *, int *, int, int, int, int, int);
  int pad1[4];
  int (*query)(void *, int *, void *, int, int);
} Tab_82A1F740;
extern Tab_82A1F740 *lbl_83219B8C;
extern void RtlInitAnsiString(Ansi_82A1F740 *, const char *);
extern int NtWriteFile(void *, int, int, int, int *, void *, unsigned int, long long *);
extern int NtWaitForSingleObjectEx(void *, int, int, int);
extern void NtClose(void *);

int fn_82A1F740(unsigned int remaining)
{
  void *h;
  int iosb[2];
  Oa_82A1F740 oa;
  Ansi_82A1F740 name;
  Info_82A1F740 info;
  char buf[0x1000];
  int hr;
  unsigned int chunk;

  RtlInitAnsiString(&name, "cache:\\$cache$\\spc");
  oa.root = -3;
  oa.attrs = 0x40;
  oa.name = &name;
  hr = lbl_83219B8C->create(&h, 0x40100000, &oa, iosb, 0, 0, 0, 3, 8);
  if (hr >= 0) {
    hr = lbl_83219B8C->query(h, iosb, &info, 0x38, 0x22);
    if (hr >= 0) {
      while (remaining != 0) {
        chunk = 0x1000;
        if (remaining < 0x1000) {
          chunk = remaining;
        }
        hr = NtWriteFile(h, 0, 0, 0, iosb, buf, 0x1000, &info.off);
        if (hr == 0x103) {
          hr = NtWaitForSingleObjectEx(h, 1, 0, 0);
          if (hr < 0) break;
          hr = iosb[0];
        }
        if (hr < 0) break;
        info.off = info.off + chunk;
        remaining = remaining - chunk;
      }
      NtClose(h);
    }
  }
  return hr;
}
