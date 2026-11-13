struct Voice_82E74BA0;
typedef struct VoiceVt_82E74BA0 {
  void *slots[0x2d];
  void (*GetState)(struct Voice_82E74BA0 *, unsigned int *);   /* 0xb4 */
} VoiceVt_82E74BA0;
typedef struct Voice_82E74BA0 { VoiceVt_82E74BA0 *vt; } Voice_82E74BA0;

typedef struct Obj_82E74BA0 {
  char pad[0x18];
  unsigned int rate;      /* 0x18 */
} Obj_82E74BA0;

unsigned __int64 fn_82E74BA0(Obj_82E74BA0 *o, Voice_82E74BA0 *v)
{
  unsigned int samples;
  if (v == 0)
    return 0;
  samples = 0;
  v->vt->GetState(v, &samples);
  return samples * 8000 / o->rate;
}
