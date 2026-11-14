extern unsigned int lbl_83265A58;
extern void fn_82521468(int state);

void fn_82521410(int *active)
{
    int value = *active;
    switch (lbl_83265A58) {
    case 0:
        if (value != 0) {
            fn_82521468(1);
        }
        break;
    case 1:
        if (value == 0) {
            fn_82521468(0);
        }
        break;
    case 7:
        if (value == 0) {
            fn_82521468(0);
        }
        break;
    }
}
