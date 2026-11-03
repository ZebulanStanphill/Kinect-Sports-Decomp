typedef struct Obj_8277BEE0 {
  char pad[0x3c];
  char **tab;
} Obj_8277BEE0;
#define LD(i) (*(float *)(*(int *)((((i) >> 8) & 0xfffffc) + (int)iVar2) + (((i) * 8) & 0x1ff8) + 4))

unsigned char fn_8277BEE0(Obj_8277BEE0 *param_1, unsigned param_2, int param_3)
{
  char **iVar2 = param_1->tab;
  float cur = *(float *)(*(int *)((param_2 >> 8 & 0xfffffc) + (int)iVar2) + (param_2 & 0x3ff) * 8 + 4);
  int ok;
  if ((int)param_2 <= param_3 || LD(param_2 - 1) >= cur)
    { unsigned n = param_2 + 1; ok = LD(n) > cur; }
  else
    ok = 0;
  return (unsigned char)ok;
}
