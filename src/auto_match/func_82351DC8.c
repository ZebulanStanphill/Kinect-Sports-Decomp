typedef struct { int m0; int m4; int m8; int mc; int m10; int m14; int m18; int m1c; } G_82351DC8;
typedef struct { int m0; int m4; int m8; } O_82351DC8;
extern G_82351DC8 *fn_8225F160(void);
extern float lbl_82192438[];
extern float lbl_831C6E2C[];
extern unsigned int lbl_832765BC;

float fn_82351DC8(O_82351DC8 *o)
{
  if ((o->m8 == 0xd || o->m8 == 0xe) && fn_8225F160()->mc == 1 && fn_8225F160()->m1c == 0) {
    return lbl_82192438[-90];
  }
  if (fn_8225F160()->m0 == 0 || fn_8225F160()->m0 != 1 || lbl_832765BC == 0) {
    return lbl_82192438[18];
  }
  return lbl_831C6E2C[7];
}
