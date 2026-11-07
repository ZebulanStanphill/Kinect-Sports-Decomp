extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int KeDelayExecutionThread(int,unsigned char,__int64 *);
extern void *memcpy(void *,const void *,unsigned);
extern long _InterlockedIncrement(long *);
extern int NtSetEvent(void *,void *);
typedef struct Queue_82A37680 { char *base; char *read; char *write; char lock[28]; void *event; int capacity; long count; int pad; int total; } Queue_82A37680;
int fn_82A37680(Queue_82A37680 *q, const void *source) {
  __int64 delay;
  void *lock=q->lock;
  long *count;
  RtlEnterCriticalSection(lock);
  count=&q->count;
  while(*count==q->capacity) {
    delay=-100000;
    KeDelayExecutionThread(1,0,&delay);
  }
  memcpy(q->write,source,0x60);
  q->write+=0x60;
  if(q->write==q->capacity*0x60+q->base) q->write=q->base;
  q->total++;
  if(_InterlockedIncrement(count)==1) NtSetEvent(q->event,0);
  RtlLeaveCriticalSection(lock);
  return 1;
}
