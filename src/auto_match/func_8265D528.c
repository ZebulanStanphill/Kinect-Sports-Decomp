extern unsigned char fn_8265D598(void *first, void *second);
extern int fn_8266AC00(void *first);
extern void fn_8265D670(void *first, void *last, void *dest, void *al, int cat, unsigned char tag);

void fn_8265D528(void *first, void *last, void *dest, void *al)
{
    unsigned char tag = fn_8265D598(first, first);
    fn_8265D670(first, last, dest, al, fn_8266AC00(first), tag);
}
