extern void fn_822B5F90(void *, float);
extern int fn_82381BC0();

typedef struct Ent_822AE3C0 { char pad[0x24]; int f24; } Ent_822AE3C0;
typedef struct Link_822AE3C0 { struct Link_822AE3C0 *next; struct Link_822AE3C0 *prev; int pad; int pad2; Ent_822AE3C0 *ent; } Link_822AE3C0;
typedef struct Head_822AE3C0 { Link_822AE3C0 *next; } Head_822AE3C0;
typedef struct Inner_822AE3C0 { char pad[4]; Head_822AE3C0 *h; } Inner_822AE3C0;
typedef struct Slot_822AE3C0 { Inner_822AE3C0 **tab; int pad[3]; int idx; } Slot_822AE3C0;
typedef struct Vec_822AE3C0 { Slot_822AE3C0 **first; Slot_822AE3C0 **last; } Vec_822AE3C0;

void fn_822AE3C0(Vec_822AE3C0 *param_2, float param_1, unsigned char param_4)
{
  Slot_822AE3C0 **piVar2;
  Head_822AE3C0 *piVar1;
  Link_822AE3C0 *apiStack_40[1];

  for (piVar2 = param_2->first; piVar2 < param_2->last; piVar2 = piVar2 + 1) {
    piVar1 = (*piVar2)->tab[(*piVar2)->idx]->h;
    apiStack_40[0] = piVar1->next;
    while (apiStack_40[0] != (Link_822AE3C0 *)piVar1) {
      Ent_822AE3C0 *e = apiStack_40[0]->ent;
      if (param_4 == (e->f24 != 0)) {
        fn_822B5F90(e, param_1);
      }
      fn_82381BC0(apiStack_40);
    }
  }
}
