extern void __emit(unsigned int opcode);
#define __lwsync() __emit(0x7C2004AC)
extern void fn_82A1BB18(void);
extern int fn_8259A230(void);
extern void fn_82522ED8(unsigned int);
extern void fn_82598E80(unsigned int);
extern int fn_82BFE530(unsigned int, unsigned int *);
extern int fn_82BFE460(unsigned int);
extern unsigned int lbl_83296E18[];

void fn_82599020(void)
{
  unsigned int msg;
  unsigned int buf;
  int hr;
  int done;
  int idx;
  unsigned int h;

  msg = 0;
  fn_82A1BB18();
  fn_8259A230();
  do {
    if (msg != 0) {
      fn_82522ED8(msg);
    }
    fn_82A1BB18();
    idx = fn_8259A230();
    buf = 0;
    hr = fn_82BFE530(lbl_83296E18[idx], &buf);
    msg = hr >= 0 ? buf : 0;
    if (msg != 0) {
      __lwsync();
      fn_82598E80(msg);
    }
    fn_82A1BB18();
    idx = fn_8259A230();
    h = lbl_83296E18[idx];
    if (h != 0) {
      done = fn_82BFE460(h);
    } else {
      done = 1;
    }
  } while (done == 0);
  if (msg != 0) {
    fn_82522ED8(msg);
  }
}
