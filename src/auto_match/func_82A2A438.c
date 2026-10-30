typedef struct { unsigned short Length; unsigned short MaximumLength; char *Buffer; } ANSI_STRING_82A2A438;
typedef struct { unsigned int RootDirectory; ANSI_STRING_82A2A438 *ObjectName; unsigned int Attributes; } OBJ_ATTR_82A2A438;
extern void RtlInitAnsiString(ANSI_STRING_82A2A438 *, const char *);
extern int fn_82A33500(OBJ_ATTR_82A2A438 *, void *, int, unsigned int *);
extern void fn_82A2B760(void);
extern void fn_82A35FB8(void *, void *);

int fn_82A2A438(const char *name, void *out)
{
  unsigned int handle = 0;
  ANSI_STRING_82A2A438 str;
  OBJ_ATTR_82A2A438 oa;
  char buf[0x148];
  RtlInitAnsiString(&str, name);
  oa.RootDirectory = 0xfffffffd;
  oa.Attributes = 0x40;
  oa.ObjectName = &str;
  if (fn_82A33500(&oa, buf, 0x148, &handle) < 0) {
    fn_82A2B760();
    return -1;
  }
  fn_82A35FB8(buf, out);
  return handle;
}
