extern void free(void *);
extern char lbl_8216A9E0[];

typedef struct Obj_82F6FA78 {
  char pad0[0x24];
  void *f24;
  char pad28[4];
  void *f2c;
  char pad30[4];
  void *f34;
  char pad38[4];
  void *f3c;
  void *f40;
  void *f44;
  void *f48;
  char pad4c[0x10];
  void *f5c;
} Obj_82F6FA78;

void fn_82F6FA78(Obj_82F6FA78 *p)
{
  if (p != 0) {
    if (p->f24 != 0) free(p->f24);
    if (p->f2c != 0) free(p->f2c);
    if (p->f34 != 0) free(p->f34);
    if (p->f3c != 0) free(p->f3c);
    if (p->f40 != 0) free(p->f40);
    if (p->f44 != 0) free(p->f44);
    if (p->f48 != 0) free(p->f48);
    if (p->f5c != lbl_8216A9E0) free(p->f5c);
    free(p);
  }
}
