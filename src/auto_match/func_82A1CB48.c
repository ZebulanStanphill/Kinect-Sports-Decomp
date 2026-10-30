struct OA_82A1CB48 { int root; int name; int attr; };
struct FS_82A1CB48 { int p0[4]; unsigned spau; unsigned bps; };
extern int NtOpenFile(void *, unsigned, struct OA_82A1CB48 *, void *, unsigned, unsigned);
extern int NtQueryVolumeInformationFile(void *, void *, void *, unsigned, unsigned);
extern int NtClose(void *);
int fn_82A1CB48(int name, unsigned size)
{
  void *h;
  int iosb[2];
  struct OA_82A1CB48 oa;
  struct FS_82A1CB48 info;
  int r;
  oa.root = 0;
  oa.name = name;
  oa.attr = 0x40;
  r = NtOpenFile(&h, 0x100001, &oa, iosb, 3, 0x800021);
  if (r >= 0) {
    r = NtQueryVolumeInformationFile(h, iosb, &info, 0x18, 3);
    NtClose(h);
    if (r >= 0 && info.bps * info.spau != size) r = 0xc000014f;
  }
  return r;
}
