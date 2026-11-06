typedef struct Entry_82824558 {
  char pad0[0xc];
  int nameIndex;
  int value;
  char pad14[0xc];
} Entry_82824558;
typedef struct Db_82824558 {
  char pad0[0x388];
  Entry_82824558 **entries;
  char pad38c[0x3bc - 0x38c];
  char ***names;
} Db_82824558;
typedef struct Obj_82824558 {
  char pad0[0x10];
  Db_82824558 *db;
  int index;
} Obj_82824558;
typedef struct Key_82824558 {
  char *name;
  int value;
} Key_82824558;

extern int strcmp(const char *, const char *);

int fn_82824558(Obj_82824558 *o, Key_82824558 *k)
{
  Entry_82824558 *e;
  int d;
  if (o->db == 0)
    return 1;
  e = &(*o->db->entries)[o->index];
  d = strcmp((*o->db->names)[e->nameIndex], k->name);
  if (d == 0 && k->value != -1)
    d = k->value - e->value;
  return d;
}
