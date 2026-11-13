typedef struct Worker_82BF3FF8 { char pad0[8]; char thread[0x50]; char event[4]; } Worker_82BF3FF8;
extern int fn_82BFAA60(void *ev, int a, int b, int c);
extern void *fn_82BFAD38(void *thread, void (*proc)(void), int arg, const char *name);
extern void fn_82BF3FD0(void);

int fn_82BF3FF8(Worker_82BF3FF8 *w)
{
  int r = fn_82BFAA60(w->event, 0, 10000, 0);
  if (r != 0) {
    r = fn_82BFAD38(w->thread, fn_82BF3FD0, 0, "CFileAsyncWorker Thread") != 0;
  }
  return r;
}
