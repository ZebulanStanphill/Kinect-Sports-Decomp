extern "C" unsigned int lbl_820DF0C0;
struct Flags { unsigned pad:27; unsigned b4:1; unsigned b3:1; unsigned rest:3; };
extern "C" bool fn_82BA9118(char *p) {
 Flags *f = (Flags *)(p+0xe4);
 int x;
 return !(bool)f->b3 && !(bool)f->b4 && *(int *)(p+0x50) != 31 && *(unsigned *)(p+0x80) == lbl_820DF0C0 && (x=*(int *)(p+0x18)) != 43 && x != 99 && x != 100;
}
