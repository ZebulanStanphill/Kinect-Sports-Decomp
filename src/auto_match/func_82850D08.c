typedef struct {
    int unk0[2];
    unsigned int bit;
} Slot_82850D08;

extern void fn_828114A8(void *bits, unsigned int bit);
extern void fn_82811500(void *bits, unsigned int bit);

void fn_82850D08(Slot_82850D08 *slot, unsigned char set, void **masks, int index)
{
    if (set)
        fn_828114A8(masks[index + 2], slot->bit);
    else
        fn_82811500(masks[index + 2], slot->bit);
}
