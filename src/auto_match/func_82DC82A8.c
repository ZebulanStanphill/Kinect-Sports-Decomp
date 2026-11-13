typedef struct Base_82DC82A8 {
    int unk0;
} Base_82DC82A8;

typedef struct Obj_82DC82A8 {
    int unk0;
    int unk4;
    Base_82DC82A8 base;     /* 0x08 */
} Obj_82DC82A8;

void fn_82D83F88(void *list, Base_82DC82A8 *item);

void fn_82DC82A8(Obj_82DC82A8 *obj, void *list)
{
    fn_82D83F88(list, obj != 0 ? &obj->base : 0);
}
