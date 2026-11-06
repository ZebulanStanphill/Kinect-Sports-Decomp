extern int XamGetExecutionId(void *);
typedef struct { char pad[0xc]; unsigned short v; } ExecId_82A2B7B8;
unsigned fn_82A2B7B8(unsigned param_1)
{
  unsigned r;
  int hr;
  ExecId_82A2B7B8 *id;
  r = 0x65b;
  if (param_1 == 0) {
    r = 0;
  } else {
    hr = XamGetExecutionId(&id);
    if (hr >= 0) {
      r = (id->v != (param_1 >> 16)) ? r : 0;
    }
  }
  return r;
}
