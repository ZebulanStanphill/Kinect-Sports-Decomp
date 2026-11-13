#define __sync() __emit(0x7C0004AC)

typedef struct Globals_829D2868 {
  char pad0[0xa40];
  int state;
  int event[4];
  void *extraEvent;
  unsigned int pad58 : 31;
  unsigned int quiet : 1;
  int next;
  int current;
} Globals_829D2868;

extern char lbl_8315C454[];
extern Globals_829D2868 lbl_83215000;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int KeSetEvent(void *, int, int);

void fn_829D2868(int force)
{
  RtlEnterCriticalSection(lbl_8315C454);
  if (lbl_83215000.state == 1) {
    if (force != 0) {
      lbl_83215000.current = lbl_83215000.next;
      __sync();
    } else if (lbl_83215000.quiet) {
      goto done;
    }
    KeSetEvent(lbl_83215000.event, 1, 0);
    if (lbl_83215000.extraEvent != 0) {
      KeSetEvent(lbl_83215000.extraEvent, 1, 0);
    }
  }
done:
  RtlLeaveCriticalSection(lbl_8315C454);
}
