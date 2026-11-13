extern unsigned char fn_8265D598(void *first, void *second);
extern void fn_82667AE0(void *first, void *last, void *dest, unsigned char tag);
void fn_826678F8(void *first, void *last, void *dest)
{
    unsigned char tag = fn_8265D598(first, dest);
    fn_82667AE0(first, last, dest, tag);
}
