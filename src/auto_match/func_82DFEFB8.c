typedef struct Item_82DFEFB8 {void (**vt)();} Item_82DFEFB8;
typedef struct {int pad[2]; Item_82DFEFB8 **data; int count;} State_82DFEFB8;

void fn_82DFEFB8(State_82DFEFB8 *self,unsigned argument) {
 int i;
 int n = self->count;
 for (i = 0; i < n; i++) {
  Item_82DFEFB8 *item = self->data[i];
  item->vt[9](item,argument);
 }
}
