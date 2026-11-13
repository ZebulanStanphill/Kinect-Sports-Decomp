extern unsigned __int64 __mftb();
typedef struct { void *pad; unsigned int *current; void *pad2; unsigned int *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern int fn_82DB4770(int, int, float *);
extern unsigned int lbl_8323B4A0;

void fn_82DB46B8(int param_1, int param_2, float *param_3)
{
  TimerStream *stream;
  unsigned int *e;

  stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    e = stream->current;
    e[0] = (unsigned int)"LtMaintenance";
    e[3] = (unsigned int)"StResetTime";
    e[1] = (unsigned int)__mftb();
    stream->current = e + 4;
  }
  if (*param_3 >= *(float *)(param_1 + 0xc)) {
    fn_82DB4770(param_1, param_2, param_3);
  }
  stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    e = stream->current;
    e[0] = (unsigned int)"lt";
    e[1] = (unsigned int)__mftb();
    stream->current = e + 3;
  }
}
