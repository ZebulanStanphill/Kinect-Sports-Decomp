typedef struct Source_82FAA478 {
  char pad0[0x60];
  void *stream;
} Source_82FAA478;

typedef struct Obj_82FAA478 {
  int pad0[2];
  int x8;
  int padc[10];
  int position;   /* 0x34 */
  int busy;       /* 0x38 */
  int pad3c;
  int source;     /* 0x40 */
  int base;       /* 0x44 */
} Obj_82FAA478;

extern int fn_82FAE150(void *stream);
extern int fn_82FAE168(void *stream);
extern void fn_82FA9DC8(Obj_82FAA478 *self, int x);

void fn_82FAA478(Obj_82FAA478 *self, unsigned char relative)
{
  if (self->source != 0 && self->busy == 0) {
    void *stream = ((Source_82FAA478 *)self->source)->stream;
    if (relative) {
      int delta = fn_82FAE150(stream) - self->base;
      self->position = fn_82FAE168(stream) + delta;
    } else {
      self->position = fn_82FAE168(stream) - self->base;
    }
    fn_82FA9DC8(self, self->x8);
  }
}
