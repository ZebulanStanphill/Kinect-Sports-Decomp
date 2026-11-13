typedef struct Trip_82333F40 { float a, b, c; } Trip_82333F40;
typedef struct Anim_82333F40 { char pad[0x18]; Trip_82333F40 t[6]; } Anim_82333F40;

typedef struct Clip_82333F40 {
  char pad[0x108];
  float time;
  float startTime;
} Clip_82333F40;

typedef struct Owner_82333F40 {
  char pad[0x10];
  Clip_82333F40 *clip;
} Owner_82333F40;

typedef struct Self_82333F40 {
  Owner_82333F40 *owner;
  int pad4;
  Anim_82333F40 anim;
  char pad68[0x10];
  char x78[8];
  char x80[8];
} Self_82333F40;

extern const float lbl_821CA45C[2];
extern const float lbl_8218E8FC;
extern void fn_824E4400(void *p, int arg);
extern void fn_827F57E8(Clip_82333F40 *clip, float speed, float blend);
extern void fn_8234E808(Anim_82333F40 *a);

void fn_82333F40(Self_82333F40 *self, int arg)
{
  Owner_82333F40 *owner;
  Clip_82333F40 *clip;
  Anim_82333F40 *a;
  Trip_82333F40 *t;
  fn_824E4400(self->x78, arg);
  fn_824E4400(self->x80, arg);
  owner = self->owner;
  fn_827F57E8(owner->clip, lbl_821CA45C[1], lbl_8218E8FC);
  clip = owner->clip;
  clip->time = clip->startTime;
  a = &self->anim;
  for (t = a->t; t != a->t + 6; t++) {
    t->c = (t->b - t->a) + t->a;
  }
  fn_8234E808(a);
}
