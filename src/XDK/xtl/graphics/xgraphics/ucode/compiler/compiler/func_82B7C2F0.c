typedef struct { char pad[0x5d8]; char *buf; int len; int cnt; } Log_82B7C2F0;
extern int fn_82AB15D0(int, const char *, const char *, const char *, int);
extern int fn_82F6DCE0(char *, int, const char *, const char *);
extern int fn_82F6EDE8(char *, int, const char *, void *);

void fn_82B7C2F0(Log_82B7C2F0 *o, const char *fmt, void *args)
{
  int n;
  o->cnt = o->cnt + 1;
  n = fn_82F6DCE0(o->buf + o->len, 0x2000 - o->len, "%s", "@@ ");
  o->len = o->len + n;
  n = fn_82F6EDE8(o->buf + o->len, 0x2000 - o->len, fmt, args);
  o->len = o->len + n;
  if (o->len >= 0x2000) {
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "rslog_cnt < RSLOG_BUFFERSIZE", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\compiler.cpp", 0x631);
  }
}
