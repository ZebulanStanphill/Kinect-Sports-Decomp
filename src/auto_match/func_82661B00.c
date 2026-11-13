extern unsigned char fn_8265D598(void *first, void *second);
extern void fn_82662DF0(void *first, void *last, void *dest, unsigned char tag);
void fn_82661B00(void *first, void *last, void *dest)
{
    unsigned char tag = fn_8265D598(first, last);
    fn_82662DF0(first, last, dest, tag);
}
