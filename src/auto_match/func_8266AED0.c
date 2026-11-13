extern unsigned char fn_8265D598(void *first, void *second);
extern int fn_8266AC00(void *first);
extern void fn_8266AF40(void *first, void *last, void *dest, void *al, int cat, unsigned char tag);

void fn_8266AED0(void *first, void *last, void *dest, void *al)
{
    unsigned char tag = fn_8265D598(first, dest);
    fn_8266AF40(first, last, dest, al, fn_8266AC00(first), tag);
}
