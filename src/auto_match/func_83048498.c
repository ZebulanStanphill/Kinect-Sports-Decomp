/* Virtual (lbl_8217DA20 slot 5): when the flag is set and the event is 1, forwards to fn_83048198;
   otherwise returns 1. */
extern int fn_83048198(void *self);

int fn_83048498(void *self, int event, unsigned char flag)
{
    if (flag != 0 && event == 1)
        return fn_83048198(self);
    return 1;
}
