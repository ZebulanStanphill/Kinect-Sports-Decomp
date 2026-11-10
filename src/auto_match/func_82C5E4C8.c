typedef struct {
  char pad0[0x120]; int a120; char pad124[0xd54 - 0x124];
  int ad54; int ad58; int ad5c; char padd60[8]; int ad68; int ad6c; char padd70[0x3a04 - 0xd70];
  int a3a04; char pad3a08[0x3c04 - 0x3a08]; int a3c04; char pad3c08[0x5678 - 0x3c08]; int a5678;
} Obj_82C5E4C8;

void fn_82C5E4C8(Obj_82C5E4C8 *o)
{
  o->a120 = 0;
  o->ad54 = -3;
  o->ad58 = 0;
  o->ad68 = 0;
  if (o->a3c04 != 0) {
    o->a3a04 = 0;
  } else {
    o->a3a04 = 1;
  }
  o->ad5c = 0;
  o->ad6c = 0;
  o->a5678 = 0;
}
