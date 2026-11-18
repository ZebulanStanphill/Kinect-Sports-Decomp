typedef struct Mode_82521468 {
    int state;          /* 0x00 */
    unsigned int flags; /* 0x04 */
    unsigned int count; /* 0x08 */
    void *handle;       /* 0x0c */
} Mode_82521468;

extern Mode_82521468 lbl_83265A58;
extern void *fn_825129C8(int arg);
extern void fn_82512A48(void *handle);

void fn_82521468(int state)
{
    switch (lbl_83265A58.state) {
    case 1:
        if (--lbl_83265A58.count == 0 && lbl_83265A58.handle != 0) {
            fn_82512A48(lbl_83265A58.handle);
            lbl_83265A58.handle = 0;
        }
        break;
    case 3:
        lbl_83265A58.flags &= ~2;
        break;
    case 5:
        lbl_83265A58.flags &= ~4;
        break;
    case 7:
        lbl_83265A58.flags &= ~1;
        break;
    }
    lbl_83265A58.state = state;
    switch (state) {
    case 1:
        if (lbl_83265A58.count == 0 && lbl_83265A58.flags == 0 && lbl_83265A58.handle == 0) {
            lbl_83265A58.handle = fn_825129C8(0);
        }
        lbl_83265A58.count++;
        break;
    case 2:
        lbl_83265A58.flags |= 2;
        break;
    case 4:
        lbl_83265A58.flags |= 4;
        break;
    case 6:
        lbl_83265A58.flags |= 1;
        break;
    }
}
