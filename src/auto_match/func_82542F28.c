extern int fn_82543078();
extern int fn_82543198();
extern int fn_82543308();
extern int fn_825437D8();
extern int fn_82543940();
extern int fn_82639F78();


typedef struct Entry {
  int kind;
  unsigned int *range;
  unsigned int a;
  unsigned int b;
  unsigned int c;
  int pad[3];
} Entry;

typedef struct Group {
  int x0;
  int x4;
  unsigned int count;
  Entry *entries;
} Group;

typedef struct Slot {
  Group *groups;
  unsigned int count;
} Slot;

typedef struct Ctx {
  unsigned int dev;
  int pad[4];
  unsigned int a;
  unsigned int c;
} Ctx;

void fn_82542F28(Ctx *param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int i;
  unsigned int j;
  Group *g;
  Entry *e;

  for (i = 0; i < (*(Slot **)(param_2 + 0x14))[param_3].count; i++) {
    g = &(*(Slot **)(param_2 + 0x14))[param_3].groups[i];
    if (fn_82543078(param_1,param_2,g) != 0) {
      for (j = 0; j < g->count; j++) {
        e = &g->entries[j];
        if (e->kind == -1) {
          if (param_1->c != e->c) {
            fn_825437D8(param_1,param_2,e->c,param_3,param_4);
            param_1->c = e->c;
          }
          if (param_1->a != e->a) {
            fn_82543308(param_1,param_2,e->a);
            param_1->a = e->a;
          }
          fn_82639F78(param_1->dev,0,e->range[0],0,e->range[1],1);
          fn_82543940(param_1,e->b);
        }
        else {
          fn_82543198(param_1,param_2,e,param_3);
        }
      }
    }
  }
  return;
}
