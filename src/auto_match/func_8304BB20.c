/* Virtual (lbl_8217DB0C slot 5): when the flag is set and the event is 1, forwards to fn_8304B7E0;
   otherwise returns 1. */
extern int fn_8304B7E0(void *self);

int fn_8304BB20(void *self, int event, unsigned char flag)
{
    if (flag != 0 && event == 1)
        return fn_8304B7E0(self);
    return 1;
}
