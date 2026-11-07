typedef struct Range_827E3220 {
  int start;
  int end;
} Range_827E3220;

typedef struct Sink_827E3220 Sink_827E3220;
typedef struct SinkVtbl_827E3220 {
  void *slots0[14];
  void (*setInfo)(Sink_827E3220 *self, void *info);
  void *slots1[7];
  void (*attach)(Sink_827E3220 *self, void *source);
} SinkVtbl_827E3220;
struct Sink_827E3220 { SinkVtbl_827E3220 *vt; };

typedef struct Source_827E3220 Source_827E3220;
typedef struct SourceVtbl_827E3220 {
  void *slots0[2];
  int (*read)(Source_827E3220 *self, void *arg, Range_827E3220 *range);
} SourceVtbl_827E3220;
struct Source_827E3220 { SourceVtbl_827E3220 *vt; };

typedef struct Obj_827E3220 {
  int unk0[3];
  int startArg;
  int endArg;
  int unk14;
  char info[0x20];
  Sink_827E3220 *sink;
  int unk3C[2];
  Source_827E3220 *source;
} Obj_827E3220;

extern void fn_82517978(Range_827E3220 *range, int start, int end, int unk);
extern void *fn_827D5600(void *arg);
extern void fn_827E0088(void *p, void *info);
extern void fn_827D9918(Sink_827E3220 *sink);

int fn_827E3220(Obj_827E3220 *self, void *arg)
{
  Range_827E3220 range;
  int result;
  if ((int)self->sink != 0) {
    if (self->source != 0) {
      range.start = 0;
      range.end = 0;
      fn_82517978(&range, self->startArg, self->endArg, 0);
      result = self->source->vt->read(self->source, arg, &range);
      if (result != 0x3e5 && result != 0x3e4) {
        if (result == 0) {
          fn_827E0088(fn_827D5600(arg), self->info);
          self->sink->vt->setInfo(self->sink, self->info);
        }
        fn_827D9918(self->sink);
        self->sink->vt->attach(self->sink, self->source);
      }
      return result;
    }
    return 2;
  }
  return 3;
}
