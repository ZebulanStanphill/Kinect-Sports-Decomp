extern int KeTlsSetValue(unsigned int index, void *value);

extern unsigned int lbl_8323B1B0;

int fn_82CE5400(void *value)
{
    return KeTlsSetValue(lbl_8323B1B0, value);
}
