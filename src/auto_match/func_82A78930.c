typedef struct Range_82A78930 {
  void *buffer;
  int valid;
  unsigned int count;
} Range_82A78930;

typedef struct Stream_82A78930 Stream_82A78930;
typedef struct StreamVtbl_82A78930 {
  void *slots0[7];
  void (*Flush)(Stream_82A78930 *self);
  void *slots1[2];
  void (*Bind)(Stream_82A78930 *self, int a, Range_82A78930 *src, int b, Range_82A78930 *dst,
               int extra);
  unsigned int (*Count)(Stream_82A78930 *self, unsigned int n);
} StreamVtbl_82A78930;
struct Stream_82A78930 { StreamVtbl_82A78930 *vt; };

typedef struct Format_82A78930 {
  char pad[0xc];
  unsigned short stride;
} Format_82A78930;

typedef struct Source_82A78930 {
  char pad[0x2c];
  Format_82A78930 *format;
  int unk30;
  unsigned int size;
  Range_82A78930 range;
} Source_82A78930;

typedef struct Device_82A78930 {
  char pad[0x220];
  void *buffer;
} Device_82A78930;

typedef struct Renderer_82A78930 Renderer_82A78930;
typedef struct RendererVtbl_82A78930 {
  void *slots[2];
  int (*IsReady)(Renderer_82A78930 *self);
} RendererVtbl_82A78930;

struct Renderer_82A78930 {
  RendererVtbl_82A78930 *vt;
  Device_82A78930 *device;
  Stream_82A78930 *input;
  char pad0C[0x50 - 0xc];
  Source_82A78930 **source;
  char pad54[0x60 - 0x54];
  int inputExtra;
  char pad64[0x78 - 0x64];
  Format_82A78930 *format;
  int locked;
  char pad80[0xb0 - 0x80];
  void *unkB0;
  int unkB4;
  void *unkB8;
  char padBC[0xfc - 0xbc];
  Stream_82A78930 *output;
  int unk100;
  int outputExtra;
  Stream_82A78930 *flusher;
};

extern void fn_82A775C0(Renderer_82A78930 *self, unsigned int count);
extern void *fn_82A78740(Renderer_82A78930 *self, unsigned int bytes);

int fn_82A78930(Renderer_82A78930 *self)
{
  Source_82A78930 *src = self->source ? *self->source : 0;
  unsigned int q = src->size / src->format->stride;
  unsigned int n = q;
  unsigned int m = 0;
  Range_82A78930 r1;
  Range_82A78930 r2;
  Range_82A78930 *dst;
  Range_82A78930 *srcRange;

  if (self->output != 0) {
    n = self->output->vt->Count(self->output, q);
    m = n;
  }
  if (self->input != 0) {
    m = self->input->vt->Count(self->input, n);
  }
  if (self->flusher != 0 && self->locked == 0) {
    fn_82A775C0(self, m);
  }
  r1.count = m;
  if (self->vt->IsReady(self) == 0 || self->locked != 0 ||
      (self->unkB8 == 0 && self->unkB0 == 0)) {
    r1.buffer = 0;
    r1.valid = 0;
  } else {
    r1.buffer = fn_82A78740(self, self->format->stride * m);
    r1.valid = 1;
  }
  srcRange = &src->range;
  if (self->input != 0 && self->output != 0) {
    r2.count = n;
    r2.valid = 0;
    r2.buffer = self->device->buffer;
    dst = &r2;
  } else {
    dst = &r1;
    if (self->output == 0) {
      dst = srcRange;
    }
  }
  if (self->input != 0) {
    self->input->vt->Bind(self->input, 1, &r1, 1, dst, self->inputExtra);
  }
  if (self->output != 0) {
    self->output->vt->Bind(self->output, 1, dst, 1, srcRange, self->outputExtra);
  }
  if (self->flusher != 0) {
    self->flusher->vt->Flush(self->flusher);
  }
  return 0;
}
