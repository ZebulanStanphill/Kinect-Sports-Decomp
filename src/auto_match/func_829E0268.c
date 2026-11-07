typedef struct { unsigned int size; unsigned int flags; } Params_829E0268;

typedef struct {
  unsigned char started;
  char pad1[3];
  int f4;
  int f8;
  int fC;
  int f10;
  int queue;
  char cs[0x1c];
} Obj_829E0268;

void *memset(void *, int, unsigned int);
extern void RtlInitializeCriticalSection(void *);
extern int XamXlfsInitializeUploadQueue(Params_829E0268 *, int *);

void fn_829E0268(Obj_829E0268 *o)
{
  int *queue = &o->queue;
  o->f4 = 0;
  *queue = 0;
  o->fC = 0;
  o->f8 = 0;
  o->f10 = 0;
  o->started = 0;
  RtlInitializeCriticalSection(o->cs);
  {
    Params_829E0268 p = {0};
    memset(&p, 0, sizeof(p));
    p.size = sizeof(p);
    if (XamXlfsInitializeUploadQueue(&p, queue) < 0 || *queue == -1)
      *queue = 0;
  }
}
