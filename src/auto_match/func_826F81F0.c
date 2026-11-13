typedef struct Color_826F81F0 {
  unsigned char a;
  unsigned char b;
  unsigned char c;
  unsigned char d;
} Color_826F81F0;

typedef struct Target_826F81F0 Target_826F81F0;
typedef struct TargetVt_826F81F0 {
  char pad[0xa0];
  float (*getAlpha)(Target_826F81F0 *self);
} TargetVt_826F81F0;
struct Target_826F81F0 {
  TargetVt_826F81F0 *vt;
  char pad[0xb00 - 4];
  unsigned int pad31 : 14;
  unsigned int colorSet : 1; /* 0x20000, set by fn_826F6C28 */
  unsigned int pad0 : 17;
};

typedef struct Source_826F81F0 Source_826F81F0;
typedef struct SourceVt_826F81F0 {
  char pad[0x40];
  Target_826F81F0 *(*getTarget)(Source_826F81F0 *self);
} SourceVt_826F81F0;
struct Source_826F81F0 {
  SourceVt_826F81F0 *vt;
  char pad[0x1a8 - 4];
  int disabled;
};

typedef struct Self_826F81F0 {
  int pad0;
  Color_826F81F0 color;
} Self_826F81F0;

extern float lbl_82005CCC;
extern void fn_826F6C28(Target_826F81F0 *target, Color_826F81F0 *color);

void fn_826F81F0(Self_826F81F0 *self, Source_826F81F0 *src)
{
  Target_826F81F0 *t;
  Color_826F81F0 c;
  if (src->disabled == 0) {
    t = src->vt->getTarget(src);
    if ((unsigned char)t->colorSet == 0) {
      self->color.a = (unsigned char)(int)(t->vt->getAlpha(t) * lbl_82005CCC + 0.5f);
      c = self->color;
      fn_826F6C28(t, &c);
    }
  }
}
