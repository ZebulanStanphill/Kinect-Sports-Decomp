extern unsigned char fn_8265D598(void *first, void *second);
extern void fn_82669D58(void *first, void *last, void *dest, unsigned char tag);
void fn_82669C68(void *first, void *last, void *dest)
{
    unsigned char tag = fn_8265D598(first, dest);
    fn_82669D58(first, last, dest, tag);
}
