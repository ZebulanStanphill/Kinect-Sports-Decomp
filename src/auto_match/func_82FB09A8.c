extern float lbl_8201FBB8;
extern float lbl_8326422C;

typedef struct Object_82FB09A8 {
    char padding[0x28];
    int value; /* 0x28 */
} Object_82FB09A8;

typedef struct Entry_82FB09A8 {
    int key;
    Object_82FB09A8 *object;
} Entry_82FB09A8;

typedef struct Owner_82FB09A8 {
    char padding[0x88];
    Entry_82FB09A8 *begin; /* 0x88 */
    Entry_82FB09A8 *end;   /* 0x8c */
    char padding90[0x14];
    int value; /* 0xa4 */
} Owner_82FB09A8;

void fn_82FB09A8(Owner_82FB09A8 *self, int value)
{
    Entry_82FB09A8 *entry;

    self->value = (int)((float)value * lbl_8201FBB8 * lbl_8326422C);
    for (entry = self->begin; entry != self->end; entry++) {
        entry->object->value = self->value;
    }
}
