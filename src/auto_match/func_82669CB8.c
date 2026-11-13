extern unsigned char fn_8265D598(void *first, void *second);
extern void fn_82669DC0(void *first, void *last, void *dest, unsigned char tag);
void fn_82669CB8(void *first, void *last, void *dest)
{
    unsigned char tag = fn_8265D598(first, last);
    fn_82669DC0(first, last, dest, tag);
}
