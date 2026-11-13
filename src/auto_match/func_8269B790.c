extern int fn_8267C4C8();
extern int fn_8267C4F0();


typedef struct {
  char pad0[8];
  int sub;
  char pad1[0xb00 - 0xc];
  unsigned int hi : 30;
  unsigned int flag : 1;
  unsigned int lo : 1;
} Obj_8269B790;

unsigned int fn_8269B790(Obj_8269B790 *o)
{
  unsigned int uVar1;
  unsigned int *w = (unsigned int *)((char *)o + 0x108);
  if (!(unsigned char)o->flag) {
    uVar1 = (*(int (**)())(*(int *)&o->sub + 0xc))((char *)o + 8, 4);
    if (uVar1 != 0) {
      fn_8267C4C8(uVar1);
    }
    if (*w != 0) {
      fn_8267C4F0(*w);
    }
    *w = (int)uVar1;
    if (uVar1 != 0) {
      fn_8267C4F0(uVar1);
    }
  }
  return *w;
}
