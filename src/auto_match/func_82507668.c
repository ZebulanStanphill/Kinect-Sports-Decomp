typedef struct Tmp_82507668 {
  int w[2];
} Tmp_82507668;

typedef struct Table_82507668 {
  char pad0[0x44];
  int base;
} Table_82507668;

typedef struct Owner_82507668 {
  char pad0[0x4c];
  Table_82507668 *table;
  char pad50[0x8c0 - 0x50];
  void ***entries;
  char pad8c4[0xb68 - 0x8c4];
  void *handle;
  char padb6c[0xff0 - 0xb6c];
  int result;
} Owner_82507668;

extern float lbl_821CA45C[];
extern float lbl_8218E8E8[];
extern void fn_8255F880(Tmp_82507668 *t, int src);
extern int fn_8255F8D0(Tmp_82507668 *t, float a, float b, int c);
extern void fn_827F2DD0(void *handle, int result, float f, int a, int b);
extern void fn_827EF828(void *handle, float f);
extern void fn_827EFFE8(void *handle);
extern void fn_827F0180(void *handle, void *value, int a, int b, int c);

void fn_82507668(Owner_82507668 *self, int src)
{
  Tmp_82507668 t;
  int result;
  fn_8255F880(&t, src);
  result = fn_8255F8D0(&t, 0.0f, lbl_821CA45C[1], 0);
  self->result = result;
  if (result != 0) {
    fn_827F2DD0(self->handle, result, lbl_8218E8E8[0], 0x12, 0);
  }
  fn_827EF828(self->handle, 0.0f);
  fn_827EFFE8(self->handle);
  if (self->entries != 0) {
    fn_827F0180(self->handle, *self->entries[self->table->base + 0x20], 1, 0, 0);
  }
}
