typedef struct Entry_825521C8 {
    unsigned int key;
    unsigned int value;
} Entry_825521C8;

extern Entry_825521C8 lbl_831C1CE8[];

void fn_825521C8(char *object, int index)
{
    unsigned int *value_slot = (unsigned int *)(object + 0x2ed8);
    unsigned __int64 *flags = (unsigned __int64 *)(object + 0x10);

    *value_slot = lbl_831C1CE8[index].value;
    *flags |= 0x80000u;
}
