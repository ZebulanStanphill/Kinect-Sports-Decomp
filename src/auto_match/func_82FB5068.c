typedef struct Voice_82FB5068 Voice_82FB5068;
typedef struct {
  void *pad0[4];
  void (*Advance)(Voice_82FB5068 *, int);
  void (*Play)(Voice_82FB5068 *, int, int);
} VoiceVt_82FB5068;
struct Voice_82FB5068 { VoiceVt_82FB5068 *vt; };

typedef struct Link_82FB5068 { struct Link_82FB5068 *next; } Link_82FB5068;
typedef struct { char pad0[0x74]; Link_82FB5068 *head; } Queue_82FB5068;

typedef struct {
  char pad0[0x14];
  Queue_82FB5068 *queue;
  int pad18;
  int voice;
  int delay1;
  int arg24[3];
  unsigned int flags;
  int delay2;
  int arg38[2];
  void *fade;
  unsigned char fading;
  char pad45[3];
  int offset;
} Obj_82FB5068;

extern void fn_82FA8948(Voice_82FB5068 *, int *, int);
extern void fn_82FA8A88(void *, int *, int);
extern void fn_82FB4CB8(Queue_82FB5068 *);

void fn_82FB5068(Obj_82FB5068 *o, int dt)
{
  int t;
  Voice_82FB5068 *v;

  if ((o->flags & 0x80000000) != 0) {
    t = o->offset + o->delay1;
    if (t >= 0 && t < dt) {
      fn_82FA8948((Voice_82FB5068 *)o->voice, o->arg24, t);
      o->flags &= 0x7fffffff;
    }
  }
  if (o->fading != 0 && o->fade != 0) {
    t = o->offset + o->delay2;
    if (t >= 0 && t < dt) {
      fn_82FA8A88(o->fade, o->arg38, t);
      o->fading = 0;
    }
  }
  if (o->voice != 0) {
    v = (Voice_82FB5068 *)o->voice;
    if (o->offset >= 0) {
      if (o->offset < dt) {
        Queue_82FB5068 *q;
        v->vt->Play(v, o->offset, o->offset);
        q = o->queue;
        q->head = q->head->next;
        fn_82FB4CB8(q);
        v = (Voice_82FB5068 *)o->voice;
        v->vt->Advance(v, dt - o->offset);
      } else {
        v->vt->Play(v, o->offset, dt);
      }
    } else {
      v->vt->Advance(v, dt);
    }
  }
  if (o->offset > (int)0x80000400)
    o->offset -= dt;
}
