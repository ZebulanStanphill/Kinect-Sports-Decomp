typedef void (*Handler_82A68B10)(void *args);

extern void fn_82A68970(void *args);
extern void fn_82A68A20(void *args);
extern void fn_82A68888(void *args);

Handler_82A68B10 fn_82A68B10(unsigned int kind)
{
    if (kind == 1)
        return fn_82A68970;
    if (kind == 2)
        return fn_82A68A20;
    return fn_82A68888;
}
