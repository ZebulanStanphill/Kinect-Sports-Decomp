typedef struct { unsigned count; unsigned state[4]; unsigned char buf[64]; } Md5_82BF1B78;
typedef struct { unsigned __int64 a, b; } Dig_82BF1B78;
extern void XeCryptMd5Init(Md5_82BF1B78 *);
extern void XeCryptMd5Update(Md5_82BF1B78 *, const void *, unsigned);
extern void XeCryptMd5Final(Md5_82BF1B78 *, unsigned char *, unsigned);
extern int fn_82F64020(char *, unsigned, const char *, ...);
extern void *memset(void *, int, unsigned);

int fn_82BF1B78(char *out, int outlen, const void *data, unsigned len)
{
  Dig_82BF1B78 digest; Md5_82BF1B78 md5;
  if (data == 0 || out == 0 || outlen < 0x21)
    return 0;
  memset(&digest, 0, 16);
  XeCryptMd5Init(&md5);
  XeCryptMd5Update(&md5, data, len);
  XeCryptMd5Final(&md5, (unsigned char *)&digest, 0);
  fn_82F64020(out, outlen, "%08x%08x%08x%08x", md5.state[0], md5.state[1], md5.state[2], md5.state[3]);
  return 1;
}
