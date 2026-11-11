typedef struct Shader_831277E0 {
  const char *pixel;
  const char *vertex;
  const void *uniforms;
  const void *count;
} Shader_831277E0;

typedef union Slot_831277E0 {
  Shader_831277E0 s;
  unsigned __int64 q[2];
} Slot_831277E0;

extern const char *lbl_83154968[];
extern Slot_831277E0 lbl_83154A98[];
extern void *memset(void *, int, unsigned int);

void fn_831277E0(void)
{
  lbl_83154A98[0].s.pixel = lbl_83154968[5];
  lbl_83154A98[0].s.vertex = lbl_83154968[0];
  lbl_83154A98[1].s.pixel = lbl_83154968[6];
  lbl_83154A98[1].s.vertex = lbl_83154968[0];
  lbl_83154A98[2].s.pixel = lbl_83154968[7];
  lbl_83154A98[2].s.vertex = lbl_83154968[0];
  lbl_83154A98[3].s.pixel = lbl_83154968[8];
  lbl_83154A98[3].s.vertex = lbl_83154968[1];
  lbl_83154A98[4].s.pixel = lbl_83154968[9];
  lbl_83154A98[4].s.vertex = lbl_83154968[1];
  lbl_83154A98[5].s.pixel = lbl_83154968[10];
  lbl_83154A98[5].s.vertex = lbl_83154968[1];
  lbl_83154A98[6].s.pixel = lbl_83154968[11];
  lbl_83154A98[6].s.vertex = lbl_83154968[1];
  lbl_83154A98[7].s.pixel = lbl_83154968[12];
  lbl_83154A98[7].s.vertex = lbl_83154968[1];
  lbl_83154A98[8].s.pixel = lbl_83154968[13];
  lbl_83154A98[8].s.vertex = lbl_83154968[1];
  lbl_83154A98[9].s.pixel = lbl_83154968[14];
  lbl_83154A98[9].s.vertex = lbl_83154968[1];
  lbl_83154A98[10].s.pixel = lbl_83154968[15];
  lbl_83154A98[10].s.vertex = lbl_83154968[3];
  lbl_83154A98[11].s.pixel = lbl_83154968[17];
  lbl_83154A98[11].s.vertex = lbl_83154968[2];
  lbl_83154A98[12].s.pixel = lbl_83154968[19];
  lbl_83154A98[12].s.vertex = lbl_83154968[3];
  lbl_83154A98[13].s.pixel = lbl_83154968[21];
  lbl_83154A98[13].s.vertex = lbl_83154968[4];
  lbl_83154A98[14].s.pixel = lbl_83154968[16];
  lbl_83154A98[14].s.vertex = lbl_83154968[3];
  lbl_83154A98[15].s.pixel = lbl_83154968[18];
  lbl_83154A98[15].s.vertex = lbl_83154968[3];
  lbl_83154A98[16].s.pixel = lbl_83154968[20];
  lbl_83154A98[16].s.vertex = lbl_83154968[3];
  lbl_83154A98[17].s.pixel = lbl_83154968[22];
  lbl_83154A98[17].s.vertex = lbl_83154968[4];
  memset(&lbl_83154A98[18], 0, sizeof(Slot_831277E0));
}
