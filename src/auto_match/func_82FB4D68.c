typedef struct Node_82FB4D68 {
    struct Node_82FB4D68 *next;
} Node_82FB4D68;

typedef struct Obj_82FB4D68 {
    char pad[0x74];
    Node_82FB4D68 *cur;
} Obj_82FB4D68;

extern void fn_82FB4CB8(Obj_82FB4D68 *self);

void fn_82FB4D68(Obj_82FB4D68 *self)
{
    self->cur = self->cur->next;
    fn_82FB4CB8(self);
}
