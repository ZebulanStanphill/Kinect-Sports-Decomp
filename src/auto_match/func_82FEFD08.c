typedef struct Obj_82FEFD08 {
    char pad[0x17c];
    void *item;
} Obj_82FEFD08;

extern void *lbl_832642F8;
extern void fn_8301B488(void *mgr, void *item);
extern void fn_8301B4D8(void *mgr, void *item);

void fn_82FEFD08(Obj_82FEFD08 *self, unsigned char add)
{
    void *item = self->item;
    if (item == 0)
        return;
    if (add)
        fn_8301B488(lbl_832642F8, item);
    else
        fn_8301B4D8(lbl_832642F8, item);
}
