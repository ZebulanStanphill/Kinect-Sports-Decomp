typedef struct { const char *name; unsigned time, unused; } TimerEntry_82CE9108;
typedef struct { int pad[1]; TimerEntry_82CE9108 *current; int pad2; TimerEntry_82CE9108 *end; } TimerStream_82CE9108;
typedef struct { unsigned char op; unsigned char kind; char rest[0x7e]; } Job_82CE9108;
typedef struct { char pad[0xd8]; struct { int (**tbl)(void *, Job_82CE9108 *); int pad[3]; } kinds[11]; } Self_82CE9108;

extern unsigned __int64 __mftb();
extern TimerStream_82CE9108 *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;
extern int fn_82CE8E78(void *, int, Job_82CE9108 *, int);

static void timer(const char *name)
{
  TimerStream_82CE9108 *stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    TimerEntry_82CE9108 *entry = stream->current;
    entry->name = name;
    entry->time = (unsigned)__mftb();
    stream->current = entry + 1;
  }
}

int fn_82CE9108(Self_82CE9108 *self)
{
  Job_82CE9108 job;
  int r;

  r = fn_82CE8E78(self, 0, &job, 0);
  while (r == 0) {
    switch (job.kind) {
    case 0:
      timer("TtPhysics");
      break;
    case 1:
      timer("TtPhysics");
      break;
    case 2:
      timer("TtCollision Query");
      break;
    case 3:
      timer("TtRayCast Query");
      break;
    case 4:
      timer("TtAnimation");
      break;
    case 5:
      timer("TtBehavior");
      break;
    case 6:
      timer("TtCloth");
      break;
    case 7:
      timer("TtPathfinding");
      break;
    case 9:
      timer("TtCharacter Proxy");
      break;
    case 10:
      timer("TtUserJob");
      break;
    default:
      timer("TtUnknownJobs");
      break;
    }
    r = self->kinds[job.kind].tbl[job.op](self, &job);
    timer("Et");
  }
  return r;
}
