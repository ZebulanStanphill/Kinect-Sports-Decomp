typedef struct { unsigned int type; int arg; void *event; char data[0x54]; } Cmd_82A35560;
typedef struct {
  char pad0[0x44];
  void (*threadBegin)(const char *name);
  void (*threadEnd)(void);
  char pad4c[0x78];
  char queue[4];
} Self_82A35560;

extern int fn_82A37768(void *queue, Cmd_82A35560 *cmd);
extern void fn_82A34B08(Self_82A35560 *self, Cmd_82A35560 *cmd);
extern void fn_82A34C78(Self_82A35560 *self, Cmd_82A35560 *cmd);
extern void fn_82A34DC8(Self_82A35560 *self, Cmd_82A35560 *cmd);
extern long NtSetEvent(void *event, long *previous);

int fn_82A35560(Self_82A35560 *self)
{
  Cmd_82A35560 cmd;
  if (self->threadBegin != 0)
    self->threadBegin("XctdDecompression");
  while (fn_82A37768(self->queue, &cmd) != 0) {
    switch (cmd.type) {
    case 0:
      fn_82A34B08(self, &cmd);
      break;
    case 1:
      fn_82A34C78(self, &cmd);
      break;
    case 2:
      fn_82A34DC8(self, &cmd);
      break;
    }
    if (cmd.event != 0)
      NtSetEvent(cmd.event, 0);
  }
  if (self->threadBegin != 0)
    self->threadEnd();
  return 0;
}
