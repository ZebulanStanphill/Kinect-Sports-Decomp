extern int lbl_83215000[];
extern int lbl_8315C454;

void RtlEnterCriticalSection(void *cs);
void RtlLeaveCriticalSection(void *cs);
int KeSetEvent(void *ev, int increment, int wait);
void ObDereferenceObject(void *obj);

#define __sync() __emit(0x7C0004AC)

int fn_829D23A0(void)
{
  RtlEnterCriticalSection(&lbl_8315C454);
  if (lbl_83215000[0x290] == 1) {
    lbl_83215000[0x290] = 0;
    lbl_83215000[0x838] = 0;
    __sync();
    KeSetEvent(&lbl_83215000[0x291], 1, 0);
    if ((void *)lbl_83215000[0x295] != 0) {
      KeSetEvent((void *)lbl_83215000[0x295], 1, 0);
      ObDereferenceObject((void *)lbl_83215000[0x295]);
      lbl_83215000[0x295] = 0;
    }
  }
  RtlLeaveCriticalSection(&lbl_8315C454);
  lbl_83215000[0x8ba] = 0;
  return 0;
}
