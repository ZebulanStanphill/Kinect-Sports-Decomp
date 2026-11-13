typedef struct Entry_8284C5C8 {
    unsigned int key;
    unsigned int values[3];
} Entry_8284C5C8;

extern Entry_8284C5C8 lbl_83157148[];

void fn_8284C5C8(unsigned int key, Entry_8284C5C8 *out)
{
    unsigned int i;

    for (i = 0; i < 0x24; i++) {
        if (key == lbl_83157148[i].key) {
            *out = lbl_83157148[i];
            return;
        }
    }
}
