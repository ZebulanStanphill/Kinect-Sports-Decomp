typedef struct Ent_82FEC8B8 { char pad[0x80]; char key[4]; int state; } Ent_82FEC8B8;
typedef struct Vec_82FEC8B8 { Ent_82FEC8B8 **begin; Ent_82FEC8B8 **end; } Vec_82FEC8B8;
extern Vec_82FEC8B8 lbl_832643F4;
extern unsigned int fn_83025190(char *);
extern int fn_83024AA0(void *, int, int);

int fn_82FEC8B8(unsigned int id, int a, int b)
{
  Ent_82FEC8B8 **p;
  Ent_82FEC8B8 *e;
  for (p = lbl_832643F4.begin; p != lbl_832643F4.end; p++) {
    e = *p;
    if (fn_83025190(e->key) == id) {
      if (e->state == 2) return 0;
      return fn_83024AA0((char *)e + 0x10, a, b);
    }
  }
  return 0;
}
