extern void __emit(unsigned int);
/* or r31,r31,r31: SMT thread-priority hint (XDK __db*cyc family) */
#define SPIN_HINT() __emit(0x7FFFFB78)
typedef struct Vt_82BD5328 { char pad[0x48]; void (*f48)(void *); } Vt_82BD5328;
typedef struct { void (**vt)(void *); } Obj8_82BD5328;
typedef struct { char pad[8]; void (*f8)(void *); } Vt8_82BD5328;
typedef struct { Vt8_82BD5328 *vt; } A_82BD5328;
typedef struct { Vt_82BD5328 *vt; } B_82BD5328;
typedef struct {
  int p0, p4;
  unsigned n;             /* 8 */
  char pad0c[0x30];
  A_82BD5328 *a3c;        /* 0x3c */
  B_82BD5328 *b40;        /* 0x40 */
  int s44;
  int s48;
  int p4c;
  int h[4];               /* 0x50 */
  int q60[1];
  char pad64[0x84];
  void *he8;
  char padec[0x20];
  int p10c;
  void *h110;
  char pad114[4];
  void *h118;
} Obj_82BD5328;
extern int lbl_83223ECC[];
extern void fn_8265C990(void *, int);
extern void fn_82A1E650(void *, int);
extern void fn_82A1E658(void *);
extern void fn_82A1E7D8(void *);
extern void fn_82BD7080(int);
extern void fn_82BD9E68(int);

void fn_82BD5328(Obj_82BD5328 *o)
{
  int i;
  unsigned u;
  int *p;
  lbl_83223ECC[0] = 0;
  lbl_83223ECC[1] = 0;
  if (o != 0) {
    if (o->he8 != 0 && o->he8 != (void *)-1) {
      fn_82A1E7D8(o->h110);
      o->p10c = 3;
      fn_82A1E650(o->he8, -1);
      o->p10c = 0;
      fn_82A1E658(o->he8);
      o->he8 = (void *)-1;
    }
    if (o->h110 != 0 && o->h110 != (void *)-1) {
      fn_82A1E658(o->h110);
      o->h110 = (void *)-1;
    }
    if (o->h118 != 0 && o->h118 != (void *)-1) {
      fn_82A1E658(o->h118);
      o->h118 = (void *)-1;
    }
    if (o->b40 != 0) {
      o->s44 = 0;
      while (o->s48 != 0) {
        SPIN_HINT();
      }
    }
    i = 0;
    do {
      fn_82BD7080(o->h[i]);
      o->h[i] = 0;
      i++;
    } while (i < 4);
    u = 0;
    if (o->n > 0) {
      do {
        fn_82BD9E68(o->h[u + 4]);
        o->h[u + 4] = 0;
        u++;
      } while (u < o->n);
    }
    if (o->b40 != 0) {
      o->b40->vt->f48(o->b40);
      o->b40 = 0;
    }
    if (o->a3c != 0) {
      o->a3c->vt->f8(o->a3c);
      o->a3c = 0;
    }
    fn_8265C990(o, 0x618a800c);
  }
}
