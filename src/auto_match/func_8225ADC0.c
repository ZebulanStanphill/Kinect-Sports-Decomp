typedef void (*callback)(void *object, int flag);

extern unsigned int *fn_8225AD50(void *storage);

unsigned int *fn_8225ADC0(unsigned int *param_1)
{
    unsigned int saved_value;
    unsigned int *replacement;
    unsigned int *storage[4];

    replacement = fn_8225AD50(storage);
    saved_value = *replacement;
    *replacement = *param_1;
    *param_1 = saved_value;
    if (storage[0] != 0) {
        (*(callback *)*storage[0])(storage[0], 1);
    }
    return param_1;
}
