typedef struct Owner_827D5680 {
  char pad[0x110];
  char table[1];
} Owner_827D5680;
extern void fn_827DF340(void *table, void *entry, int a, int b, void *callback, void *context);

void fn_827D5680(Owner_827D5680 *self, int a, int b, void *callback, void *context)
{
  fn_827DF340(self->table, 0, a, b, callback, context);
}
