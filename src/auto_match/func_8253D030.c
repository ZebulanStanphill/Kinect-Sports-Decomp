#define __lwsync() __emit(0x7C2004AC)
extern void fn_8253D1C0(void);
extern int *fn_82599308(void);
extern int *fn_82522DF8(int);
extern void fn_82A1BB18(void);
extern int fn_8259A230(void);
extern void fn_82BFE128(int, void *);
extern float lbl_82193A34;
extern int lbl_8326C3A0;
extern int lbl_83296E18[];
typedef struct { char pad0[8]; int f8; int fc; int f10; char pad1[0x44-0x14]; int f44; char pad2[0xf0-0x48]; int ff0; } A;
typedef struct { char pad[0x1f8]; int f1f8; } B;
void fn_8253D030(A *a, B *b, float f)
{
  if (a->f44 != 0 && b->f1f8 != 0 && a->ff0 != 0) {
    int *p;
    fn_8253D1C0();
    a->ff0 = 0;
    a->f10 = lbl_8326C3A0;
    p = fn_82599308();
    *p = 3;
    p = fn_82522DF8(0x40);
    *p = 4;
    fn_82A1BB18();
    p[1] = fn_8259A230();
    p[2] = 3;
    *(float *)&p[6] = f;
    *(float *)&p[7] = lbl_82193A34;
    p[4] = a->fc;
    p[5] = a->f10;
    p[3] = a->f8;
    __lwsync();
    fn_82BFE128(lbl_83296E18[3], p);
  }
}
