extern char lbl_831E7A5C[];
extern int fn_82665688(void *key);
extern void **fn_8265CF50(void *vec, unsigned int index);

void *fn_82665628(void *key)
{
    int index = fn_82665688(key);
    if (index >= 0) {
        return *fn_8265CF50(lbl_831E7A5C + 4, index);
    } else {
        return 0;
    }
}
