extern void fn_822315A0(void *); extern void fn_824C04E0(void *, int); extern void fn_82517978(void *, int, int, int);
typedef struct SP_824C02A8 { int px; void *rep; } SP_824C02A8;
typedef struct O_824C02A8 { char pad[0x44]; SP_824C02A8 sp; } O_824C02A8;
void fn_824C02A8(O_824C02A8 *o, int *src) {
SP_824C02A8 t; void *rep;
SP_824C02A8 *sp;
fn_824C04E0(o, 3);
sp = &o->sp;
t.px = 0; t.rep = 0;
fn_82517978(&t, src[0], src[1], 0);
rep = sp->rep;
sp->rep = t.rep;
sp->px = t.px;
if (rep != 0) fn_822315A0(rep);
}
