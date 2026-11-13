extern int fn_82A1E658(void *h);

void fn_8266C4E8(void **h)
{
    if (*h != 0 && *h != (void *)-1) {
        fn_82A1E658(*h);
        *h = 0;
    }
}
